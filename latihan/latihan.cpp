#include <iostream>
using namespace std;

int main() {
    int tinggi, spasi, bintang;

    cout << "Masukkan tinggi diamond (bilangan ganjil): ";
    cin >> tinggi;

   
    for (int i = 1; i <= tinggi; i += 2) {
        
        spasi = (tinggi - i) / 2;
        bintang = i;

       
        for (int j = 1; j <= spasi; j++) {
            cout << " ";
        }

       
        for (int j = 1; j <= bintang; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = tinggi - 2; i >= 1; i -= 2) {

        spasi = (tinggi - i) / 2;
        bintang = i;

    
        for (int j = 1; j <= spasi; j++) {
            cout << " ";
        }

        for (int j = 1; j <= bintang; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
