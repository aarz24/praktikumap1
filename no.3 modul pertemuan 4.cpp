#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iterator>

int main() {
    std::map<std::string, int> jumlah_rumah_terjual; // peta untuk menyimpan jumlah rumah yang terjual untuk setiap jenis
    int total_bonus = 0; // Variable to store the total bonus
    std::string nama_pegawai;

    // Meminta pengguna untuk memasukkan nama pegawai pemasaran
    std::cout << "Masukkan nama pegawai pemasaran: ";
    std::getline(std::cin, nama_pegawai);

    // Meminta pengguna untuk memasukkan jumlah rumah yang terjual
    int jumlah_rumah_terjual_input;
    std::cout << "Masukkan jumlah rumah yang terjual oleh " << nama_pegawai << ": ";
    std::cin >> jumlah_rumah_terjual_input;

    // Membersihkan karakter newline yang tertinggal di buffer input
    std::cin.ignore();

    // Meminta pengguna untuk memasukkan jenis rumah yang terjual dalam satu baris
    std::cout << "Masukkan jenis rumah yang terjual (45, 54, atau 70) dipisahkan oleh spasi: ";
    std::string masukan;
    std::getline(std::cin, masukan);

    // Membagi string input menjadi jenis rumah individual
    std::istringstream iss(masukan);
    std::vector<std::string> jenis_rumah(std::istream_iterator<std::string>{iss},
        std::istream_iterator<std::string>());

    // Memperbarui jumlah rumah terjual untuk jenis rumah yang sesuai di peta
    for (const auto& jenis_rumah_str : jenis_rumah) {
        int jumlah_terjual;
        std::cout << "Masukkan jumlah rumah tipe " << jenis_rumah_str << " yang terjual: ";
        std::cin >> jumlah_terjual;
        jumlah_rumah_terjual[jenis_rumah_str] += jumlah_terjual;
    }

    // Calculate the total bonus and store it in total_bonus
    for (const auto& entry : jumlah_rumah_terjual) {
        std::string jenis_rumah = entry.first;
        int jumlah_terjual = entry.second;
        int bonus = 0;

        if (jenis_rumah == "45") {
            if (jumlah_terjual >= 5) {
                bonus = 500000 * jumlah_terjual;
            }
            else if (jumlah_terjual >= 1 && jumlah_terjual < 5) {
                bonus = 250000 * jumlah_terjual;
            }
        }
        else if (jenis_rumah == "54") {
            if (jumlah_terjual >= 5) {
                bonus = 1000000 * jumlah_terjual;
            }
            else if (jumlah_terjual >= 1 && jumlah_terjual < 5) {
                bonus = 500000 * jumlah_terjual;
            }
        }
        else if (jenis_rumah == "70") {
            if (jumlah_terjual >= 5) {
                bonus = 1250000 * jumlah_terjual;
            }
            else if (jumlah_terjual >= 1 && jumlah_terjual < 5) {
                bonus = 1000000 * jumlah_terjual;
            }
        }

        total_bonus += bonus;
    }

    // Menampilkan hasil
    std::cout << "Nama pegawai pemasaran: " << nama_pegawai << std::endl;
    std::cout << "Tipe | Jumlah Terjual | Bonus" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for (const auto& entry : jumlah_rumah_terjual) {
        std::string jenis_rumah = entry.first;
        int jumlah_terjual = entry.second;
        int bonus = 0;

        if (jenis_rumah == "45") {
            if (jumlah_terjual >= 5) {
                bonus = 500000 * jumlah_terjual;
            }
            else if (jumlah_terjual >= 1 && jumlah_terjual < 5) {
                bonus = 250000 * jumlah_terjual;
            }
        }
        else if (jenis_rumah == "54") {
            if (jumlah_terjual >= 5) {
                bonus = 1000000 * jumlah_terjual;
            }
            else if (jumlah_terjual >= 1 && jumlah_terjual < 5) {
                bonus = 500000 * jumlah_terjual;
            }
        }
        else if (jenis_rumah == "70") {
            if (jumlah_terjual >= 5) {
                bonus = 1250000 * jumlah_terjual;
            }
            else if (jumlah_terjual >= 1 && jumlah_terjual < 5) {
                bonus = 1000000 * jumlah_terjual;
            }
        }

        std::cout << jenis_rumah << " | " << jumlah_terjual << " | " << bonus << std::endl;
    }
    std::cout << "Total bonus: " << total_bonus << std::endl;

    return 0;
}