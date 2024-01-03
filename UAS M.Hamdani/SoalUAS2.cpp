#include <iostream>
#include <algorithm>

struct Anak {
    std::string nama;
    int tanggal;
    int bulan;
    int tahun;
};

const int JUMLAH_DATA = 20;

void tampilkanData(const Anak data[], const std::string& status) {
    std::cout << "Data Anak " << status << ":\n";
    for (int i = 0; i < JUMLAH_DATA; ++i) {
        std::cout << data[i].nama << " - " << data[i].tanggal << "/" << data[i].bulan << "/" << data[i].tahun << std::endl;
    }
    std::cout << std::endl;
}

bool tahunLahir2020(const Anak& anak) {
    return anak.tahun == 2020;
}

int main() {
    Anak dataAnak[JUMLAH_DATA];

    // Pembacaan data anak secara acak
    for (int i = 0; i < JUMLAH_DATA; ++i) {
        std::cout << "Masukkan data anak ke-" << (i + 1) << ":\n";
        std::cout << "Nama: ";
        std::cin >> dataAnak[i].nama;
        std::cout << "Tanggal Lahir (DD MM YYYY): ";
        std::cin >> dataAnak[i].tanggal >> dataAnak[i].bulan >> dataAnak[i].tahun;
    }

    // Urutkan data berdasarkan tahun lahir
    std::sort(dataAnak, dataAnak + JUMLAH_DATA, [](const Anak& a, const Anak& b) {
        return a.tahun < b.tahun;
    });

    // Tampilkan data sebelum dan setelah terurut
    tampilkanData(dataAnak, "Sebelum Terurut");
    tampilkanData(dataAnak, "Setelah Terurut");

    // Cari dan tampilkan data anak yang tahun lahirnya 2020
    auto it = std::find_if(dataAnak, dataAnak + JUMLAH_DATA, tahunLahir2020);
    if (it != dataAnak + JUMLAH_DATA) {
        std::cout << "Data anak yang tahun lahirnya 2020:\n";
        std::cout << it->nama << " - " << it->tanggal << "/" << it->bulan << "/" << it->tahun << std::endl;
    } else {
        std::cout << "Tidak ada data anak yang tahun lahirnya 2020.\n";
    }

    return 0;
}