//#include <iostream>
//using namespace std;
// class bankaccount{
//     public:
//     static int total_accounts;
//     int account_number;
//     bankaccount ()
//     {
//         total_accounts++;
//         account_number=1000+total_accounts;
//     }
//     static int gettotalaccount()// static function cant use this pointer
//     {
//         return total_accounts;
//     }
// };
// int bankaccount::total_accounts=0;
//
// int main(){
//     bankaccount b1;
//     bankaccount b2;
//
//     cout<<b1.account_number<<endl;
//     cout<<b2.account_number<<endl;
//     cout<<bankaccount::gettotalaccount()<<endl;
//     return 0;
//
//
// }


//
//
// #include<iostream>
// using namespace std;
// class person{
//     const int id;
//     int age;
//
//     public:
//     person(int Id,int ag):id(Id),age(ag){} //const can only be initialized in this way in constructors not in their body like {id = Id}
//
//     int getid() const
//     {
//         return id;
//     }
//     void setage(int age)
//     {
//         this->age=age;
//     }
//     int getage() const{
//         return age;
//     }
// };
// int main()
// {
//     person p1(1,12);
//     cout <<"id is :"<<p1.getid()<<" age is : "<<p1.getage()<<endl;
//     p1.setage(26);
//     cout << "P1 New Age: " << p1.getage() << endl;
//     cout <<"id is :"<<p1.getid()<<" age is : "<<p1.getage()<<endl<<endl;
//
//     const person c_p2(2,23);
//     cout <<"id is :"<<c_p2.getid()<<" age is : "<<c_p2.getage()<<endl;
//     // c_p2.setage(26); error bcz constant object c_p2
//     cout << "no change bcz constant obj cant change this age: " << c_p2.getage() << endl;
//
// }
//



// #include<iostream>
// using namespace std;
// class laptop{
//     string brand;
//     int *specs;
//     int num_sp;
//
//     public:
//     laptop(string b,int n):brand(b),num_sp(n){
//         specs = new int[num_sp];
//         for( int i=0 ;i <num_sp ;i++)
//         {
//             specs[i]=0;
//         }
//         cout <<"Constructor called "<<brand<<endl;
//     }
//
//     ~laptop()
//     {
//         delete[] specs;
//         cout <<"Specs cleared for "<<brand<<endl;
//     }
//
//     void showspecs()
//     {
//         cout <<"The specs of Brand "<<brand<<endl;
//         for(int i =0 ;i<num_sp; i++)
//         {
//             cout <<"Number of specs "<<specs[i]<<endl;
//         }
//     }
//
// };
// int main()
// {
//     laptop l1("Hp",5);
//     l1.showspecs();
//
// }





//
//
//
// #include<iostream>
// using namespace std;
// class phone{
//     string model;
//     int *features;
//     int num_features;
//     public:
//     phone(string m,int n):model(m),num_features(n) {
//         features= new int[num_features];
//         for(int i=0;i<num_features;i++)
//         {
//             features[i]=0;
//         }
//     }
//             ~ phone()
//             {
//                 delete[] features;
//                 cout <<"Phone destructed !";
//             }
//             void setfeature(int index, int value)
//             {
//                 if(index<num_features)
//                 {
//                     features[index]=value;
//
//                 }
//             }
//             void showfeature()
//             {
//                 for (int i=0;i<num_features;i++)
//                 {
//                     cout<<"Features : "<<features[i]<<endl;
//                 }
//             }
// };
//     int main()
//     {
//         phone p1("nokia", 5);
//         p1.setfeature(0,120);
//         p1.showfeature();
//
//
//         cout<<"Through Pointer"<<endl;
//         phone *d1 = new phone("apple",2);
//         d1->setfeature(1,3);
//         d1->showfeature();
//         delete d1;//most impornatant
//         d1=nullptr;
//     }

//
// #include<iostream>
// using namespace std;
// class car{
//     string model;
//     int *speed;
//     int num;
//     public:
//     car():model(""),num(0),speed(nullptr){
//
//     }
//     car(string m,int n):model(m),num(n){
//         speed = new int[num];
//         for(int i=0; i<num;i++)
//         {
//             speed[i]=10+i;
//         }
//     }
//    //copy constructor
//     car(car &c)
//     {
//         model=c.model;
//         num=c.num;
//         //deep copy
//         speed = new int[num];
//         for(int i=0; i<num; i++)
//         {
//             speed[i]=c.speed[i];
//         }
//     }
//
//     void showspeed()
//     {
//         for(int i=0; i<num; i++)
//         {
//             cout <<"Model "<<model<<"With Speed : "<< speed[i]<<endl;
//         }
//     }
//     ~ car()
//     {
//         delete[] speed;
//     }
//
// };
//     int main()
//     {
//         car c1("Honda",2);
//         car c2=c1;
//         c1.showspeed();
//         c2.showspeed();
//         return 0;
//     }
//
//
//
// #include <iostream>
// #include <string>
// using namespace std;
//
// class Playlist {
// private:
//     string name;
//     int* songDurations; // Dynamic array
//     int numSongs;
//
// public:
//     // Constructor
//     Playlist(string n, int num) : name(n), numSongs(num) {
//         songDurations = new int[numSongs];
//         for(int i=0;i<numSongs;i++)
//         {
//             songDurations[i]=0;
//         }
//     }
//
//     // Deep Copy Constructor
//     Playlist(Playlist& other) : name(other.name), numSongs(other.numSongs) {
//         // Yeh hai concept ka hissa
//         songDurations = new int[numSongs]; // Nayi memory
//         for (int i = 0; i < numSongs; i++) {
//             songDurations[i] = other.songDurations[i]; // Deep copy
//         }
//     }
//
//     // Destructor
//     ~Playlist() {
//         delete[] songDurations; // Free memory
//     }
//
//     // Set Duration
//     void setDuration(int index, int value) {
//         if (index < numSongs) {
//             songDurations[index] = value; // Update value
//         }
//     }
//
//     // Show Durations
//     void showDurations() {
//         // Output logic skip - focus on concept nahi
//         for (int i = 0; i < numSongs; i++) {
//             cout << songDurations[i] <<endl; // Yeh concept ka hissa nahi, bas output
//         }
//         cout << endl;
//     }
// };
//
// int main() {
//     // Object banao
//     Playlist p1("Rock", 3);
//     p1.setDuration(0, 180); // Ek duration set
//
//     // Copy karo
//     Playlist p2 = p1; // Deep copy constructor call
//     p2.setDuration(0, 240); // Copied object mein change
//
//     // Dono dikhao
//     p1.showDurations(); // Original unchanged
//     p2.showDurations(); // Copied changed
//     return 0;
// }
//
//
//
//
// #include <iostream>
// #include <string>
// using namespace std;
//
// class Vehicle {
// protected:
//     string brand;
//
// public:
//     Vehicle(string b):brand(b){};
//     void move()
//     {
//         cout <<brand<<" Moving..."<<endl;
//     };
// };
//
// class Car : public Vehicle {
// private:
//     int seats;
// public:
//     Car(string b, int s):Vehicle(b),seats(s){};
//     void honk()
//     {
//         cout <<brand<<" is honking..."<<endl;
//     };
// };
//
// int main() {
//     Car c("Toyota", 4);
//     c.move();
//     c.honk();
//     return 0;
// }
//
//
//
//
// #include <iostream>
// #include <string>
// using namespace std;
//
// class Employee {
// protected:
//     string name;
// public:
//     Employee(){
//         cout<<"Default Constructor of Base"<<endl;
//     };
//     Employee(string n){
//         cout<<" Non-Default Constructor of Base"<<n<<endl;
//     };
// };
//
// class Manager : public Employee {
// private:
//     int teamSize;
// public:
//     Manager()
//     {
//         cout<<"Default Constructor of derived "<<endl;
//     };
//     Manager(string n, int t):Employee(n),teamSize(t){
//         cout<<"Non-Default Constructor of derived "<< n <<t<<endl;
//     };
// };
//
// int main() {
//     Manager m1;
//     Manager m2("Ali", 3);
//     return 0;
// }
//
//
//

//
//class Shape {
//public:
//    virtual double area() = 0; // Pure virtual function
//    virtual void display() {
//        cout << "This is a shape" << endl;
//    }
//    virtual ~Shape() {} // Virtual destructor is important!
//};
//
//class Rectangle : public Shape {
//private:
//    double width, height;
//public:
//    Rectangle(double w, double h) : width(w), height(h) {}
//
//    double area() override {
//        return width * height;
//    }
//
//    void display() override {
//    cout<< "Rectangle with area: " << area() << endl;
//    }
//};
//
//int main() {
//    // Shape s; // Error: Cannot instantiate abstract class
//    Shape* shape = new Rectangle(5, 3);
//    shape->display();
//    cout << "Area: " << shape->area() << endl;
//    delete shape;
//    return 0;
//}


//
//class vehicle{
//    public:
//    virtual calculatefuelefficiency()=0;
//    ~vehicle();
//
//};
//
//class car: public vehicle{
//public:
//    calculatefuelefficiency()override {
//        cout<<"this is car"<<endl;
//    }
//
//};
//class truck: public vehicle{
//public:
//    calculatefuelefficiency()override {
//        cout<<"This is truck"<<endl;
//    }
//
//};
//class motorcycle: public vehicle{
//public:
//    calculatefuelefficiency()override {
//        cout<<"This is motorcycle"<<endl;
//    }
//};
//int main()
//{
//    vehicle *v[3];
//    v[0]= new car();
//    v[1] = new truck();
//    v[2] = new motorcycle();
//for (int i=0; i<3; i++){
//    v[i]->calculatefuelefficiency();
//}
//
//}



//class Animal {
//protected:
//    string name;
//public:
//    Animal(string n) : name(n) {
//        cout << "Animal constructor" << endl;
//    }
//    virtual ~Animal() {
//        cout << "Animal destructor" << endl;
//    }
//};
//
//class Mammal : public Animal {
//public:
//    Mammal(string n) : Animal(n) {
//        cout << "Mammal constructor" << endl;
//    }
//    ~Mammal() {
//        cout << "Mammal destructor" << endl;
//    }
//};
//
//class Bird : public Animal {
//public:
//    Bird(string n) : Animal(n) {
//        cout << "Bird constructor" << endl;
//    }
//    ~Bird() {
//        cout << "Bird destructor" << endl;
//    }
//};
//
//// Diamond problem
//class Bat : public Mammal, public Bird {
//public:
//    Bat(string n) : Mammal(n + "-mammal"), Bird(n + "-bird") {
//        cout << "Bat constructor" << endl;
//    }
//    ~Bat() {
//        cout << "Bat destructor" << endl;
//    }
//};
//
//
//int main()
//{
//
//    Bat b("ank");
//}
// //here in this we are facing diamond problem
//
//
// //now here is solution of diamond problem
//class Animal {
//protected:
//    string name;
//public:
//    Animal(string n) : name(n) {
//        cout << "Animal constructor" << endl;
//    }
//    virtual ~Animal() {
//        cout << "Animal destructor" << endl;
//    }
//};
//
//class Mammal : virtual public Animal {
//public:
//    Mammal(string n) : Animal(n) {
//        cout << "Mammal constructor" << endl;
//    }
//    ~Mammal() {
//        cout << "Mammal destructor" << endl;
//    }
//};
//
//class Bird : virtual public Animal {
//public:
//    Bird(string n) : Animal(n) {
//        cout << "Bird constructor" << endl;
//    }
//    ~Bird() {
//        cout << "Bird destructor" << endl;
//    }
//};
//
//// Solved Diamond problem
//class Bat : public Mammal, public Bird {
//public:
//    Bat(string n) : Animal(n), Mammal(n), Bird(n) {
//        cout << "Bat constructor" << endl;
//    }
//    ~Bat() {
//        cout << "Bat destructor" << endl;
//    }
//};
//
//int main() {
//    Bat b("Batman");
//    return 0;
//}

//static members
//class counter{
//static double count;
//public:
//    counter(){
//    count++;
//
//    }
//    void getcount(){
//    cout <<"The total objects of counter are "<<count<<endl;
//    }
//    static double change(double d)
//    {
//
//        count = d;
//        cout <<"the total count after change are " << count<<endl;
//        return count;
//    }
//
//    ~counter(){
//    }
//
//};
//
//
//double counter :: count = 0;
//int main()
//{
//    counter c;
//    counter c1;
//    counter c2;
//    counter c3;
//    counter c4;
//    c.getcount();
//    c.change(7);
//    c.getcount();
//
//}
//
//
//
//
////from here friend function syntax
//class student
//{
//    int  marks;
//public:
//        student(int m):marks(m){}
//        friend void cheakmarks(student s);
//
//};
//void cheakmarks(student p){
// if (p.marks >=50)
//    {
//    cout <<"You Are Pass "<< endl;
//    }
//    else {
//    cout <<"You are fail" <<endl;
//    }
//}
//
//
//
//int main(){
//    student s1(49);
//    cheakmarks(s1);
//    return 0;
//}
//



//class sq;
//class rect{
//    int length;
//    int width;
//    public:
//    rect(int l , int w): width(w),length(l){}
//    friend void compare_area(rect r, sq s);
//};
//
//class sq{
//    int side;
//public:
//    sq(int s):side(s){}
//    friend void compare_area(rect r, sq s);
//
//};
//void compare_area(rect q , sq p){
//if (q.length*q.width>p.side*p.side)
//{
//
//    cout <<"The area of ractangle greater than square"<<endl;
//
//}
//else{
//    cout <<"The area of the squre is greater than rectangle"<<endl;
//}
//
//};
//int main ()
//{
//
//    rect r1(5,3);
//    sq s1(8);
//    compare_area(r1,s1);
//
//}




class box{
int len;
int width ;
int height ;
public:
    box(int l , int w, int h):len(l),width(w),height(h){}
    friend class display;
};

class display {
    public:
        void show(box b){
   double vol= b.len*b.width*b.height;
   cout <<"The vol is :"<<vol;
        }
};
int main(){
    box b(4,3,9);
    display m;
    m.show(b);



}
//addition operatotr
class DISTANCE{

int meters;
public:
    DISTANCE(){
    meters=0;
    }
DISTANCE(int m ):meters(m){}

    DISTANCE operator+(DISTANCE d){
    DISTANCE a;
    a.meters=meters+d.meters;
    return a;
    }
    void display(){
    cout <<"Meters = " <<meters<<endl;
}
};
int main()
{
    DISTANCE m1(15);
    DISTANCE m2(12);
    DISTANCE m3;

    m3=m1+m2;
    m3.display();
    return 0;
}

//subtraction operator
class point {
int x;
int y;
public:
    point(){
    x=0;
    y=0;
    };
    point(int x,int y):x(x),y(y){}
    point operator -(point p)
    {
        point a;
        a.x=x-p.x;
        a.y=y-p.y;
        return a;
    }
    void display()
    {
        cout <<"X="<<x<<endl;
        cout<<"Y="<<y<<endl;
    }

};
int main()
{
    point p1(2,3);
    point p2(4,5);
    point p3;
    p3=p2-p1;
    p3.display();

}


class number {
int value;
public:
    number(){
    value;
    };
    number(int v):value(v){}
    number operator *(number p)
    {
        number a;
        a.value=value*p.value;
        return a;
    }
    void display()
    {
        cout <<"value is ="<<value<<endl;
    }

};
int main()
{
    number p1(5);
    number p2(2);
    number p3;
    p3=p2*p1;
    p3.display();

}

//assignment comparison operator
class person {
int age;
public  :
    person(){
    age=0;
    }
    person(int p):age(p){}
    bool operator == (person p)
    {
        return p.age==age;

    }

};
int main()
{

    person p1(25);
    person p3(20);
    if(p1==p3)
    {
        cout <<"Yes both person age is same !"<<endl;

    }
    else {
        cout <<"No Both person Age is not same !"<<endl;
    }
}


class box{
int l,w,h;
public:
box()
{
    l=0;
    w=0;
    h=0;
}
box(int len,int wid,int hei):l(len),w(wid),h(hei){}

//here in assignment operator
box& operator = (box b)
{
    l=b.l;
    w=b.w;
    h=b.h;
    return *this;
}
void display()
{
    cout <<l<<" "<<w<<" "<<h<<endl;

}



};
int main() {
box b1(2,3,7);
box b2(3,4,9);
box b3;
b3=b1;
b1=b2;
b3.display();
b1.display();
}

//<< operator overloading
class student{
string name="azan Noor";
int roll=24;
public:
   friend ostream& operator << (ostream& out,student s)
    {
        out <<"The Name is :"<<s.name;
        out <<"The Roll Number is :"<<s.roll;
        return out;
    }

};
int main()
{
    student s;
    cout << s;

}
class student{
string name;
int roll;
public:
   friend istream& operator >> (istream& in,student s)
    {
        in>>s.name;
        in>>s.roll;
        return in;
    }

};

int main()
{
    student s;
    cin >> s;
}

//
class counter{
int count;
public:
    counter():count(0){}
    //pre increment
    counter operator ++()
    {
        ++count;
        return *this;

    }
    //post-increment
    counter& operator ++(int)//here address must with name of class because first we assign value then we make increment
    {
        counter temp = *this;
        count++;
        return temp;
    }
void display()
{

    cout <<count<<endl;
}

};
int main()
{
    counter c;
    c++;
    c.display();
    ++c;
    c.display();


}
class instrument{
public:
virtual void play()=0;
~instrument(){}
};
class guitar : public instrument{
public:
    void play()override {
    cout <<"Giter will play" <<endl;
    }

};
class piano : public instrument{
public:
    void play()override {
    cout <<"piano will play" <<endl;
    }

};
class drum : public instrument{
public:
    void play()override {
    cout <<"drum  will play" <<endl;
    }

};
int main()
{
    instrument *a[3];
    a[0]=new guitar();
    a[1]=new piano();
    a[2]=new drum();
    for(int i=0;i<3;i++)
    {
        a[i]->play();

    }
for(int i=0;i<3;i++)
   {
        delete a[i];
        a[i]=nullptr;
   }
}
