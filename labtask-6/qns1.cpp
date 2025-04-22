#include<iostream>
#include<string>
using namespace std;

class university{
    public:
    string name_university;
    university(string name):name_university(name){};
};
class department: public university{
    public:
    string dept_name;
    department(string n,string d): dept_name(d),university(n){
    };

};

class staff{
    public:
    int staff_id;
    staff(int id):staff_id(id){}
};

class professor : public department , public staff{
    public:
    string subj_taught;
    professor(string n_u , string d_u, int s_id, string s_t): department(n_u , d_u), staff(s_id) , subj_taught(s_t){};

    void display_info()
    {
        cout <<"University : "<<name_university<<"\nDepartment : "<<dept_name<<"\nStaff ID : "<<staff_id<<"\nSubject Taught : "<<subj_taught<<endl;
    }
};

int main()
{
    professor p1("Fast University" , "Computer Science ",706, " Calculus and Linear Algebra ");
    p1.display_info();

    return 0;
}
