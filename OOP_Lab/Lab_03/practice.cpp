#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int width;
    int height[3];
    int result(){
        return length*width;
    }
};
// rect1={10,20};
struct square{
    // rectangle rect1;
};

int main()
{
    rectangle rect1={3,4,{1,2,3}};
    // rectangle rect2;
    // rect2=rect1;
    // square s1;
    // s1.rect1.length=5;
    // s1.rect1.width=24;
    // cout <<s1.rect1.length <<endl<<s1.rect1.width<<endl;
    // rect1.height[0]=30;
    // rectangle rect1[3]={{1,2},{3,4},{5,6}};

    // rectangle rect1[3]={{1,2},{3},{}};
    // cout<<rect2.length<<endl;
    // cout<<rect1.height[0]<<endl;
    // cout <<rect2.result()<<endl;
    // for(int i=0;i<3;i++)
    // {
    //     cout<<rect1[i].length<<" ";
    //     cout<<rect1[i].width<<" ";
    // }
    // rectangle* rectptr;
    // rectptr = &rect1;
    // cout <<(*rectptr).length;
    // cout <<rectptr->length;



    return 0;
}
