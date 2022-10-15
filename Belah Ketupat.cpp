#include <iostream>
using namespace std;

int main (){
    cout << "Menghitung Luas Belah Ketupat" << endl;
    int d1, d2;
    float l;

    cout << "Masukkan Nilai Diaginal 1 =";
    cin >> d1;

    cout << "Masukkan Nilai Diaginal 2 =";
    cin >> d2;

    //luas
    l = 0.5 * d1 * d2;
    cout << "Luas Belah Ketupat = " << l << endl;
    return 0;

}