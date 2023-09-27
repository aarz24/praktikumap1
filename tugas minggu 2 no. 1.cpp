#include <iostream>
using namespace std;

int main() {
    int n, i;
    float num[100], sum = 0.0, rata;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    while (n > 100 || n <= 0) {
        cout << "Error! Jumlah data harus dalam rentang 1 hingga 100." << endl;
        cout << "Masukkan jumlah data lagi: ";
        cin >> n;
    }

    for (i = 0; i < n; ++i) {
        cout << i + 1 << ". Masukkan angka: ";
        cin >> num[i];
        sum += num[i];
    }

    rata = sum / n;
    cout << "Rata-rata = " << rata;

    return 0;
}
