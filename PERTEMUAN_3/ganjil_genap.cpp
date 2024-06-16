//buatlah program untuk menentukan bilangan ganjil atau genap

// #include <iostream>
// using namespace std;

// int main()
// {
//     int nilai;
//     string op;

//     cout<<"Masukkan nilai : ";
//     cin>>nilai;

//     op = (nilai % 2==0) ? "genap" : "ganjil";
//     cout<<op<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int nilai;
    string op;

    cout<<"masukkan nilai : ";
    cin>>nilai;

    op=(nilai % 2==0) ? "genap" : "ganjil";
    
    cout<<op<<endl;

    return 0;
}