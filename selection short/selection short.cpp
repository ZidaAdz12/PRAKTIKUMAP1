#include <iostream>

// Fungsi untuk menukar dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk Selection Sort secara menurun
void selectionSort(int data[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (data[j] > data[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(data[i], data[maxIndex]);
    }
}

// Fungsi untuk menampilkan data
void displayData(int data[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int dataSize = 13;
    int data[dataSize] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};

    // Menampilkan data sebelum diurutkan
    std::cout << "Data sebelum diurutkan: ";
    displayData(data, dataSize);

    // Menggunakan Selection Sort untuk mengurutkan data
    selectionSort(data, dataSize);

    // Menampilkan data setelah diurutkan
    std::cout << "Data setelah diurutkan secara menurun: ";
    displayData(data, dataSize);

    return 0;
}
