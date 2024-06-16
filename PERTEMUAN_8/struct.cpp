#include <iostream>
#include <vector>

using namespace std;

// Struktur Mahasiswa yang berisi nama, nim, dan nilai
struct Mahasiswa {
    string nama, nim;
    float nilai;
};

// Typedef untuk struktur Siswa, namun tidak digunakan dalam program ini
typedef struct {
    string nama, nim;
} Siswa;

int main() {
    system("cls"); // Membersihkan layar, hanya bekerja di sistem Windows

    Mahasiswa mhs; // Membuat variabel mhs dari tipe Mahasiswa
    vector<Mahasiswa> mahasiswa; // Membuat vektor untuk menyimpan data mahasiswa
    int n; // Variabel untuk menyimpan jumlah mahasiswa

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n; // Input jumlah mahasiswa dari pengguna

    for (int i = 0; i < n; i++) { // Loop untuk input data setiap mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;
        cin.get(); // Mengambil karakter newline setelah input jumlah mahasiswa untuk menghindari masalah dengan getline

        cout << "Masukkan nama : ";
        getline(cin, mhs.nama); // Input nama mahasiswa

        cout << "Masukkan NIM : ";
        cin >> mhs.nim; // Input NIM mahasiswa

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai; // Input nilai mahasiswa

        mahasiswa.push_back(mhs); // Menambahkan data mahasiswa ke dalam vektor
    }

    for (int i = 0; i < n; i++) { // Loop untuk menampilkan data setiap mahasiswa
        cout << mahasiswa[i].nama << " memiliki NIM " << mahasiswa[i].nim << " dan nilai " << mahasiswa[i].nilai << endl;
    }

    return 0; // Menandakan bahwa program berakhir dengan sukses
}
