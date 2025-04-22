#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string n , int a):name(n),age(a){};
};
class marks{
    public:
    float math_marks;
    float science_marks;
    marks(float a, float b):math_marks(a),science_marks(b){};
};

class student : public person,public marks{
    public:
    student (string n, int a, float math,float science ): person(n,a),marks(math,science){};

    float calculate()
    {
        float sum=math_marks+science_marks;
        float avg=sum/2;
        return avg;        
    }

    void display()
    {
        cout <<"Person Name : "<<name<<"\nPerson Age : "<<age<<"\nPerson Average Marks : "<< calculate()<<endl;
    }
};

int main()
{
    student s1("Aazan Noor Khuwaja",17,64,70);
    s1.display();
    return 0;
}