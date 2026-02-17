#include<iostream>
using namespace std;
class spacesuit
{
    public:
    spacesuit()
    {
        cout<<"This Is the space suit of astronaut. this is spacesuit constructor"<<endl; 
    }
};
class astronauts{
    spacesuit *ss = nullptr;
    public:
    astronauts()
    {
        cout <<"This is astornaut constructor. spacesuit constructor called! "<<endl;
        ss=new spacesuit();
    }
    ~astronauts()
    {
        cout <<"Spacesuit destroyed !"<<endl;
        delete ss;
    }
};
class spaceship{
  
  public:
  spaceship()
  {
    cout<<"this is spaceship . astraunat object created !"<<endl;
    astronauts a;
  }

};
int main()
{
    spaceship s;
}