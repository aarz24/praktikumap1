#include <iostream>
int main() {
    char ch = 'A';
    for (int baris = 0; baris < 26; baris++) {
        for (int kolom = baris; kolom < 26; kolom++) {
            std::cout << ch++ << "\t";
        }
        ch = 'A' + baris + 1;
        std::cout << std::endl;
    }
    return 0;
}
