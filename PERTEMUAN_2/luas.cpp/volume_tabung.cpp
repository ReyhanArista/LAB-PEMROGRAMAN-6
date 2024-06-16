// #include <iostream>

// using namespace std;

// int main ()
// {
//     float jari,tinggi,volume;
//     const float phi = 3.14;

//     cout << "Masukkan tinggi tabung : ";
//     cin >> tinggi;

//     cout << "masukkan jari jari : ";
//     cin >> jari;

//     volume = phi * jari * jari * tinggi;

//     cout <<"volume = " << volume << endl;
// }

#include <iostream>
using namespace std;
int main()
{
    float volume,jari,tinggi;
    const float phi = 3.14;

    cout << "masukkan tinggi tabung : ";
    cin >>tinggi;

    cout<< "masukkan jari jari tabung : ";
    cin>>jari;

    volume = phi * jari * jari * tinggi;

    cout<< "volume : "<< volume <<endl;

}