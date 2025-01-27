#include <iostream>
using namespace std;
int main(){
int patt_num,i=1;
cout <<"Enter number upto which you want to print pattern:"<<endl;
cin>>patt_num;
int doub_num=patt_num*patt_num;
while(i<=doub_num)
{
    if (((i-1)%patt_num)<=((i-1)/patt_num))
    {
        cout <<"*";
    }
    else
    {
        cout <<(i-1)/(patt_num+1)+1;
    }
    if (i%patt_num==0)
    {
        cout<<endl;
    }
    i++; 
}
    return 0;
}