#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung rata-rata (Total dibagi jumlah)
double hitungTotalRekursif(int* arr, int n) {
    if (n == 0) return 0; // Base case
    return arr[n - 1] + hitungTotalRekursif(arr, n - 1);
}

// Fungsi rekursif mencari nilai max
int cariMaxRekursif(int* arr, int n, int maxVal) {
    if (n == 0) return maxVal;
    if (arr[n - 1] > maxVal) maxVal = arr[n - 1];
    return cariMaxRekursif(arr, n - 1, maxVal);
}

// Fungsi rekursif mencari nilai min
int cariMinRekursif(int* arr, int n, int minVal) {
    if (n == 0) return minVal;
    if (arr[n - 1] < minVal) minVal = arr[n - 1];
    return cariMinRekursif(arr, n - 1, minVal);
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    if (jumlah == 0) {
        cout << "Tidak ada data mahasiswa." << endl;
        return 0;
    }

    // Array dinamis
    int* nilai = new int[jumlah];

    cout << "Masukkan nilai mahasiswa:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Perhitungan
    double total = hitungTotalRekursif(nilai, jumlah);
    double rataRata = total / jumlah;
    int maxVal = cariMaxRekursif(nilai, jumlah, nilai[0]);
    int minVal = cariMinRekursif(nilai, jumlah, nilai[0]);

    // Output
    cout << "\nOutput:" << endl;
    cout << "Nilai terbesar: " << maxVal << endl;
    cout << "Nilai terkecil: " << minVal << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    // Hapus memori
    delete[] nilai;
    return 0;
}