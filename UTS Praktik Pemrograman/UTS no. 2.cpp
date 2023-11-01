#include <iostream>

int main() {
    // Input: Tabungan dalam dolar dan euro, kurs pertukaran, harga mobil baru
    double tabungan_dalam_dolar = 12000.0; // Tabungan Pak Anto dalam Dolar AS
    double tabungan_dalam_euro = 20000.0; // Tabungan Pak Anto dalam Euro
    double kurs_euro_ke_dolar = 0.997; // Kurs pertukaran 1 Euro ke Dolar AS
    double kurs_dolar_ke_rupiah = 15000.0; // Kurs pertukaran 1 Dolar AS ke Rupiah
    double harga_mobil_baru = 425000000.0; // Harga mobil baru dalam Rupiah

    // Mengonversi tabungan dalam euro ke dolar menggunakan kurs pertukaran
    tabungan_dalam_dolar += tabungan_dalam_euro * kurs_euro_ke_dolar;

    // Mengonversi total tabungan dalam dolar ke rupiah menggunakan kurs pertukaran
    double tabungan_dalam_rupiah = tabungan_dalam_dolar * kurs_dolar_ke_rupiah;

    // Menghitung sisa uang setelah membeli mobil
    double sisa_uang = tabungan_dalam_rupiah - harga_mobil_baru;

    // Menampilkan hasil
    std::cout << "Pak Anto memiliki sekitar " << std::fixed << tabungan_dalam_rupiah << " rupiah." << std::endl;
    std:: cout << "Setelah membeli mobil, dia akan memiliki sekitar " << std::fixed << sisa_uang << " rupiah tersisa." << std::endl;

    return 0;
}
