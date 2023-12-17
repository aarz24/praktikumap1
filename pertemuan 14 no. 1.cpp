#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y = 23;

  cout << "Before swap: " << endl;
  cout << "X = " << x << ", Y = " << y << endl;

  // Swap logic
  int temp = x;
  x = y; 
  y = temp;

  cout << "After swap: " << endl;
  cout << "X = " << x << ", Y = " << y << endl;

  return 0;
}