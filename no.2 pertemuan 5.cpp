#include <iostream>
using namespace std;

int main() {
    int jam, menit, detik, detikTambah;

    cout << "masukkan waktu dalam format HH:MM:SS: ";
    char waktuInput[9];
    cin.getline(waktuInput, 9);

    if (sscanf(waktuInput, "%d:%d:%d", &jam, &menit, &detik) != 3){
      cerr << "format waktu salah" << endl;
      return 1;
    }

    cout << "masukkan jumlah detik yang ingin ditambahkan: ";
    cin >> detikTambah;

    int totalDetik = (jam * 3600) + (menit * 60) + detik + detikTambah;

    jam = totalDetik / 3600;
    totalDetik %= 3600;
    menit = totalDetik / 60;
    detik = totalDetik % 60;

    if (jam >= 24){
      jam -= 24;
    }

    cout << "waktu setelah ditambahkan ";
    if (jam < 10) cout << "0";
    cout << jam << ":";
    if (menit < 10) cout << "0";
    cout << menit << ":";
    if (detik < 10) cout << "0";
    cout << detik << endl;

  return 0;
}