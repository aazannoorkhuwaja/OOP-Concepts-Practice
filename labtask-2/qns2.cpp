#include<iostream>
using namespace std;
int main()
{
    int row_s,col_s,sum=0;
    cout <<"enter number of rows you want:"<<endl;
    cin>>row_s;
    cout<<"Enter number of coloums you want:"<<endl;
    cin>>col_s;
    int **a=new int*[row_s];
    for(int i=0;i<row_s;i++)
    {
        a[i]=new int[col_s];
    }
    for(int i=0;i<row_s;i++)
    {
        for(int j=0;j<col_s;j++)
        {
            cout <<"Enter the elements of 2d array : ";
            cin>>a[i][j];
        }
    }
    int first=a[0][0],least=a[0][0];
    for(int i=0;i<row_s;i++)
    {
        for(int j=0;j<col_s;j++)
        {
            sum+=a[i][j];
            if(first<a[i][j])
            {
                first=a[i][j];
            }
            if(least>a[i][j])
            {
                least=a[i][j];
            }
        }
    }
    
 cout <<"The Sum OF elements of 2d array is :"<<sum<<endl;
 cout<< "\nThe maximum element in this 2d array is :"<<first<<endl;
 cout <<"\nThe minimum number in this 2d array is :"<<least<<endl;
 cout<<"\n\n\nThe matrix before transpose."<<endl;
    for(int i=0;i<row_s;i++)
    {
        for(int j=0;j<col_s;j++)
        {
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
 cout <<"The transpose matrix is: "<<endl;
    for(int i=0;i<col_s;i++)
    {
        for(int j=0;j<row_s;j++)
        {
            cout <<a[j][i]<<" ";
        }
        cout<<endl;
    }    
    for(int i=0;i<row_s;i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
