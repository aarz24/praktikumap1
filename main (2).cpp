#include <iostream>
using namespace std;

int main() {
  double panjang, lebar, atas, bawah, kiri, kanan, ukuranTitik;
  int karakter, baris;
  char spasi;

  cout << "Masukkan panjang dan lebar kertas (dalam inci): ";
  cin >> panjang >> lebar;
  cout << "Masukkan margin atas, bawah, kiri, dan kanan (dalam inci): ";
  cin >> atas >> bawah >> kiri >> kanan;
  cout << "Masukkan ukuran titik satu baris: ";
  cin >> ukuranTitik;
  cout << "Masukkan 'S' untuk baris tunggal atau 'D' untuk baris ganda: ";
  cin >> spasi;

  panjang *= 72;
  lebar *= 72;
  atas *= 72;
  bawah *= 72;
  kiri *= 72;
  kanan *= 72;

  karakter = (lebar - kiri - kanan) / ukuranTitik;

  if (spasi == 'D' || spasi == 'd')
    ukuranTitik *= 2;

  baris = (panjang - atas - bawah) / ukuranTitik;

  cout << "Jumlah karakter dalam satu baris adalah: " << karakter << endl;
  cout << "Jumlah baris yang dapat dicetak di atas kertas adalah: " << baris
       << endl;

  return 0;
}