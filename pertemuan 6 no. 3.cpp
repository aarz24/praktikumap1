#include <iostream>

int main() {
    double s = 0.0;

    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0) {
            s -= (1.0 / i);
        } else {
            s += (1.0 / i);
        }
    }

  std::cout << "Nilai dari s adalah: " << s << std::endl;

    return 0;
}
