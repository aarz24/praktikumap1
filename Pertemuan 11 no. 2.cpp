#include <iostream>
#include <string>

using namespace std;

struct ItemPenjualan {
    string kode_barang;
    string nama_barang;
    int jumlah;
    double harga_satuan;
};

int main() {
    const int jumlah_data_max = 20;
    ItemPenjualan data_penjualan[jumlah_data_max];

    double total_harga = 0;

    cout << "Masukkan data penjualan untuk 20 item:" << endl;
    for (int i = 0; i < jumlah_data_max; ++i) {
        cout << "Data ke-" << i + 1 << ":" << endl;
        cout << "Kode Barang: ";
        cin >> data_penjualan[i].kode_barang;
        cout << "Nama Barang: ";
        cin >> data_penjualan[i].nama_barang;
        cout << "Jumlah: ";
        cin >> data_penjualan[i].jumlah;
        cout << "Harga Satuan: Rp.";
        cin >> data_penjualan[i].harga_satuan;
        cout << endl;

        total_harga += data_penjualan[i].jumlah * data_penjualan[i].harga_satuan;
    }

    double keuntungan = 0.1 * total_harga;
    cout << "Total Harga Penjualan: Rp." << total_harga << endl;
    cout << "Keuntungan: Rp." << keuntungan << endl;

    return 0;
}