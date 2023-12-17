#include <iostream>
using namespace std;

int main() {

  int power = 2200; // Listrik yang digunakan
  double cost_per_unit;

  if(power <= 900) {
    cost_per_unit = 1.35; 
  }
  else if(power <= 1300) {
    cost_per_unit = 1.44;
  }
  else if(power <= 2200) {
    cost_per_unit = 1.45; 
  }
  else {
    cost_per_unit = 1.5;
  }

  // Penggunaan listrik harian
  double ac = 800; 
  double refrigerator = 200;
  double strika = 150; 
  double washing_machine = 250;
  double lamps = 250;
  double others = 100;

  // Total penggunaan harian
  double daily_use = ac + refrigerator + strika + washing_machine + lamps + others;

  // Jumlah hari dalam sebulan
  int days = 30;

  // Tagihan bulanan
  double monthly_bill = daily_use * days * cost_per_unit;

  cout << "Tagihan Listrik Bulanan: Rp. " << monthly_bill;

  return 0;
}
