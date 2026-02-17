#include<iostream>
using namespace std;
class time{
    int hours;
    int minutes;
    int seconds;
    public:
    time():hours(0),minutes(0),seconds(0){};
    time(int hours,int minutes, int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }
    void display()
    {
        cout<<"Time  "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    time addtwoobjects(time t1,time t2)
    {
        time store;
        store.hours=t1.hours+t2.hours;
        store.minutes=t1.minutes+t2.minutes;
        store.seconds=t1.seconds+t2.seconds;
        if(store.seconds>=60)
        {
            store.seconds-=60;
            store.minutes++;

        }
       if(store.minutes>=60)
       {
            store.minutes-=60;
            store.hours++;

       }
       return store;
    }

};
int main()
    {
        time t1(2,33,50);
        time t2(12,24,17);
        cout <<"Before Adding Objects of time :"<<endl;
        t1.display();
        t2.display();
        time t3,t4;
        t4=t3.addtwoobjects(t1,t2);
        cout <<"After Adding Objects of time :"<<endl;
        t4.display();
        return 0;
    }