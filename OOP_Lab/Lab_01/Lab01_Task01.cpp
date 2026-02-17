#include<iostream>
using namespace std;
void  turns_one_other(int *c, int *d)
{
    int temp=*c;
    *c=*d;
    *d=temp;
}
int main()
{
    int a=5,b=10;
    int *p=&a,*p2=&b;
    turns_one_other(p,p2);
    cout<<"The Vale of a and b after swaping is :"<<*p<<" and "<<*p2<<endl;
}