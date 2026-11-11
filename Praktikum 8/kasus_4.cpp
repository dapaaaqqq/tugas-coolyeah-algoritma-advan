#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung total harga setelah diskon
double hitungTotalRekursif(double* harga, int n, int index = 0) {
    if (index == n) return 0; // Base case
    
    double hargaBarang = harga[index];
    double hargaSetelahDiskon = hargaBarang;
    
    // Logika Diskon
    if (hargaBarang > 500000) {
        hargaSetelahDiskon = hargaBarang * 0.9; // Diskon 10%
        cout << "Diskon untuk barang " << index + 1 << ": 10%" << endl;
    } else if (hargaBarang > 100000) {
        hargaSetelahDiskon = hargaBarang * 0.95; // Asumsi diskon 5% untuk > 100rb (karena output soal menunjukkan 100rb tidak dapat diskon, tapi 500rb dapat)
        cout << "Diskon untuk barang " << index + 1 << ": 5%" << endl;
    } else {
        cout << "Diskon untuk barang " << index + 1 << ": Tidak ada diskon" << endl;
    }

    return hargaSetelahDiskon + hitungTotalRekursif(harga, n, index + 1);
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    double* harga = new double[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    cout << "\nOutput:" << endl;
    // Panggil rekursif (output diskon dicetak di dalam fungsi)
    double total = hitungTotalRekursif(harga, jumlah);
    
    cout << "\nTotal harga setelah diskon: " << total << endl;

    delete[] harga;
    return 0;
}