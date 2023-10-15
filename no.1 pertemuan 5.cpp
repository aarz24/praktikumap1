#include <iostream>
using namespace std;

// Function to add days to a given date and return the updated date
string addDaysToDate(string date, int days) {
    // Ekstrak tahun, bulan, dan hari dari tanggal masukan
    int tahun = stoi(date.substr(0, 4));
    int bulan = stoi(date.substr(5, 2));
    int hari = stoi(date.substr(8, 2));

    // Tambahkan jumlah hari yang ditentukan
    hari += days;

    // Perbarui tanggal jika diperlukan
    while (hari > 31 || (bulan == 2 && hari > 28) || ((bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) && hari > 30)) {
        if (bulan == 12) {
            if (hari > 31) {
                tahun++;
                bulan = 1;
                hari -= 31;
            }
        } else if (bulan == 2) {
            if (((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) && hari > 29) {
                bulan++;
                hari -= 29;
            } else if (hari > 28) {
                bulan++;
                hari -= 28;
            }
        } else if ((bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) && hari > 30) {
            bulan++;
            hari -= 30;
        } else {
            bulan++;
            hari -= 31;
        }

        if (bulan > 12) {
            tahun++;
            bulan = 1;
        }
    }

    // Konversi tanggal yang diperbarui kembali ke format string
    string tanggalDiperbarui = to_string(tahun) + "-" + (bulan < 10 ? "0" : "") + to_string(bulan) + "-" + (hari < 10 ? "0" : "") + to_string(hari);

    return tanggalDiperbarui;
}

int main() {
    string tanggalMasukan;
    int hariDitambahkan;

    cout << "Masukkan tanggal dalam format yyyy-mm-dd: ";
    cin >> tanggalMasukan;

    cout << "Masukkan jumlah hari yang akan ditambahkan: ";
    cin >> hariDitambahkan;

    string tanggalBaru = addDaysToDate(tanggalMasukan, hariDitambahkan);

    cout << "Tanggal baru setelah menambahkan " << hariDitambahkan << " hari adalah: " << tanggalBaru << endl;

    return 0;
}
