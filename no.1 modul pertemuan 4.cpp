#include <iostream>
#include <string>

using namespace std;

// Deklarasi fungsi
string romanDigit(int n, string satu, string lima, string sepuluh);
string konversi(int angka);

int main() {
    cout << "Silakan masukkan angka yang akan dikonversi menjadi angka Romawi: ";
    int angka;
    cin >> angka;
    
    if (angka < 0 || angka > 3999) {
        cout << "Angka ini tidak dapat dikonversi." << endl;
    } else {
        cout << "Angka yang Anda masukkan, dalam bentuk angka Romawi adalah: " << konversi(angka) << endl;
    }
    
    return 0;
}

string romanDigit(int n, string satu, string lima, string sepuluh) {
    if (n >= 1) {
        if (n == 1) {
            return satu;
        } else if (n == 2) {
            return satu + satu;
        } else if (n == 3) {
            return satu + satu + satu;
        } else if (n == 4) {
            return satu + lima;
        } else if (n == 5) {
            return lima;
        } else if (n == 6) {
            return lima + satu;
        } else if (n == 7) {
            return lima + satu + satu;
        } else if (n == 8) {
            return lima + satu + satu + satu;
        } else if (n == 9) {
            return satu + sepuluh;
        }
    }
    return "";
}

string konversi(int angka) {
    string ribuan = romanDigit(angka % 10, "I", "V", "X");
    angka /= 10;
    string ratusan = romanDigit(angka % 10, "X", "L", "C");
    angka /= 10;
    string puluhan = romanDigit(angka % 10, "C", "D", "M");
    angka /= 10;
    string satuan = romanDigit(angka % 10, "M", "", "");

    string hasil = satuan + puluhan + ratusan + ribuan;
    return hasil;
}