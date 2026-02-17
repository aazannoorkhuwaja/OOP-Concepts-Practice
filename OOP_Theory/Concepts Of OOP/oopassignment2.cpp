//////qns1
//// #include<iostream>
//// using namespace std;
////
//// class company {
//// public:
////     static int count_employees;
////
////     company() {
////         //this will count the number of employees objects when created
////         count_employees++;
////     }
////    //we need static functions to access static instances or to modify them
////     static void display_count() {
////         cout << "Total Number of Employees: " << count_employees << endl;
////     }
//// };
//////here important is we initialize static out of class always
//// int company::count_employees = 0;
////
//// int main() {
////     company c1;
////     company c2;
////     company c3;
////     company::display_count();//this will show 3 objects or employees created.
////
////     return 0;
//// }
//
////
////
// //qns2
////#include<iostream>
////using namespace std;
////
////class Employee {
////    int emp_id;
////    const int salary;
////
////public:
//////    Employee()
//////    {
//////        emp_id=0;
//////        salary=2500;
//////        cout << "Address of current object: " << this << endl;//this will show address of current object
//////        cout << "Employee ID: " << this->emp_id << endl;
//////        cout << "Salary: " << this->salary << endl;
//////        cout << "-----------------------------" << endl;
//////
//////    }
////    Employee(int id, int sa) : emp_id(id), salary(sa) {
////        cout << "Address of current object: " << this << endl;//this will show address of current object
////        cout << "Employee ID: " << this->emp_id << endl;
////        cout << "Salary: " << this->salary << endl;
////        cout << "-----------------------------" << endl;
////    }
////};
////
////int main() {
////    Employee e1(101, 30000);
////    Employee e2(102, 35000);
////    Employee e3(103, 40000);
////    Employee e4;
////
////    return 0;
////}
//
////
//// //qns3
//// #include<iostream>
//// using namespace std;
////
//// class Car {
////     string model;
////     int year;
////
//// public:
////     Car(string m, int y) : model(m), year(y) {
////         cout << "Car Created -> Model: " << model << ", Year: " << year << endl;
////     }
////
////     ~Car() {
////         cout << "Car Destroyed -> Model: " << model << ", Year: " << year << endl;
////     }
//// };
////
//// int main() {
////     Car c1("Honda", 2008);
////     Car c2("Suzuki", 2010);
////
////     cout << "End of main function.\n"; //after constructors called then main function end and then destructor of last obj called and then destructor of 2nd last called
////     return 0;
//// }
////
//////
////
//// //qns 4
//// #include<iostream>
//// using namespace std;
//// class book {
////     string title;
////     string author;
////
//// public:
////
////     book(string t, string a) {
////         title=t;
////         author=a;
////     }
////
////
////     void display() {
////         cout <<"Book Title is : "<<title<<endl;
////         cout <<"Author of Book Is : "<<author<<endl;
////     }
//// };
////
//// int main() {
////     book* ptr  = new book("Al chemist","Couelo Pauelo");
////
////     ptr->display();
////
////     delete ptr;
////     return 0;
//// }
//////
////// //qns5
//// #include<iostream>
//// using namespace std;
//// class rectangle{
////     public:
////     int length;
////     int breadth;
////     rectangle(int l, int b)
////     {
////         length=l;
////         breadth=b;
////     }
////     //copy constructor
////     rectangle(rectangle &r)
////     {
////         length = r.length;
////         breadth = r.breadth;
////     }
////
//// };
//// int main()
//// {
////     rectangle r1(2,3);
////     rectangle r2=r1;
////     cout<<r2.length<<endl;
////     cout<<r2.breadth<<endl;
////
//// }
////
//
// //qns6
// #include<iostream>
// using namespace std;
// class person{
//     string *name;
// };
//
//
//class B {
//    protected:
//        int x, y;
//    public:
//B(int y=5):y(y){};
//    void X() { cout <<"y is: "<<Y()<<endl; };
//    int Y() {return 2*y;}
//};
//
//class D:public B{
//public:
//    int Y(){
//    return y*y*y;
//}
//};
//
//    int main() {
//        B d;
//        d.X();
//        d.X();
//}
