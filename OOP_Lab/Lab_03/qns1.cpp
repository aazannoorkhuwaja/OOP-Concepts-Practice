#include<iostream>
using namespace std;

struct address{
    string city;
    string country;

};
struct contact_info{
    string name;
    long long int phone_no;
    address a1;

};

void display_contacts(contact_info c1[10]){
    for(int i=0;i<10;i++){
        cout <<"\nContact "<<(i+1)<<":\n";
        cout <<"Name: "<<c1[i].name<<endl;
        cout <<"Phone NO: "<<c1[i].phone_no<<endl;
        cout<< "City Name: "<<c1[i].a1.city<<endl;
        cout<<"Country Name: "<<c1[i].a1.country<<endl;
    }
}

int main(){

    contact_info contacts[10];
    for(int i=0;i<10;i++){
        cout <<"\nEnter details for contact "<<(i+1)<<":\n";
        cout <<"Enter your name: "<<endl;
        cin>>contacts[i].name;
        cout <<"Enter your Phone Number: "<<endl;
        cin>>contacts[i].phone_no;
        cout<< "Enter Your City Name: "<<endl;
        cin>>contacts[i].a1.city;
        cout<<"Enetr your Country Name: "<<endl;
        cin>>contacts[i].a1.country;
    }
    display_contacts(contacts);
    return 0;
}