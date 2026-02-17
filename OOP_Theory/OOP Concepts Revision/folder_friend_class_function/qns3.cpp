#include<iostream>
using namespace std;
class patient{
    string medical_history;
    string disease;
    public:    
    patient(string m,string d):medical_history(m),disease(d){}
    friend void prescribe_treatment(patient &p)
    {
        cout <<"According to your Medical History: "<<p.medical_history<< " and Disease : "<<p.disease<<endl;
        cout <<"Your treatment is : You should avoid fast food and take medicine "<<endl;
    };
};

int main()
{
    patient p1("trauma","costipation");
    prescribe_treatment(p1);

}