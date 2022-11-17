#include <iostream>
using namespace std;

int main (){
    cout << "Menghitung Luas Layang - Layang" << endl;
    int d1, d2;
    float l;

    cout << "Masukkan Diagonal 1 = ";
    cin >> d1;

    cout << "Masukkan Diagonal 2 = ";
    cin >> d2;

    //luas
    l = 0.5 * d1 * d2;
    cout << "Luas Layang-Layang = " << l << endl;
    return 0;
    
}