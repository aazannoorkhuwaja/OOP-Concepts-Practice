#include<iostream>
using namespace std;
class car{
    int engine_health;
    int oil_level;
    public:
    car(int i, int h):engine_health(i),oil_level(h){}
    friend class mechanic;
};

class mechanic{
    public:
    void cheak(car &c1)
   {
    cout<<"Engine Health Is :"<<c1.engine_health<<endl;
    cout<<"Oil Level Is: "<<c1.oil_level<<endl;
   }
   void repair(car &c2)
   {
        cout <<"Repair Your Engine Health "<<endl;
        cin>> c2.engine_health;
        cout <<"Repair Your Oil level :"<<endl;
        cin>> c2.oil_level;
    }
};
int main()
{
    car c (20 , 30);
    mechanic m;
    m.cheak(c);
    car c3(80, 89);
    m.repair(c3);
    cout <<"Now Car Repaid "<<endl;
    m.cheak(c3);

    

}