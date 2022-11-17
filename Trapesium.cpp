#include <iostream>
using namespace std;

int main (){
    //0.5*(a+b)*t
    int a, b, t;
    double l;

    cout << "Masukkan Nilai a = ";
    cin >> a;

    cout << "Masukkan Nilai b = ";
    cin >> b;
    
    cout << "Masukkan Nilai t = ";
    cin >> t;

    //rumus
    l = 0.5 * (a+b) * t;
    cout << "Luas Trapesium = " << l << endl;
    return 0;

}