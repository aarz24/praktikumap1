#include <iostream>
using namespace std;

int main() {
    float jarak, waktu, kecepatan;

    cout << "Masukkan jarak yang ditempuh (dalam km): ";
    cin >> jarak;

    cout << "Masukkan waktu yang diperlukan (dalam jam): ";
    cin >> waktu;

    kecepatan = jarak / waktu;

    cout << "Kecepatan rata-rata kendaraan: " << kecepatan << " km per jam";

    return 0;
}