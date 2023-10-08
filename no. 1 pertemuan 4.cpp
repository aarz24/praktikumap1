#include <iostream>
#include <iomanip>
using namespace std;

const double DISKON_10 = 0.1;
const double DISKON_20 = 0.2;
const double DISKON_30 = 0.3;
const double DISKON_3HARI = 0.05;

int main()
{
    double biaya, pajak, diskon, total, final;
    int kamar, hari;

    cout << "Masukkan biaya sewa satu kamar: ";
    cin >> biaya;
    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> kamar;
    cout << "Masukkan jumlah hari kamar dipesan: ";
    cin >> hari;
    cout << "Masukkan pajak penjualan (sebagai persen): ";
    cin >> pajak;

    if (kamar >= 30)
        diskon = DISKON_30;
    else if (kamar >= 20)
        diskon = DISKON_20;
    else if (kamar >= 10)
        diskon = DISKON_10;
    else
        diskon = 0;

    if (hari >= 3)
        diskon += DISKON_3HARI;

    total = biaya * kamar * hari * (1 - diskon);
    final = total * (1 + pajak / 100);

    cout << fixed << showpoint << setprecision(2);
    cout << "Biaya sewa satu kamar: $" << biaya << endl;
    cout << "Diskon pada setiap kamar: " << diskon * 100 << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << kamar << endl;
    cout << "Jumlah hari kamar dipesan: " << hari << endl;
    cout << "Total biaya kamar: $" << total << endl;
    cout << "Pajak penjualan: " << pajak << "%" << endl;
    cout << "Jumlah tagihan total: $" << final << endl;

    return 0;
      }