#include <iostream>
using namespace std;

int main() {
    double Tes, UTS, UAS, Tugas;
  
    cout << "Masukkan nilai Tes anda: ";
    cin >> Tes;
    cout << "Masukkan nilai UTS anda: ";
    cin >> UTS;
    cout << "Masukkan nilai UAS anda: ";
    cin >> UAS;
    cout << "Masukkan nilai Tugas anda: ";
    cin >> Tugas;

    double nilai_akhir = 0.2 * Tes + 0.3 * UTS + 0.3 * UAS + 0.2 * Tugas;

    char indeks_nilai;
    if (nilai_akhir <= 50) {
        indeks_nilai = 'D';
    } else if (nilai_akhir > 50 && nilai_akhir <= 70) {
        indeks_nilai = 'C';
    } else if (nilai_akhir > 70 && nilai_akhir <= 80) {
        indeks_nilai = 'B';
    } else {
        indeks_nilai = 'A';
    }

    cout << "Nilai Akhir anda adalah: " << nilai_akhir << endl;
    cout << "Indeks Nilai anda adalah: " << indeks_nilai << endl;
  
    return 0;
}