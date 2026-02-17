//#include <iostream>
//using namespace std;
//
//struct Employee {
//    string name;
//    int id;
//    float salary;
//    void print()
//    {
//        cout <<"name:"<<name<<"id:"<<id<<"salary:"<<salary;
//    }
//};
//
//int main() {
//    Employee e1 = {"Sara", 101, 50000};
//    e1.print();
//    return 0;
//}

//array of objects
//#include <iostream>
//using namespace std;
//
//struct product {
//    string name;
//    float price;
//};
//
//int main() {
//    int prices[] = {10, 20, 30};  // Regular array
//    product items[3] = {{"banana",72.2},{"oange",29.3},{"apple",71.2}};
//    for(int i=0;i<3;i++)
//    {
//        cout<<items[i].name<<" "<<items[i].price<<endl;
//    }
//
//
//    // Create and initialize array of 3 products
//    // Print both arrays
//    return 0;
//}
//

// through pointer as object of struct
//#include <iostream>
//using namespace std;
//
//struct laptop {
//    string brand;
//    int ram;
//};
//
//int main() {
//    laptop l1 = {"Dell", 8};
//    laptop *ptr=&l1;
//    ptr->ram=10;
//    cout <<"the ram of:"<<ptr->ram;
//    return 0;
//}

//
//class syntax
//#include <iostream>
//using namespace std;
//
//int addMarks(int m1, int m2) {
//   return m1 + m2;
//}
//
//class Student {
//    int marks1, marks2;
//public:
//    //constructor
//    Student(int m1,int m2)
//    {
//        marks1 = m1;
//        marks2 = m2;
//    }
//    //member function
//        int totalmarks(){
//        return marks1 + marks2;
//        }
//    };
//int main() {
//    Student s1(50,60);
//    cout<<s1.totalmarks();
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//class Circle {
//    private:
//    int radius;
//    public:
//        //constructor to access private members of class
//    Circle(int r)
//    {
//        radius=r;
//    };
//
//    int circumfernce(){
//        return 2*3.142*radius;
//    }
//
//};
//
//int main() {
//    Circle c1(6);
//    cout <<c1.circumfernce();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class dog{
//    public:
//    string name;
//    int age ;
//    dog(string n,int a)
//    {
//        name=n;
//        age=a;
//    }
//    void print()
//    {
//        cout <<"name:"<<name<<"age:"<<age;
//    }
//};
//int   main ()
//{
//    dog d1("tommy",5);
//    dog d2("jimmy",6);
//    d1.print();
//    d2.print();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Box {
//    float length;
//public:
//    //setter
//   float setlength(float l)
//    {
//        length=l;
//    }
//    //getter
//  float  getlength()
//    {
//        return length;
//    }
//    //to double length because directly we cant access
//  float  doublelength()
//    {
//        length=length*2;
//    }
//};
//
//int main() {
//    Box b1;
//    b1.setlength(8);
//    cout<<b1.getlength()<<endl;
//    b1.doublelength();
//    cout<<b1.getlength();
//
//    return 0;
//}
