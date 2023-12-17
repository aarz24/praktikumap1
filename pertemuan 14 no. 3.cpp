#include <iostream>
using namespace std;

const int jumlah_barang = 10;
string nama_barang[jumlah_barang];
int harga_barang[jumlah_barang];
int jumlah_terjual[jumlah_barang];

int main() {
    for (int i = 0; i < jumlah_barang; ++i) {
        cout << "Masukkan nama barang ke-" << i + 1 << ": ";
        cin >> nama_barang[i];

        cout << "Masukkan harga barang " << nama_barang[i] << ": ";
        cin >> harga_barang[i];
    }

    int total_penjualan = 0;
    for (int i = 0; i < jumlah_barang; ++i) {
        cout << "Masukkan jumlah " << nama_barang[i] << " yang terjual: ";
        cin >> jumlah_terjual[i];
        total_penjualan += jumlah_terjual[i] * harga_barang[i];
    }

    cout << "\nRekapitulasi Penjualan Harian:" << endl;
    cout << "===================================" << endl;
    cout << "| Nama Barang | Harga | Terjual | Total |" << endl;
    cout << "===================================" << endl;
    for (int i = 0; i < jumlah_barang; ++i) {
        int total_item = jumlah_terjual[i] * harga_barang[i];
        cout << "| " << nama_barang[i] << "\t\t| " << harga_barang[i] << "\t| " << jumlah_terjual[i] << "\t\t| " << total_item << "\t|" << endl;
    }
    cout << "===================================" << endl;
    cout << "Total Penjualan Harian: Rp." << total_penjualan << endl;

    int index_terbanyak = 0;
    for (int i = 1; i < jumlah_barang; ++i) {
        if (jumlah_terjual[i] > jumlah_terjual[index_terbanyak]) {
            index_terbanyak = i;
        }
    }
    cout << "\nItem yang paling laku adalah " << nama_barang[index_terbanyak] << " dengan jumlah terjual " << jumlah_terjual[index_terbanyak] << endl;

    return 0;
}