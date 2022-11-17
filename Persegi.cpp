#include <iostream>
using namespace std;

int main (){
    cout << "Menghitung Luas Persegi dan Keliling Persegi" << endl;
    // sisi*sisi
    int sisi;
    float l;
    float k;

    cout << "Masukkan Sisi = ";
    cin >> sisi;

    //luas 
    l = sisi * sisi;
    cout << "Luas Persegi = " << l << endl;

    //keliling
    k = 4 * sisi;
    cout << "Keliling Persegi = " << k << endl;
    return 0;

}
