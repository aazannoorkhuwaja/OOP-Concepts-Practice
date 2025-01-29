#include <iostream>
using namespace std;
int main()
{
    int n,sq_odd,fact=1,sq_cal=0;
    float div_of_fact=0,div_of_sq=0;
    cout <<"Enter any number: "<<endl;
    cin>>n;
    if(n>0){
        for(int i=1;i<=n;i++)
        {
            int num=n-(i-1);
        if(num%2==0){
            int fact =1;
            for(int j=1;j<=num;j++){
            fact*=j;
                }
            div_of_fact+=(float)fact/i;
            }
            else{
                sq_cal=(num)*(num);
                div_of_sq+=(float)sq_cal/i;
            }
        }

    cout <<"Series Of Given Number is :"<<div_of_fact+div_of_sq<<endl;
       
    }
    else{
        cout <<"input number greater than 0"<<endl;
    }
    return 0;
}