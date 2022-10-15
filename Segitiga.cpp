#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	// 1/2*alas*tinggi
	int alas, tinggi;
	double l;
    
    cout << "Masukkan Alas :";
    cin >> alas;

    cout << "Masukkan Tinggi :";
    cin >> tinggi;

	//rumus
    l = 0.5 * alas * tinggi;
    cout << "Luas Segitiga : " << l << endl;
    
    return 0;
}
