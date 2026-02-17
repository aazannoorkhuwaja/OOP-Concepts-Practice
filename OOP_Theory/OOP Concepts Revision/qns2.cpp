#include<iostream>
using namespace std;
class printer {
    public:
    void print(int n){
        cout <<"integer :"<<n<<endl;
    }
    void print(string n){
        cout <<"string :"<<n<<endl;
    }
    class document;
    void print(document &d){
        d;cout <<"This is object of document class"<<endl;
    }
};