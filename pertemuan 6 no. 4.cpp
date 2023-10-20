#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> n;

    int faktorial = 1;

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    std::cout << "Faktorial dari " << n << " adalah: " << faktorial << std::endl;

    return 0;
}
