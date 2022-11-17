#include <iostream>
using namespace std;

int main (){
    cout << "Menghitung Luas Lingkaran dan Keliling Lingkaran" << endl;
    int r;
    double phi = 3.14;
    float l, k;

    cout << "Masukkan Nilai r = ";
    cin >> r;

    //luas
    l = phi * r * r;
    cout << "Luas Lingkaran = " << l << endl;

    //keliling
    k = 2 * phi * r;
    cout << "Keliling Lingkaran = " << k << endl;
    return 0;
    
}