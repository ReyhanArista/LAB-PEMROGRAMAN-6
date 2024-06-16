#include <iostream> // Include library input/output untuk mengakses fungsi-fungsi input/output
#include "operasi.h" // Include file header operasi.h untuk mengakses fungsi-fungsi operasi
#include "preprocessor.h" // Include file header preprocessor.h untuk mengakses fungsi-fungsi preprocessor

using namespace std; // Menggunakan namespace std untuk memudahkan penggunaan fungsi-fungsi

void sayHello(string name) { // Fungsi sayHello untuk mengucapkan salam
    o << "Hello " << name << n; // Mencetak salam dengan nama
}

void garis() { // Fungsi garis untuk mencetak garis horizontal
    o << "================" << n; // Mencetak garis horizontal
}

void bintang() { // Fungsi bintang untuk mencetak garis asterisk
    o << "***************" << n; // Mencetak garis asterisk
}

int main() { // Fungsi main untuk memulai program
    system("cls"); // Membersihkan layar untuk memulai program
    sayHello("AP6"); // Mengucapkan salam kepada AP6
    garis(); // Mencetak garis horizontal
    bintang(); // Mencetak garis asterisk
    o << tambah(2, 3) << n; // Mencetak hasil operasi tambah
    o << kurang(2, 3) << n; // Mencetak hasil operasi kurang
    o << kali(2, 3) << n; // Mencetak hasil operasi kali
    o << bagi(2, 3) << n; // Mencetak hasil operasi bagi
    o << PI << n; // Mencetak nilai PI
    return 0; // Mengakhiri program
}