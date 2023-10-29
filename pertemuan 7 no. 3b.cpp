#include <iostream>

int main() {
    int tinggi;

    std::cout << "Masukkan tinggi segitiga terbalik: ";
    std::cin >> tinggi;

    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= tinggi - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
