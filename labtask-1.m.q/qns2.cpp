#include <iostream>
using namespace std;
int main ()
{
    int arr[5];
    int *ptr;
    ptr=arr;
    for(int i=0;i<5;i++)
    {
        *(ptr+i)=i+1;
    }
    for(int i=0;i<5;i++)
    {
       cout <<"The values of arrray are:"<< *(ptr+i)<<endl;
    }
     for(int i=0;i<5;i++)
    {
        *(ptr+i)=5-i;
        cout <<"The Reversed values of arrray are:"<< *(ptr+i)<<endl;
    }
    return 0;
}