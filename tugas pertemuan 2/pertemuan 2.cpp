#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    float distance, time, speed;

    cout << "masukan jarak yang di tempuh (in km): ";
    cin >> distance;

    cout << "masukan waktu yang di tentukan(in hours): ";
    cin >> time;

    speed = distance / time;

    cout << "kecepatan rata rata kendaraan: " << speed << " km per hour";

    return 0;
}