#include <iostream>
#include <string>
using namespace std;

struct Produk {
    string nama;
    double harga;
    int jumlahTerjual;
    double pendapatan;
};

int main() {
    int jumlahProduk;
    cout << "Masukkan jumlah produk: ";
    cin >> jumlahProduk;

    if (jumlahProduk == 0) {
        cout << "Tidak ada data produk." << endl;
        return 0;
    }

    // Array dinamis dari struct
    Produk* produk = new Produk[jumlahProduk];

    // Input Data
    cout << "Masukkan data produk (nama produk, harga satuan, jumlah terjual):" << endl;
    for (int i = 0; i < jumlahProduk; i++) {
        cout << "Produk " << i + 1 << " : ";
        cin >> produk[i].nama >> produk[i].harga >> produk[i].jumlahTerjual;
        produk[i].pendapatan = produk[i].harga * produk[i].jumlahTerjual;
    }

    // Analisis
    double totalPendapatan = 0;
    double maxPendapatan = -1;
    string produkTerlaris = "";
    double maxHargaProduk = 0;

    for (int i = 0; i < jumlahProduk; i++) {
        totalPendapatan += produk[i].pendapatan;
        if (produk[i].pendapatan > maxPendapatan) {
            maxPendapatan = produk[i].pendapatan;
            produkTerlaris = produk[i].nama;
            maxHargaProduk = produk[i].pendapatan;
        }
    }

    double rataRata = totalPendapatan / jumlahProduk;

    // Output
    cout << "\nOutput:" << endl;
    cout << "Total pendapatan: Rp " << totalPendapatan << endl;
    cout << "Rata-rata pendapatan per produk: Rp " << rataRata << endl;
    cout << "Produk dengan pendapatan tertinggi: \"" << produkTerlaris << "\" (Rp " << maxHargaProduk << ")" << endl;

    delete[] produk;
    return 0;
}