#include<iostream>
using namespace std;
//Self driving car
class car{
    int n=0;
    string *sensors=nullptr;
    public:
    void input_censors()
    {
        cout <<"How Many Sensors you want to Input in Car : "<<endl;
        cin>>n;
        sensors=new string[n];
        int i=0;
        while(i<n)
        {
            cout<<"Enter Sensor "<<i+1<<endl;
            cin>>sensors[i];
            i++;
        }
    }
    ~car()
    {
       delete[] sensors;
    }

};
int main()
{
    car c;
    c.input_censors();
    return 0;
}