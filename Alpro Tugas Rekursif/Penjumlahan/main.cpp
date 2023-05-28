#include <iostream>

int tambah(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return tambah(a + 1, b - 1);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan dua angka: ";
    std::cin >> num1 >> num2;

    int hasil = tambah(num1, num2);

    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    return 0;
}
