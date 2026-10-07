#include <iostream>

using namespace std;

//  Mendeklarasikan fungsi bernama displayFactorial. Fungsi ini bertipe void (tidak mengembalikan nilai) dan menerima satu parameter integer bernama n.
void displayFactorial(int n) {
    //  Mendeklarasikan variabel factorial bertipe integer dan menginisialisasinya dengan nilai 1. Variabel ini akan digunakan untuk menyimpan hasil perkalian faktorial.
    int factorial = 1;
    //  Ini adalah loop for. Loop akan berjalan mulai dari i = 1 hingga i <= n. Setiap iterasi, nilai i akan bertambah 1 (i++).
    for (int i = 1; i <= n; i++) {
//  Ini adalah operator penugasan gabungan. 
//  Artinya sama dengan factorial = factorial * i;. Setiap kali loop berjalan, nilai factorial akan dikalikan dengan nilai i saat ini dan hasilnya disimpan kembali ke factorial.
factorial *= i;
//  Mencetak hasil ke layar pada setiap iterasi loop. Program akan mencetak teks "Faktorial dari ", 
//  diikuti nilai i saat ini, teks " adalah ", nilai factorial saat ini, lalu pindah baris (endl).
cout << "Faktorial dari " << i << " adalah " << factorial << endl;

}

}

//  Fungsi tempat program C++ mulai dijalankan.
int main() {
    //  Mendeklarasikan variabel num bertipe integer dan mengisinya dengan nilai 5.
    int num = 5;
    //  Memanggil fungsi displayFactorial dengan mengirimkan nilai num (yaitu 5) sebagai argumen.
    displayFactorial(num);

return 0;

}