#include<iostream>
using namespace std;
class knowledge_base{
    public:
    knowledge_base()
    {
        cout <<"I have the all knowledge of this ai chat bot "<<endl;
    }
};

class aibot{
    class memory{
        public:
        memory(){
            cout<<"I have memory!"<<endl;
        }
    
    };
    public:
    memory *m=nullptr;
    knowledge_base *k;
    aibot(knowledge_base &p)
    {
        k=&p;
        
        m=new memory();
        
    }
    ~aibot()
    {
        delete m;
    }


};



int main(){
    aibot a(knowledge_base d);


    return 0;
}