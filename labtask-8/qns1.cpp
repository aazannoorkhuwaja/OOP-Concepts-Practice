#include<iostream>
using namespace std;
class time{
    int hours , minutes , seconds;
    public:
    time():hours(0),minutes(0),seconds(0){}
    time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    };
    void display(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    };
    time operator+(time t){
        time stored;
        stored.seconds = seconds + t.seconds;
        stored.minutes = minutes + t.minutes + (stored.seconds/60);
        stored.hours = hours + t.hours + (stored.minutes/60);
        stored.seconds %= 60;
        stored.minutes %= 60;
        return stored;
    };
};
int main(){
    time t1(2, 30, 45);
    time t2(1, 45, 50);
    time t3 = t1 + t2;
    cout<<"Time 1: ";
    t1.display();
    cout<<"Time 2: ";
    t2.display();
    cout<<"Sum of (Time 1 & 2): ";
    t3.display();
    return 0;
}
