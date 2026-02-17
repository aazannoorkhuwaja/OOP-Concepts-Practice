#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class english{
    string sent_ence;
    int si_ze;
public:
    english() : si_ze(0) {  
        sent_ence = "";
    }
    english(string n){ 
        sent_ence = n;
        si_ze = strlen(n.c_str());
    }
    english(const english &e) {  
        cout<<"Copy constructor is called"<<endl;
        si_ze = e.si_ze;
        sent_ence = e.sent_ence;
    }
    void show() {
        cout << "Name: " << sent_ence << endl;
        cout << " Size: " << si_ze << endl;
    }

};
int main() {
    english e1("Aazan");
    e1.show();
    english e2(e1);
    e2.show();
    english e3(e2);
    e3.show();
    return 0;
}