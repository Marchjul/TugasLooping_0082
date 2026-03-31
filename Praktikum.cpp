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
    return true;
}

// Fungsi boolean mengecek deret Fibonacci menggunakan while loop
bool isFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    if (n == a || n == b) return true;

    int c = a + b;
    while (c <= n) {
        if (c == n) return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

// Prosedur menampilkan hasil cek prima
void tampilHasilPrima() {
    if (isPrima(angka_input)) {
        cout << "-> " << angka_input << " ADALAH bilangan Prima." << endl;
    } else {
        cout << "-> " << angka_input << " BUKAN bilangan Prima." << endl;
    }
}

// Prosedur menampilkan hasil cek Fibonacci
void tampilHasilFibonacci() {
    if (isFibonacci(angka_input)) {
        cout << "-> " << angka_input << " TERMASUK dalam deret Fibonacci." << endl;
    } else {
        cout << "-> " << angka_input << " TIDAK TERMASUK dalam deret Fibonacci." << endl;
    }
}

// Fungsi utama
int main() {
    pilihan_menu = -1; // Inisialisasi awal agar masuk ke dalam loop

    while (pilihan_menu != 0) {
        tampilMenu();
        switch (pilihan_menu) {
            case 1:
                terimaInput();
                tampilHasilPrima();
                break;
            case 2:
                terimaInput();
                tampilHasilFibonacci();
                break;
            case 0:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan masukkan 0, 1, atau 2." << endl;
                break;
        }
    

    }

}