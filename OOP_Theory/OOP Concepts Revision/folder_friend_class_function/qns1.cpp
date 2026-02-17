#include<iostream>
using namespace std;
class bank_account{
    int acc_no;
    int balance;
    public:
    bank_account(int a,int b):acc_no(a),balance(b){}
    friend void audit_account(bank_account b)
    {
        cout <<"The Audit Report is :"<<endl;
        cout <<"Acount No :"<<b.acc_no<<endl;
        cout << "The balance is :"<<b.balance<<endl;
    };
};
int main()
{
    bank_account b1(1454,2400);
    audit_account(b1);
}