// #include <iostream>

// using namespace std;

// int main ()
// {
//     float luastinggi,tinggi,v,luaspermukaan,lp,luasalas,luas,sisitegak;
    

//     cout << "Masukkan luas limas : ";
//     cin >> luas;

//     cout << "masukkan tinggi : ";
//     cin >> tinggi;

//     cout << "masukkan sisi tegak : ";
//     cin >> sisitegak;

//     v =  luas * tinggi /3 ;
//     lp = ( luasalas * tinggi /2) + ( 3 * sisitegak);

//     cout <<"Volume = " << v << endl;
//     cout <<"luas peermukaan =" << lp << endl;
// }

#include <iostream>
using namespace std;
int main(){
    float tinggi,v,lp,luas,luasalas,sisitegak;

    cout<< "masukkan luas limas : ";
    cin>>luas;

    cout<< "masukkan tinggi limas : ";
    cin>>tinggi;

    cout>>"masukkan sisi tegak limas : ";
    cin>>sisitegak;

    v = luas * tinggi /3;
    lp = (luasalas * tinggi /2) + (3 * sisitegak);

    cout>>"volume = "<<v<<endl;
    cout>>"luaspermukaan  ="<<lp<<endl;

    return 0;
}