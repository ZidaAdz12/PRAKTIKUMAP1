#include <iostream>
#include <string>

using namespace std;

int main() {
    int angkaArab;
    cout << "Masukkan angka Arab: ";
    cin >> angkaArab;

    int arab[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romawi[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string hasil = "";

    for (int i = 0; i < 13; i++) {
        while (angkaArab >= arab[i]) {
            hasil += romawi[i];
            angkaArab -= arab[i];
        }
    }

    cout << "Angka Romawi: " << hasil << endl;

    return 0;
}
