#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

double hitungJarak(const Point& titik1, const Point& titik2) {
    double deltaX = titik2.x - titik1.x;
    double deltaY = titik2.y - titik1.y;

    return deltaX * deltaX + deltaY * deltaY;
}

int main() {
    Point titik1, titik2;
    cout << "Masukkan koordinat titik pertama (x y): ";
    cin >> titik1.x >> titik1.y;

    cout << "Masukkan koordinat titik kedua (x y): ";
    cin >> titik2.x >> titik2.y;

    double jarak = hitungJarak(titik1, titik2);
    cout << "Jarak antara dua titik: " << jarak << endl;

    return 0;
}