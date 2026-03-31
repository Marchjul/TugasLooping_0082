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