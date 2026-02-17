#include <iostream>
#include <conio.h> 
using namespace std;
class toll_booth {
private:
    unsigned int total_cars;
    double total_money;

public:
    toll_booth(){
        total_cars=0;
        total_money=0;
    } 
    void paying_car() {
        total_cars++;
        total_money += 0.5;
        cout<<"paying car: "<<total_cars<<"\nTotal Money :"<<total_money<<endl; 
    }
    void nopay_car() {
        total_cars++;
        cout<<"non paying car: "<<total_cars<<endl;
    }
    void display() const {
        cout<<"Final Result"<<endl;
        cout << "Total cars: " << total_cars << endl;
        cout << "Total money: " << total_money << endl;
    }
    unsigned int get_total_cars() const {
        return total_cars;
    }

    double get_total_money() const {
        return total_money;
    }
};
int main() {
    toll_booth booth;
    char ch;
    cout << "Press 'p' for paying car, 'n' for nonpaying car, and 'Esc' to exit and display totals." << endl;
    while (true) {
        ch=_getch();
        if (ch == 27) { 
            booth.display();
            break;
        } else if (ch == 'p' || ch == 'P') {
            booth.paying_car();
        } else if (ch == 'n' || ch == 'N') {
            booth.nopay_car();
        }
        else{
            cout<<"Input is not correct!"<<endl;
        }
    }
    return 0;
}