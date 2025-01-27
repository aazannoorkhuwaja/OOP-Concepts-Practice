#include<iostream>
using namespace std;
int main (){
int curr_pop=100000;
float percent=0.13,each_year_per;
for (int i=1;i<=10;i++)
{
    each_year_per=percent*curr_pop;
    curr_pop+=each_year_per;
    cout <<"Population after "<<i<<" Year is :"<<curr_pop<<endl;
}
    return 0;
}
