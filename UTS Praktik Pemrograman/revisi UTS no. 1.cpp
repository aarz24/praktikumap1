#include <iostream>
#include <string>

bool isValidPassword(const std::string& password) {
  // Aturan: panjang maksimum kata sandi adalah 8 karakter
  if (password.length() > 8) {
    std::cout << "Kata sandi tidak valid: Panjang kata sandi melebihi 8 karakter." << std::endl;
    return false;
  }

  // Aturan: harus mengandung kombinasi huruf (kecil/besar), angka, tidak ada huruf atau angka yang berulang, dan tidak ada spasi
  bool memilikiHurufKecil = false; // Melacak apakah terdapat huruf kecil
  bool memilikiHurufBesar = false; // Melacak apakah terdapat huruf besar
  bool memilikiAngka = false; // Melacak apakah terdapat angka
  bool karakterValid[256] = {false}; // Melacak apakah karakter telah muncul sebelumnya

  for (int i = 0; i < password.length(); i++) {
    char c = password[i];

    // Karakter di luar rentang alfanumerik dianggap tidak valid
    if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && !(c >= '0' && c <= '9')) {
      std::cout << "Kata sandi tidak valid: Mengandung karakter yang tidak valid." << std::endl;
      return false;
    }

    // Periksa apakah terdapat huruf atau angka yang berulang
    if (karakterValid[static_cast<unsigned char>(c)]) {
      std::cout << "Kata sandi tidak valid: Mengandung karakter yang berulang." << std::endl;
      return false;
    }

    // Perbarui status tipe karakter
    if (c >= 'a' && c <= 'z') {
      memilikiHurufKecil = true;
    } else if (c >= 'A' && c <= 'Z') {
      memilikiHurufBesar = true;
    } else if (c >= '0' && c <= '9') {
      memilikiAngka = true;
    }

    karakterValid[static_cast<unsigned char>(c)] = true; // Tandai karakter telah muncul sebelumnya
  }

  // Kata sandi harus mengandung setidaknya satu huruf kecil, satu huruf besar, dan satu angka
  if (!memilikiHurufKecil || !memilikiHurufBesar || !memilikiAngka) {
    std::cout << "Kata sandi tidak valid: Harus mengandung setidaknya satu huruf kecil, satu huruf besar, dan satu angka." << std::endl;
    return false;
  }

  return true;
}

std::string encryptPassword(const std::string& password) {
  std::string kataSandiTerenskripsi;

  for (char c : password) {
    // Mengonversi huruf ke konversi huruf dua langkah
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      c += 2;
      if ((c > 'z' && c <= 'z'+2) || (c > 'Z' && c <= 'Z'+2)) {
        c -= 26; // Melakukan perulangan huruf
      }
    }

    // Mengonversi angka ke 2 kali angka
    if (c >= '0' && c <= '9') {
      c = static_cast<char>(((c - '0') * 2) + '0');
      if (c > '9') {
        c -= 10; // Melakukan perulangan angka
      }
    }

    kataSandiTerenskripsi += c;
  }

  return kataSandiTerenskripsi;
}

int main() {
  std::string kataSandi;

  std::cout << "Masukkan kata sandi: ";
  std::cin >> kataSandi;

  if (isValidPassword(kataSandi)) {
    std::string kataSandiTersimpan = encryptPassword(kataSandi);
    std::cout << "Kata sandi yang dimasukkan: " << kataSandi << std::endl;
    std::cout << "Kata sandi yang tersimpan: " << kataSandiTersimpan << std::endl;
  }

  return 0;
}
