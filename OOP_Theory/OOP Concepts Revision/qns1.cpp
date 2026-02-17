#include<iostream>
using namespace std;
class paymentprocessor{
    public:

    void processpayment()
    {
        cout<<"No any parameter"<<endl;
    };
    void processpayment(string cn)
    {
        cout<<"Credit card Number "<<cn<<endl;
    };
    void processpayment(string wid,float amount)
    {
        cout <<"Wallet Id :"<<wid<<" And Amount : "<<amount<<endl;
    };

};
int main()
{
paymentprocessor p;

    p.processpayment();
    p.processpayment("0123134");
    p.processpayment("24P-0706",2712.32);

}
