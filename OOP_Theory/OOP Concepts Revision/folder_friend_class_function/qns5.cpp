#include<iostream>
using namespace std;
class order {
int order_id;
bool shiping_status;
public:

 order(int i , bool b):order_id(i),shiping_status(b){}
friend void coustomer_care(order &o){
    cout << "Order id is :"<<o.order_id<<" -Whose shipping status is :"<< o.shiping_status<<endl;
    bool modify;
    cout <<"If you have complaints then y5ou cam modify your order if yes then leave `true` other vise leave `false` :  ";
    cin >>modify;
    if(modify)
    {
        cout <<"Enter your order id :";
        cin>>o.order_id;
        cout <<endl;
        cout<<"Enter shipping status :";
        cin>>o.shiping_status;
        cout <<endl;
        cout <<"Your modified order is : Order id ="<<o.order_id<<" Shipping status :"<<o.shiping_status<<endl;

    }
    else {
        cout <<"Ok Thats Great you dont want to modify your order !"<<endl;
    }
};
};
int main()
{
    order o1(123,false);
    coustomer_care(o1);
}
