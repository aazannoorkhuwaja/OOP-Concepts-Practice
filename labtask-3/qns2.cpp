//student record management system
#include <iostream>
using namespace std;
struct address{
    string city;
    string state;
    int pincode;
};
struct student{
    string name;
    int roll_no;
    int marks[5];
    address a1;
};

student s_1 = {"Aazan Noor",706,{90,80,70,60,50},{"Karachi","Sindh",12345}};
student s_2;

int main(){
    s_2 = s_1;
    cout <<"------------------------------------------------"<<endl;
    cout<<"Student-1:\n";
    cout<<"Name: "<<s_1.name<<endl;
    cout<<"Roll NO: "<<s_1.roll_no<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++){
        cout<<s_1.marks[i]<<" ";
    }
    cout<<endl;
    cout<<"City Name: "<<s_1.a1.city<<endl;
    cout<<"State Name: "<<s_1.a1.state<<endl;
    cout<<"Pincode: "<<s_1.a1.pincode<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout<<"Student-2:\n";
    cout<<"Name: "<<s_2.name<<endl;
    cout<<"Roll NO: "<<s_2.roll_no<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++){
        cout<<s_2.marks[i]<<" ";
    }
    cout<<endl;
    cout<<"City Name: "<<s_2.a1.city<<endl;
    cout<<"State Name: "<<s_2.a1.state<<endl;
    cout<<"Pincode: "<<s_2.a1.pincode<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<"Modify student-2 marks: "<<endl;
    cout<<"Enter marks :"<<endl;
    for(int i=0;i<5;i++){
        cin>>s_2.marks[i];
    }
    s_1=s_2;
    cout <<"----------------------------------------------"<<endl;
    cout<<"student-1 details after modifying: "<<endl;
    cout<<"Name: "<<s_1.name<<endl;
    cout<<"Roll NO: "<<s_1.roll_no<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++){
        cout<<s_1.marks[i]<<" ";
    }
    cout <<endl;
    cout<<"City Name: "<<s_1.a1.city<<endl;
    cout<<"State Name: "<<s_1.a1.state<<endl;
    cout<<"Pincode: "<<s_1.a1.pincode<<endl;
    return 0;

}