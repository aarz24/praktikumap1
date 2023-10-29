#include <iostream>

int meterKeCentimeter(int meter) {
    return meter * 100;
}

int centimeterKeMeter(int centimeter) {
    return centimeter / 100;
}

int main() {
    int panjangPitaMeter = 12;
    int panjangPitaCentimeter = meterKeCentimeter(panjangPitaMeter);
    int panjangIkatBungaCentimeter = 45;

    int jumlahIkatBunga = panjangPitaCentimeter / panjangIkatBungaCentimeter;
    int panjangPitaSisaCentimeter = panjangPitaCentimeter % panjangIkatBungaCentimeter;

    int panjangPitaSisaMeter = centimeterKeMeter(panjangPitaSisaCentimeter);

    std::cout << "Jumlah ikatan bunga: " << jumlahIkatBunga << std::endl;
    std::cout << "Panjang pita yang tidak terpakai (dalam centimeter): " << panjangPitaSisaCentimeter << std::endl;
    std::cout << "Panjang pita yang tidak terpakai (dalam meter): " << panjangPitaSisaMeter << std::endl;

    return 0;
}