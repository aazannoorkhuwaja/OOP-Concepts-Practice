#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class english {
    char *sentence;
    int size;
public:
    english() : size(0) {  
        sentence = new char[1];
        sentence[0] = '\0';
    }
    english(const char n[], int s) : size(s) { 
        sentence = new char[size + 1];
        strcpy(sentence, n);
    }
    english(const english &e) {  
        cout<<"Copy constructor is called"<<endl;
        size = e.size;
        sentence = new char[size + 1];
        strcpy(sentence, e.sentence);
    }
    ~english() {
        delete[] sentence;  
    }
    void show() {
        cout << "Name: " << sentence << endl;
        cout << " Size: " << size << endl;
    }
};

int main() {
    english e1("Aazan", 5);
    e1.show();
    english e2(e1);
    e2.show();
    english e3(e2);
    e3.show();
    return 0;
}