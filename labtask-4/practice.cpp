#include<iostream>
using namespace std;

    class student{
        public:
        int l=3;
        int w=2;
        
        ~student(){
            cout<<"Destructor"<<endl;
           cout<< "i will call at the end\n"<<endl;
        }
        student(int length,int width){
            cout<<"Default constructor"<<endl;
            l=length;
            w=width;
            cout<<"Length: "<<l<<endl;
            cout<<"Width: "<<w<<endl;
        }
        
    };

    void callconstructor() {
        cout<<"Now we call through any function constructor and destructor\n"<<endl;
        student s1(10, 20);
    }

    int main() {
        callconstructor();
        cout<<"Now we call Main function constructor and destructor\n"<<endl;
        student s2(30, 40);
        return 0;
    }
