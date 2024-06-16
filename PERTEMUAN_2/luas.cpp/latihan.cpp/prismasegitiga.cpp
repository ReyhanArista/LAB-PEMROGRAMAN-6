#include <iostream>

using namespace std;

int main ()
{
    float alas,tinggi,luasalas,luasselimut,tinggiprisma,volume,lp;
    
    cout << "Masukkan alas : ";
    cin >> alas;

    cout << "masukkan tinggi : ";
    cin >> tinggi;

    cout << "masukkan tinggi prisma : ";
    cin >> tinggiprisma;

    cout << "masukkan luas alas : ";
    cin >> luasalas;

    cout << "masukkan luasselimut : ";
    cin >> luasselimut;


    volume = (alas * tinggi /2) * (tinggiprisma);
    lp = 2 * luasalas + luasselimut;

    cout <<"volume = " << volume << endl;
    cout <<"lp = " << lp << endl;
}