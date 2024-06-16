#include <iostream>

using namespace std;

int main() {
    int prima;
    bool hasilPrima = true;

    cout << "Masukkan bilangan prima : ";
    cin >> prima;

    if (prima <= 1) {
        cout << "Bukan bilangan prima" << endl;
        return 0;
    }

    for(int i = 2; i * i <= prima; i++){
        if(prima % i == 0) {
            hasilPrima = false;
            return 0;
        }
    }

    if (hasilPrima) {
        cout << "Bilangan prima" << endl;
    } else {
        cout << "Bukan bilangan prima" << endl;
    }
}