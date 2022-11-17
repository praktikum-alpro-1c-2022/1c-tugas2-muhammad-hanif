#include <iostream>

using namespace std;

int main (){
    cout << "Menghitung Luas dan Keliling Persegi Panjang" << endl;
    //panjang*lebar
    int p, l;
    float L, k;

    cout << "Masukkan Panjang = ";
    cin >> p;

    cout << "Masukkan Lebar = ";
    cin >> l;

    //luas 
    L = p * l;
    cout << "Luas Persegi Panjang = " << L << endl;

    //keliling
    k = 2 * (p + l);
    cout << "Keliling Persegi Panjang = " << k << endl;
    return 0;
    
}