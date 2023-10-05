#include <iostream>
#include <string>

using namespace std;

int main() {
    double nilaiTes, nilaiUTS, nilaiUAS, nilaiTugas;
    cout << "Masukkan nilai tes: ";
    cin >> nilaiTes;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;
    cout << "Masukkan nilai Tugas: ";
    cin >> nilaiTugas;

    double nilaiAkhir = (0.20 * nilaiTes) + (0.30 * nilaiUTS) + (0.30 * nilaiUAS) + (0.20 * nilaiTugas);

    string indeksNilai;

    if (nilaiAkhir <= 50) {
        indeksNilai = "D";
    } else if (nilaiAkhir > 50 && nilaiAkhir <= 70) {
        indeksNilai = "C";
    } else if (nilaiAkhir > 70 && nilaiAkhir <= 80) {
        indeksNilai = "B";
    } else {
        indeksNilai = "A";
    }

    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Indeks Nilai: " << indeksNilai << endl;

    return 0;
}
