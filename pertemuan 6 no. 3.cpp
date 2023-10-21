#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan sebuah nilai: ";
    cin >> n;

    if (n > 1000) {
        cout << "Nilai 'n' tidak boleh lebih besar dari seribu" << endl;
        return 1;
    }

    double s = 1.0;  // Initialize s to 1.0

    cout << "1";

    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            cout << " - 1/" << i;
            s -= (1.0 / i);
        } else {
            cout << " + 1/" << i;
            s += (1.0 / i);
        }
    }

    cout << " = " << s << endl;

    return 0;
}
