#include <iostream>
#include <string>
#include <map>

using namespace std;

// Fungsi untuk menghitung bonus berdasarkan tipe rumah dan jumlah terjual
double hitungBonus(int tipeRumah, int jumlahTerjual) {
    map<int, map<int, double>> bonusTable;
    
    // Inisialisasi tabel bonus sesuai dengan deskripsi yang diberikan
    bonusTable[45][1] = 500000.0;
    bonusTable[54][1] = 250000.0;
    bonusTable[54][6] = 1250000.0;
    bonusTable[70][1] = 1000000.0;
    bonusTable[70][6] = 1000000.0;
    
    if (bonusTable.find(tipeRumah) != bonusTable.end()) {
        if (bonusTable[tipeRumah].find(jumlahTerjual) != bonusTable[tipeRumah].end()) {
            return bonusTable[tipeRumah][jumlahTerjual];
        }
    }
    
    return 0.0; // Jika tidak ada aturan yang sesuai, bonusnya nol
}

int main() {
    // Buat daftar penjualan rumah oleh karyawan
    map<string, map<int, int>> penjualan;
    
    penjualan["ARIF"][54] = 1;
    penjualan["ARIF"][70] = 6;
    
    // Hitung bonus untuk setiap karyawan
    map<string, double> totalBonus;
    
    for (auto& entry : penjualan) {
        string karyawan = entry.first;
        double bonusKaryawan = 0.0;
        
        for (auto& penjualanRumah : entry.second) {
            int tipeRumah = penjualanRumah.first;
            int jumlahTerjual = penjualanRumah.second;
            
            double bonus = hitungBonus(tipeRumah, jumlahTerjual);
            bonusKaryawan += bonus;
        }
        
        totalBonus[karyawan] = bonusKaryawan;
    }
    
    // Tampilkan total bonus untuk setiap karyawan
    for (auto& entry : totalBonus) {
        cout << "Karyawan " << entry.first << " mendapatkan bonus sebesar Rp. " << entry.second << endl;
    }

    return 0;
}
