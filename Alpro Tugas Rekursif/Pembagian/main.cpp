#include <iostream>

int pembagian(int a, int b) {
    if (b == 0) {
        std::cout << "Error: Pembagian dengan 0 tidak dapat dilakukan." << std::endl;
        exit(1);
    } else if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan dua angka: ";
    std::cin >> num1 >> num2;

    int hasil = pembagian(num1, num2);

    std::cout << "Hasil pembagian: " << hasil << std::endl;
    return 0;
}
