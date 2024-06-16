#include <math.h> // Include library matematika untuk fungsi pow

// Fungsi untuk menambah dua bilangan bulat
int tambah(int a, int b) {
    return a + b; // Sederhana saja mengembalikan hasil penjumlahan a dan b
}

// Fungsi untuk mengurangi dua bilangan bulat
int kurang(int a, int b) {
    return a - b; // Sederhana saja mengembalikan hasil pengurangan a dan b
}

// Fungsi untuk mengalikan dua bilangan bulat
int kali(int a, int b) {
    return a * b; // Sederhana saja mengembalikan hasil perkalian a dan b
}

// Fungsi untuk membagi dua bilangan bulat
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b); 
    // Mengkonversi a dan b ke float untuk melakukan pembagian titik desimal
    // Mengembalikan hasil sebagai float
}

// Fungsi untuk menghitung modulus (sisa) dua bilangan bulat
int modulo(int a, int b) {
    return a % b; // Sederhana saja mengembalikan sisa a dibagi b
}

// Fungsi untuk menghitung pangkat suatu bilangan
int pangkat(int a, int b) {
    return pow(a, b); // Menggunakan fungsi pow dari library matematika
    // Mengembalikan hasil a dipangkatkan b
}