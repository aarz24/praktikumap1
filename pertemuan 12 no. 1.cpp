#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int maxIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}

int main() {
    int n;
    cout << "Masukkan banyaknya data (n): ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " data (dipisahkan dengan spasi): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Data setelah diurutkan secara menurun adalah: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}