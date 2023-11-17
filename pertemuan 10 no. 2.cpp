#include <iostream>
using namespace std;

int main() {
  int arr[5] = {2, 3, 4, 10, 40};
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = -1;
  int last = arr[n - 1];
  arr[n - 1] = x;
  int i = 0;

  while (arr[i] != x) {
    i++;
  }

  arr[n - 1] = last;

  if ((i < n - 1) || (x == arr[n - 1])) {
    result = i;
  } else {
    result = -1;
  }

  if (result != -1) {
    cout << "Elemen ditemukan di indeks " << result << endl;
  } else {
    cout << "Elemen tidak ditemukan dalam array" << endl;
  }

  return 0;
}