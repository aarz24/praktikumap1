#include <iostream>

int main() {
    int tinggi;

    std::cout << "Masukkan tinggi belah ketupat: ";
    std::cin >> tinggi;

    // Cetak setengah bagian atas belah ketupat
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // Cetak setengah bagian bawah belah ketupat
    for (int i = tinggi - 1; i >= 1; i--) {
        for (int j = 1; j <= tinggi - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
