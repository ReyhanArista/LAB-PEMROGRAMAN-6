int tambah(int a, int b) { // Fungsi untuk menjumlahkan dua bilangan bulat
    return a + b; // Mengembalikan hasil penjumlahan dari a dan b
}

int kurang(int a, int b) { // Fungsi untuk mengurangkan dua bilangan bulat
    return a - b; // Mengembalikan hasil pengurangan dari a dan b
}

int kali(int a, int b) { // Fungsi untuk mengalikan dua bilangan bulat
    return a * b; // Mengembalikan hasil perkalian dari a dan b
}

float bagi(int a, int b) { // Fungsi untuk membagi dua bilangan bulat dan mengembalikan hasil dalam bentuk desimal
    return static_cast<float>(a) / static_cast<float>(b); // Mengkonversi a dan b ke bentuk float dan mengembalikan hasil pembagian
}