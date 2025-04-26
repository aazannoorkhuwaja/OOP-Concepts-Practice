#include<iostream>
using namespace std;
class matrix{
    public:
    int mat_2x2[2][2];
    matrix(int a, int b, int c, int d){
        mat_2x2[0][0] = a;
        mat_2x2[0][1] = b;
        mat_2x2[1][0] = c;
        mat_2x2[1][1] = d;
    };

    matrix operator+(matrix m){
        matrix temp(0, 0, 0, 0);
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                temp.mat_2x2[i][j] = mat_2x2[i][j] + m.mat_2x2[i][j];
            }
        }
        return temp;
    }
    
    matrix operator*(matrix m){
        matrix temp(0, 0, 0, 0);
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                    temp.mat_2x2[i][j] = mat_2x2[i][j] * m.mat_2x2[i][j];
            }
        }
        return temp;
    }

    bool operator==(matrix m){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                if (mat_2x2[i][j] != m.mat_2x2[i][j]){
                    return false;
                }
            }
        }
        return true;
    }


        
};
 
int main(){
    matrix m1(1, 2, 3, 4);
    matrix m2(1, 2, 3, 4);
    matrix m3 = m1 + m2;
    matrix m4 = m1 * m2;
    bool m5 = m1 == m2;
    cout<<"Sum of Two Matrixes: "<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<m3.mat_2x2[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Product of Two Matrixes: "<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<m4.mat_2x2[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Comparision of Two Matrixes: "<<endl;
    if (m5){
        cout<<"Yes Equal"<<endl;
    } 

    else{   
        cout<<"Not Equal"<<endl;
    }
    return 0;
}