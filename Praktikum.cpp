#include <iostream>
using namespace std;

// Variabel Global
int angka_input;
int pilihan_menu;

// Fungsi untuk menampilkan menu
void tampilMenu() {
    cout << "\n=== PROGRAM CEK BILANGAN ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan_menu;
}

// Prosedur untuk menerima input angka dari pengguna
void terimaInput() {
    cout << "Masukkan sebuah angka: ";
    cin >> angka_input;
}

// Fungsi boolean mengecek bilangan prima menggunakan while loop
bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    
}