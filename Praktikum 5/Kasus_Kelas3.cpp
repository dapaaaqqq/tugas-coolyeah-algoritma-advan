#include <iostream>
using namespace std;

//  sum (penjumlahan)
//  Fungsi: menghitung total jumlah angka 
int sum(int n) {
    if (n <= 0) return 0;
    return n + sum(n - 1);

}

//  Fungsi utama tempat program C++ mulai dijalankan pertama kali.
int main() {
    //  Mendeklarasikan variabel n sebagai angka 3
    int n = 3;
    //  Mencetak output "Jumlah dari 1 hingga {nilai n} adalah: {return dari sum}"
    cout << "Jumlah dari 1 hingga " << n << " adalah: " <<
sum(n) << endl;

return 0;

}