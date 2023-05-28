#include <iostream>

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan dua angka: ";
    std::cin >> num1 >> num2;

    int hasil = pangkat(num1, num2);

    std::cout << "Hasil pangkat: " << hasil << std::endl;
    return 0;
}
