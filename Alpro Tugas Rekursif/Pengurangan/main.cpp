#include <iostream>

int kurang(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return kurang(a - 1, b - 1);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan dua angka: ";
    std::cin >> num1 >> num2;

    int hasil = kurang(num1, num2);

    std::cout << "Hasil pengurangan: " << hasil << std::endl;
    return 0;
}
