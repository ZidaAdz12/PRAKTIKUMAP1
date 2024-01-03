#include <iostream>
#include <string>

char convertLetter(char letter) {
    if (islower(letter)) {
        return (letter - 'a' + 2) % 26 + 'a';
    } else if (isupper(letter)) {
        return (letter - 'A' + 2) % 26 + 'A';
    } else {
        return letter; 
    }
}

char convertDigit(char digit) {
    if (isdigit(digit)) {
        int value = digit - '0';
        return ((value * 2) % 10) + '0';
    } else {
        return digit; 
    }
}

int main() {
    std::string password;
    std::cout << "Masukkan password (maksimal 8 karakter, tanpa karakter berulang atau spasi): ";
    std::cin >> password;

    if (password.length() > 8) {
        std::cout << "Password terlalu panjang." << std::endl;
        return 1;
    }

    for (int i = 0; i < password.length(); i++) {
        if (i > 0 && password[i] == password[i - 1]) {
            std::cout << "Password tidak boleh memiliki karakter berulang." << std::endl;
            return 1;
        }

        if (password[i] == ' ') {
            std::cout << "Password tidak boleh mengandung spasi." << std::endl;
            return 1;
        }
    }

    std::string encryptedPassword = password;

    for (int i = 0; i < password.length(); i++) {
        encryptedPassword[i] = convertLetter(convertDigit(password[i]));
    }

    std::cout << "Password yang dientri: " << password << std::endl;
    std::cout << "Password yang tersimpan setelah konversi: " << encryptedPassword << std::endl;

    return 0;
}