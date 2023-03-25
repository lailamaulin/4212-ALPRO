/*
    TUGAS 2
    Algoritma dan Pemrograman
    Laila Maulin Ni'mah
    A11.2022.14424
    A11.4212
*/

#include <iostream>

using namespace std;

//DEKLARASI MAX
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

//DEKLARASI MIN
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

//DEKLARASI MAX ARRAY
int maxArray(int arr[], int size) {
   int max = arr[0];

   for(int i = 1; i < size; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
   }

   return max;
}

//DEKLARASI MIN ARRAY
int minArray(int arr2[], int size2) {
   int min = arr2[0];

   for(int i = 1; i < size2; i++) {
      if(arr2[i] < min) {
         min = arr2[i];
      }
   }

   return min;
}

//DEKLARASI IS EVEN
bool isEven(int num) {
   return (num % 2 == 0);
}

//DEKLARASI IS ODD
bool isOdd(int num2) {
   return (num2 % 2 != 0);
}

//DEKLARASI IS FACTOR
bool isFactor(int n, int num3) {
   return (n % num3 == 0);
}

//DEKLARASI SEARCH
int search(int arr3[], int n, int x) {
   for(int i = 0; i < n; i++) {
      if(arr3[i] == x) {
         return i;
      }
   }
   return -1;
}

//DEKLARASI IS FOUND
bool isFound(int arr4[], int n, int x) {
   for(int i = 0; i < n; i++) {
      if(arr4[i] == x) {
         return true;
      }
   }
   return false;
}

//DEKLARASI SUM EVEN
int sumEven(int arr5[], int n) {
   int sum = 0;
   for(int i = 0; i < n; i++) {
      if(arr5[i] % 2 == 0) {
         sum += arr5[i];
      }
   }
   return sum;
}

//DEKLARASI SUM ODD
int sumOdd(int arr6[], int n) {
   int sum2 = 0;
   for(int i = 0; i < n; i++) {
      if(arr6[i] % 2 != 0) {
         sum2 += arr6[i];
      }
   }
   return sum2;
}

int main() {

    //DEFINISI MAX
    int num1 = 10, num2 = 20, result;
    result = max(num1, num2);
    cout << "Max value is: " << result << endl;

    //DEFINISI MIN
    int num3 = 10, num4 = 20, result2;
    result2 = min(num3, num4);
    cout << "Min value is: " << result2 << endl;

    //DEFINISI MAX ARRAY
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = maxArray(arr, size);
    cout << "Nilai maksimum dari array adalah: " << max << endl;

    //DEFINISI MIN ARRAY
    int arr2[] = {5, 3, 9, 1, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int min = minArray(arr2, size2);
    cout << "Nilai minimum dari array adalah: " << min << endl;

    //DEFINISI IS EVEN
    int num;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> num;
    if(isEven(num)) {
      cout << num << " adalah bilangan genap." << endl;
    } else {
      cout << num << " bukan bilangan genap." << endl;
    }

    //DEFINISI IS ODD
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> num2;
    if(isOdd(num2)) {
      cout << num2 << " adalah bilangan ganjil." << endl;
    } else {
      cout << num2 << " bukan bilangan ganjil." << endl;
    }

    //DEFINISI IS FACTOR
    int n;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> n;
    cout << "Masukkan sebuah bilangan bulat yang ingin Anda cek: ";
    cin >> num3;
    if(isFactor(n, num3)) {
      cout << num3 << " adalah faktor dari " << n << "." << endl;
    } else {
      cout << num3 << " bukan faktor dari " << n << "." << endl;
    }

    //DEFINISI SEARCH
    int x;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr3[n];
    cout << "Masukkan " << n << " elemen array: ";
    for(int i = 0; i < n; i++) {
      cin >> arr3[i];
    }
    cout << "Masukkan sebuah nilai yang ingin Anda cari: ";
    cin >> x;
    int result3 = search(arr3, n, x);
    if(result3 == -1) {
      cout << "Nilai " << x << " tidak ditemukan dalam array." << endl;
    } else {
      cout << "Nilai " << x << " ditemukan di indeks ke-" << result3 << " dari array." << endl;
    }

    //DEFINISI IS FOUND
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr4[n];
    cout << "Masukkan " << n << " elemen array: ";
    for(int i = 0; i < n; i++) {
      cin >> arr4[i];
    }
    cout << "Masukkan sebuah nilai yang ingin Anda cek: ";
    cin >> x;
    if(isFound(arr4, n, x)) {
      cout << "Nilai " << x << " ditemukan di dalam array." << endl;
    } else {
      cout << "Nilai " << x << " tidak ditemukan di dalam array." << endl;
    }

    //DEFINISI SUM EVEN
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr5[n];
    cout << "Masukkan " << n << " elemen array: ";
    for(int i = 0; i < n; i++) {
      cin >> arr5[i];
    }
    int sum = sumEven(arr5, n);
    cout << "Jumlah bilangan genap di dalam array: " << sum << endl;

    //DEKLARASI SUM ODD
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr6[n];
    cout << "Masukkan " << n << " elemen array: ";
    for(int i = 0; i < n; i++) {
      cin >> arr6[i];
    }
    int sum2 = sumOdd(arr6, n);
    cout << "Jumlah bilangan ganjil di dalam array: " << sum2 << endl;

    return 0;
}
