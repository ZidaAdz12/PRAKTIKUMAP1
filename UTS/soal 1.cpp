#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk memvalidasi password
bool isValidPassword(const string& password) {
    // Validasi panjang password
    if (password.length() != 8) {
        return false;
    }

    // Validasi karakter unik
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (password[i] == password[j] || password[i] == ' ' || password[j] == ' ') {
                return false;
            }
        }
    }

    return true;
}

// Fungsi untuk mengenkripsi password
string encryptPassword(const string& password) {
    string encryptedPassword = password;
    for (char& c : encryptedPassword) {
        if (isalpha(c)) {
            if (c == 'z') {
                c = 'a';
            } else if (c == 'Z') {
                c = 'A';
            } else {
                c += 2;
            }
        } else if (isdigit(c)) {
            c = (char)(((c - '0') * 2 + '0'));
        }
    }
    return encryptedPassword;
}

int main() {
    string password;
    cout << "Masukkan password (8 karakter, tidak boleh ada karakter berulang, tidak boleh ada spasi): ";
    cin >> password;

    if (isValidPassword(password)) {
        string encryptedPassword = encryptPassword(password);
        cout << "Password yang dientry: " << password << endl;
        cout << "Password yang tersimpan (hasil konversi): " << encryptedPassword << endl;
    } else {
        cout << "Password tidak valid!" << endl;
    }

    return 0;
}
