#include<iostream>
using namespace std;
void rev_arr(int *rev_ptr)
    {
        int reversed_array[10];
        cout <<"\nThe Reversed Array is :";
        
        for(int i=9;i>=0;i--)
        {
            reversed_array[i]=*(rev_ptr+(9-i));
        }
        for (int i=0;i<10;i++)
        {
            cout <<reversed_array[i]<<" ";
        }
    }   


int find_sec_lar(int *a1){
    int temp=*(a1+0),sec_largest=0;
    for(int i=0;i<10;i++)
    {
        if(*(a1+i)>temp)
        {
            sec_largest=temp;
            temp=*(a1+i);
        }
        else if(*(a1 + i) > sec_largest && *(a1 + i) != temp)
        {
            sec_largest = *(a1 + i);
        }
    }
    return sec_largest;
}

void rotate(int *arr,int k,int size)
{
    k=k%size;
    int temp[k];  
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];  
    }

   
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    
    cout << "Array after rotation:";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int *ptr=arr,second_l_e,k;
    cout <<"The Original Array is :";
        for(int i=0;i<10;i++)
        {
            cout <<*(ptr+i)<<" ";
        }
    rev_arr(ptr);
    second_l_e = find_sec_lar(ptr);
    cout <<"\nThe Second largest element is : "<<second_l_e;
    cout <<"\nInput K to rotate array to Right:"<<endl;
    cin>>k;
    rotate(ptr,k,10);

}
