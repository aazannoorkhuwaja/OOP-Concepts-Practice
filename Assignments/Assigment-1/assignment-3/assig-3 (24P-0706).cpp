#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
    static int count;

    public:
    void settle() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }

    };
    

    //default constructor
    Distance(){
        feet = 0;
        inches = 0;
        count++;
    }

    Distance(int f,int i):feet(f),inches(i){
        settle();
        count++;
    };

    //set foot and inches
    void setmts(){
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter Inches: ";
        cin >> inches;
        settle();
    };

    //get foot and inches 
    int getFeet() {
        return feet;
    }

    int getInches() {
        return inches;
    }
    // Displays
    void get_distance() {
        cout << feet << "' - " << inches << "\"" << endl;
    }

    void show_distance()
    {
        cout<<feet<<"'"<<" - "<<inches<<"\""<<endl;
    };
    //to copyobjects
    Distance(Distance &d)
    {
        feet = d.feet;
        inches = d.inches;
        count++;
    }
    //add operator
    Distance operator+(Distance &d){
        Distance p;
        p.feet = feet + d.feet;
        p.inches = inches + d.inches;
        p.settle();
        return p;
    }
    //pre-incrememt 
    Distance operator++( ){
        ++feet;
        ++inches;
        settle();
       return *this;
    }
    //post - increment
    Distance operator++( int ){
        Distance temp = *this;
        feet++;
        inches++;
        settle();
        return temp;
    }
    //pre - decrememnt 
    Distance operator--(){
        --feet;
        --inches;
        settle();
       return *this;
    }
    //post - decrement 
    Distance operator--(int){
        Distance temp = *this;
        feet--;
        inches--;
        settle();
        return temp;
    }

    bool operator < (Distance &d){
        if(feet < d.feet){
        return true;
        }
        else if (feet == d.feet && inches < d.inches){
        return true;
        }
        else {
        return false;
        }
    }
    Distance& operator+=(Distance &d){
        feet+= d.feet;
        inches += d.inches;
        settle();
        return *this;
    }
    friend ostream& operator << (ostream &out, Distance &d)
    {
        out<<d.feet<<"' - "<<d.inches<<"\""<<endl;
        return out;
    }

    friend istream& operator >> (istream &in , Distance &d)
    {
        cout << "Enter Feet: ";
        in >> d.feet;
        cout << "Enter Inches: ";
        in >> d.inches;
        d.settle(); 
        return in;
    }

    static int getcount(){
        return count;
    }
  

    //destructor
    ~Distance(){

    }


};

int Distance::count=0;

int main() {
    // Dynamic allocation of objects
    Distance* d1 = new Distance();           // Default constructor
    Distance* d2 = new Distance(5, 14);      // Param constructor + settle()
    Distance* d3 = new Distance(*d2);        // Copy constructor

    cout << "Distance d2 : ";
    d2->show_distance();

    cout << "\nEnter values for d1:\n";
    cin >> *d1;                              // Using >> operator
    cout << "You entered d1: " << *d1;       // Using << operator
    cout << "Feet: " << d1->getFeet() << ", Inches: " << d1->getInches() << endl;

    cout << "\nTo update d3:\n";
    d3->setmts();                            // User input

    cout << "Updated d3: ";
    d3->get_distance();          
    
    cout<<"now come to d4 "<<endl;// Display using get_distance()

    Distance* d4 = new Distance();           // To store result of d1 + d2
    *d4 = *d1 + *d2;                         // + operator
    cout << "\nd4 = " << *d4;

    cout << "\nPre-increment d4: ";
    ++(*d4);                                 // Pre-increment
    cout << *d4;

    cout << "Post-increment d4: ";
    (*d4)++;                                 // Post-increment
    cout << *d4;

    cout << "Pre-decrement d4: ";
    --(*d4);                                 // Pre-decrement
    cout << *d4;

    cout << "Post-decrement d4: ";
    (*d4)--;                                 // Post-decrement
    cout << *d4;

    cout<<"Adding d4 and d1 and then assigning to d4 "<<endl;
    *d4 += *d1;
    cout << *d4;

    cout << "\n Now comparing d1 and d2 using < operator:\n";
    if (*d1 < *d2)
        cout << "d1 is smaller than d2\n";
    else
        cout << "d1 is NOT smaller than d2\n";

    cout << "\nTotal Distance objects created: " << Distance::getcount() << endl;

    // Clean up dynamic memory
    delete d1;
    delete d2;
    delete d3;
    delete d4;

    return 0;
}
