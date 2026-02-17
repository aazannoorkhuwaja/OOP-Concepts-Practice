#include<iostream>
using namespace std;
class bank_acc{
    private:
    string account_number;
    string account_holder_name;
    float balance;
    public:
    bank_acc(){
        account_number="N/A";
        account_holder_name="Unknown";
        balance=0;
    }
    bank_acc(string acc_no, string acc_holder_name, float bal){
        account_number=acc_no;
        account_holder_name=acc_holder_name;
        balance=bal;
    }
    ~bank_acc(){
        cout<<"Account Number:"<<account_number<<" Closed"<<endl;
    }
    void deposit(double amount){
        balance+=amount;
        cout<<"Amount Deposited: "<<amount<<endl;
    }
    void withdraw(double amount){
        if(balance>amount){
            balance-=amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        }
        else{
                cout<<"Not sufficient Balance because we have to leave balance greater than zero"<<endl;
        }
    }
    void display(){
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Account Holder Name: "<<account_holder_name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    bank_acc b1;
    b1.display();
    bank_acc b2("4520284", "Qasim", 1500);
    b2.display();
    b2.deposit(500);
    b2.withdraw(1800);
    b2.display();

   
    return 0;
}