#include <iostream>

using namespace std;

// fungsi penjumlahan
float tambah(float a, float b){
    return a + b;
}

// fungsi pengurangan
float kurang(float a, float b){
    return a - b;
}
// fungsi menghitung jumlah array
float hitung_jumlah(float array[], int n){
    float jumlah = 0;
    for (int i=0; i<n; i++){
        jumlah += array[i];
    }
    return jumlah;
}

// fungsi menghitung rata-rata array
float hitung_rata(float array[], int n){
    float jumlah = hitung_jumlah(array, n);
    float rata = jumlah / n;
    return rata;
}

int main(){
    float bil1, bil2;
    float hasil_jumlah, hasil_selisih;

    // input dua bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    // panggil fungsi penjumlahan dan pengurangan
    hasil_jumlah = tambah(bil1, bil2);
    hasil_selisih = kurang(bil1, bil2);

    // tampilkan hasil
    cout << "Hasil penjumlahan: " << hasil_jumlah << endl;
    cout << "Hasil pengurangan: " << hasil_selisih << endl;

     float arr[] = {6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // panggil fungsi hitung_jumlah
    float jumlah = hitung_jumlah(arr, n);

    // panggil fungsi hitung_rata
    float rata = hitung_rata(arr, n);

    // tampilkan hasil
    cout << "Jumlah array: " << jumlah << endl;
    cout << "Rata-rata array: " << rata << endl;
    return 0;
}


