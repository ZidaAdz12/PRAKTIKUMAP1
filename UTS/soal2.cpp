#include <iostream>
using namespace std;

int main() {
  // Nilai tabungan dalam mata uang asing
  double tabunganDollar = 12.000; // dalam Dollar
  double tabunganEuro = 20.000; // dalam Euro
  // tukar
  double kursDollarKeRp = 15.000; // 1 Dollar ke Rupiah
  double kursEuroKeDollar = 0.0997; // 1 Euro ke Dollar
  // Harga mobil baru dalam Rupiah
  double hargaMobilDalamRp = 425.000000;
  // Hitung total tabungan dalam Dollar
  double totalTabunganDollar = tabunganDollar + (tabunganEuro * kursEuroKeDollar);
  // Hitung total tabungan dalam Rupiah
  double totalTabunganRupiah = totalTabunganDollar * kursDollarKeRp;
  // Hitung sisa uang Pak Anto setelah membeli mobil
  double sisaUangRupiah = totalTabunganRupiah - hargaMobilDalamRp;
  // Tampilkan hasil
  cout << "Total tabungan Pak Anto dalam Rupiah: " << totalTabunganRupiah << " Rp" << endl;
  cout << "Sisa uang Pak Anto setelah membeli mobil: " << sisaUangRupiah << " Rp" << endl;

  return 0;
}
