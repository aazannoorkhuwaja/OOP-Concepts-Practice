#include<iostream>
using namespace std;
class cart_items
{
        int n=0;
        string *items=nullptr;
        public:
        cart_items()
        {
            cout<<"Enter Number Of items to put in cart : "<<endl;
            cin>>n;
            items=new string[n];
            int i=0;
            while(i<n)
            {
                cout <<"Put Item "<<i<<" in cart "<<endl;
                cin>>items[i];
                i++;
            }
        }

        ~cart_items()
        {
            delete[ ] items;
        }
};
class shoping_cart
{
    cart_items *c=nullptr;
    public:
    shoping_cart()
    {
        c=new cart_items();
    }
    ~shoping_cart()
    {
        delete c;
    }

};

int main()
{
    shoping_cart s1;
}