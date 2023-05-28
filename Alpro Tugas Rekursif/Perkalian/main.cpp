#include <iostream>

int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan dua angka: ";
    std::cin >> num1 >> num2;

    int hasil = perkalian(num1, num2);

    std::cout << "Hasil perkalian: " << hasil << std::endl;
    return 0;
}
