#include<iostream>
using namespace std;
class max_value{
    private:
    float m_value;
    public:
    max_value(float a, float b){
        if(a>b){
            m_value=a;
        }
        else{
            m_value=b;
        }
    }
    max_value(float a, float b, float c){
        if(a>b && a>c){
            m_value=a;
        }
        else if(b>a && b>c){
            m_value=b;
        }
        else{
            m_value=c;
        }
    }
    void display(){
        cout<<"Max value: "<<m_value<<endl;
    }
};
int main(){
    max_value m1(2.5, 3.7);
    m1.display();
    max_value m2(10.2, 4.3, 5.6);
    m2.display();
    return 0;
}