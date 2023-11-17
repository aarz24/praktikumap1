#include <iostream>
using namespace std;

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