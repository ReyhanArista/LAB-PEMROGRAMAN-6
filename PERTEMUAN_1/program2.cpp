#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string NAMA;
    int NIM;
    float IP;

    system("cls");

    cout<<"HelloWorld" << endl;

    cout<<"Masukkan Nama : ";
    //cin>> NAMA;
    getline(cin, NAMA);
    

    cout<<"Masukkan NIM : ";
    cin>> NIM;

    cout<<"Masukkan IP : ";
    cin>> IP;

    cout<<"Nama : " << NAMA <<endl;
    cout<<"NIM  : " << NIM <<endl;
    cout<< fixed << setprecision(2);
    cout<<"IP   : " << IP << endl;
    return 0;
    
}