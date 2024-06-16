#include <iostream>
using namespace std;
int main(){
    a:
        cout<<"hello world"<<endl;
        goto d;
    b:
        cout<<"universitas sumatera utara"<<endl;
        return 0;
    c:
        cout<<"Fasilkom-TI"<<endl;
        goto b;
    d:
        cout<<"ilmu komputer"<<endl;
        goto c;

    int angka = 1;
    loop:
        cout<<angka<<" ";
        angka++;
        if(angka <= 10){
            goto loop;
        }
}