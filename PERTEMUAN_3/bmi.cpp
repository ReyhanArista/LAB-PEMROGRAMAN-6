// #include <iostream>
// using namespace std;
// int main(){
    
//     int berat,tinggi,bmi;


//     cout<<"Masukkan berat badan anda : ";
//     cin>>berat;

//     cout<<"masukkan tinggi badan anda : ";
//     cin>>tinggi;

//     bmi = berat / (tinggi * tinggi);

//     if (bmi < 18.5){
//         cout<<"berat badan anda kurang";
//     }
//     else if (bmi >= 18.5 && bmi < 30){
//         cout<<"berat badan anda normal";
//     }
//     else if (bmi <= 18.5 && bmi < 30){
//         cout<<"berat badan berlebih";
//     }
//     else if (bmi >= 30){
//         cout<<"obesitas";
//     }


// }

#include <iostream>
using namespace std;
int main(){
    int berat,tinggi,bmi;

    cout<< "masukkan berat badan anda : ";
    cin>>berat;

    cout<< "masukkan tinggi badan anda : ";
    cin>>tinggi;
    
    bmi = berat / (tinggi * tinggi);

    if (bmi < 18.5){
        cout<<"berat badan anda kurang";
    }else if (bmi >= 18.5 && bmi < 30){
        cout<<"berat badan anda normal";
    }else if (bmi <= 18.5 && bmi < 30){
        cout<<"berat badan anda berlebih";
    }else if (bmi >= 30){
        cout<<"anda obesitas";
    }

}