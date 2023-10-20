#include <iostream>

int main() {
    int numLines;
    std::cout << "Masukkan jumlah baris: ";
    std::cin >> numLines;

    for (int i = 1; i <= numLines; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}