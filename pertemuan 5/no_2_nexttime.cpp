#include <iostream>

using namespace std;

void tambahWaktu(int &jam, int &menit, int &detik, int jamDitambahkan, int menitDitambahkan, int detikDitambahkan) {
    detik += detikDitambahkan;
    menit += menitDitambahkan;
    jam += jamDitambahkan;

    menit += detik / 60;
    detik %= 60;

    jam += menit / 60;
    menit %= 60;

    jam %= 24;
}

int main() {
    int jam, menit, detik, jamDitambahkan, menitDitambahkan, detikDitambahkan;

    cout << "Masukkan jam (0-23): ";
    cin >> jam;

    cout << "Masukkan menit (0-59): ";
    cin >> menit;

    cout << "Masukkan detik (0-59): ";
    cin >> detik;

    cout << "Masukkan jumlah jam yang akan ditambahkan: ";
    cin >> jamDitambahkan;

    cout << "Masukkan jumlah menit yang akan ditambahkan: ";
    cin >> menitDitambahkan;

    cout << "Masukkan jumlah detik yang akan ditambahkan: ";
    cin >> detikDitambahkan;

    if (jam < 0 || jam > 23 || menit < 0 || menit > 59 || detik < 0 || detik > 59) {
        cout << "Waktu tidak valid." << endl;
        return 1;
    }

    tambahWaktu(jam, menit, detik, jamDitambahkan, menitDitambahkan, detikDitambahkan);

    cout << "Waktu setelah penambahan: " << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0;
}