#include <iostream>

int main() {
    int tinggi;

    std::cout << "Masukkan tinggi segitiga terbalik sudut kanan atas: ";
    std::cin >> tinggi;

    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
