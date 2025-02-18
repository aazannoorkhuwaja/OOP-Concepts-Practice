#include<iostream>
using namespace std;
int  main()
{
    int n,count=0;
    bool palindro=true;
    cout <<"The size of string :"<<endl;
    cin>>n;
    char *a=new char[n+1];
    cout <<"Enter any word which should not have any space and should be less then: "<<n<<" characters."<<endl;
    cin>>a; 
    for(int i=0;i<n/2;i++)
        {
            if(*(a+i) != *(a+n-i-1)){
            palindro=false;
            break;
            }
        }
    if(palindro)
    {
        cout <<"The array is Palindrome."<<endl;
    }
    else{
        cout <<"The array is not palindrome."<<endl;
    }
     char ch;
    cout <<"Enter the character to count its frequency."<<endl;
    cin>>ch;
    for (int i=0;i<n;i++)
    {
        if(*(a+i) == ch)
        {
            count++;
        }
    }
    cout <<"The Frequency of this character in the string is:"<<count<<endl;
    delete[] a;
    return 0;
}