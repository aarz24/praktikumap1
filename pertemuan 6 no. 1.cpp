#include <iostream>
#include <limits>

int main() {
    const int n = 10; // Jumlah elemen

    int num;
    double sum = 0;
    int tertinggi = std::numeric_limits<int>::min();
    int terendah = std::numeric_limits<int>::max();

    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan elemen " << i + 1 << ": ";
        std::cin >> num;

        sum += num;

        if (num > tertinggi) {
            tertinggi = num;
        }

        if (num < terendah) {
            terendah = num;
        }
    }

    double rata_rata = sum / n;

    std::cout << "Nilai Rata-rata: " << rata_rata << std::endl;
    std::cout << "Nilai Tertinggi: " << tertinggi << std::endl;
    std::cout << "Nilai Terendah: " << terendah << std::endl;

    return 0;
}