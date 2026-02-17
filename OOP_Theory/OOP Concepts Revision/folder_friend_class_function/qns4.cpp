#include<iostream>
#include<string>
using namespace std;

class librarian;
class book{
    int book_id;
    bool availaible_status;
    public:
    book(int i,bool a):book_id(i),availaible_status(a){}
    friend class librarian;
};
class librarian{
    public:
    bool issue_a_book(book &b)
    {
        if(b.availaible_status){
        cout <<"You issueing a book of id "<<b.book_id<<" Its availabilty status is : "<<b.availaible_status<<endl;
        }
        else{
            cout <<"Sorry the book of Id :"<<b.book_id <<" You are trying to access is currently not avalaible !"<<endl;
            return b.availaible_status=false;
        }
        return b.availaible_status=false;
    }
    void modify(book &b)
    {
        cout<<"Currently Modifying Book Of id :"<<b.book_id<<" Which is not availaible to availaible !"<<endl;
        b.availaible_status=true;
        cout <<"Enter the id of book :"<<endl;
        cin >>b.book_id;
        cout<<"Enter the availabilty of book "<<endl;
        cin>>b.availaible_status;
        cout << "Book updated: ID = " << b.book_id << ", Available = " << b.availaible_status << endl;

        
    }
    bool return_book(book &b)
    {
        cout <<"Returning Book Of id :"<<b.book_id<<endl;
        return b.availaible_status = true;
    }




};

int main ()
{
    book b(103,true);
    librarian l;
    l.issue_a_book(b);
    l.return_book(b);
    l.modify(b);

}