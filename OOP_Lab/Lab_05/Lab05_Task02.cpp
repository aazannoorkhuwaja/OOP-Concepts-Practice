#include<iostream>
using namespace std;
class serialnumber{
    int serial_number;
    static int count_objects ;
    public:
    serialnumber()
   {
        count_objects++;
        serial_number=count_objects;
        cout<<"object "<<count_objects<<" created!"<<endl;
   }
   static int getfun()
   {
    return count_objects;
   }
   void report_serial_numb()
   {
    cout<<"Serial Number is:"<<serial_number<<endl;

   }

};
   int serialnumber::count_objects=0;
    int main()
{
    serialnumber s1;
    s1.report_serial_numb();
    serialnumber s2;
    s2.report_serial_numb();
    serialnumber s3;
    s3.report_serial_numb();
   
  
    

    cout<<"The Total objects are "<<serialnumber::getfun()<<endl;
    return 0;

}