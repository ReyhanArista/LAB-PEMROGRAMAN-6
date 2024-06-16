#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");

    //? Vector Decalaration and Initialization
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    //? Accessing Elements in Vector
    // for(int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }

    // cout << endl;

    //* For Each Loop
    for(string mhs : nama) {
        cout << mhs << endl;
    }

    //? Adding Data to Vector
    // nama.push_back("Wawan");

    //? Deleting Data from Vector
    // nama.pop_back();        //* berfungsi untuk menghapus data vector paling akhir
    // nama.erase(nama.begin() + 2);       //* erase() berfungsi untuk menghapus data, begin() untuk mendapatkan data vector paling awal

    // for(int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }
}