#include <iostream>
using namespace std;
int main()
{
    int n,sq_odd,fact=1,sum_of_sq=0,sum_of_fact=0;
    cout <<"Enter any number: "<<endl;
    cin>>n;
    if(n>0){
         for(int j=n;j>0;j--)
                {
                    fact*=j;
                }

            for(int i=1;i<=n;i++)
            {
                    if (i%2==0)
                    {
                        sum_of_sq+=(i*i);
                    }
                    else{
                        sq_odd=i*i;
                        sum_of_fact+=fact/i;
                    }
            } 
                cout<<"sum of first n terms of series is :"<<sum_of_sq+sum_of_fact<<endl;
        }
        else{
            cout <<"input number greater than 0"<<endl;
        }
    return 0;

}