#include <iostream>
using namespace std;

int main (){
    cout << "Menghitung Luas Jajargenjang dan Keliling Jajargenjang" << endl;
    //a*t
    int a, t;
    double l, k;

    cout << "Masukkan Alas = ";
    cin >> a;

    cout << "Masukkan Tinggi = ";
    cin >> t;

    l = a * t;
    cout << "Luas Jajargenjang = " << l << endl;

    k = 2 * (a + t);
    cout << "Keliling Jajargenjang = " << k << endl;
    return 0;
}