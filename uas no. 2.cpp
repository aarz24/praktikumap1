#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Elemen tidak ada dalam array" : cout << "Elemen ditemukan di indeks " << result;
    return 0;
}
int PencarianLinear(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return 1;
}

int main() {
  int arr[] = {2, 3, 4, 10, 40, 50, 89};
  int x = 89;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = PencarianLinear(arr, n, x);
  (result == 1) ? cout << "Elemen tidak tersedia di array" 
                 : cout << "Elemen tersedia di index " << result;
  return 0;
}