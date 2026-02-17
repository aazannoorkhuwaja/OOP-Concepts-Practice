//#include <iostream>
//#include<cstring>
//using namespace std;
//
//class book
//{
//    public:
//    char *title;
//   double price;
//
//       book(char *n,double d):price(d){
//       title=new char[strlen(n)+1];
//       strcpy(title,n);
//       }
//       book(book &b)
//       {
//           title = new char[strlen(b.title)+1];
//           strcpy(title , b.title);
//           price=b.price;
//       }
//    void display()
//    {
//        cout <<"The title of book is  :"<<*title<<endl;
//        cout <<"And price is :"<<price<<endl;
//    }
//    ~book()
//    {
//        delete []title;
//
//    }
//
//};
//int main()
//{
//    book b1("ank",500);
//    book b2("ghulam",1000);
//    book b3 = b2;
//    b1.display();
//    b2.display();
//    b3.display();
//
//
//}
