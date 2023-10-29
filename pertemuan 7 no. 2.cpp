#include <iostream>

int main() {
    int a, b, c, x = 1;
    int hasil;

    std::cout << "Masukkan nilai a: ";
    std::cin >> a;

    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    std::cout << "Masukkan nilai c: ";
    std::cin >> c;

    hasil = 6 * (a * x * x + b * x + c);

    std::cout << "Hasil perhitungan: " << hasil << std::endl;

    return 0;
}
