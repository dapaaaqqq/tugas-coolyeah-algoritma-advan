#include <iostream>
using namespace std;

// Fungsi untuk menghitung digit.
int countDigits (int n) { 
    int count = 0; // nilai awal digit yang hendak dihitung (0).
    //Looping kondisi ketika nilai n lebih dari 0.
    while (n > 0) {
        count ++; 
        n /= 10;
    }
    // Memberi pertanda atau mengembalikan output berupa hasil dari variabel countDigits. 
    return count;
}

// Tempat awal atau wadah berjalannya program.
int main() {
    int number = 123456; // mendeklarasikan variabel number.
    cout << "Jumlah digit: " << countDigits(number) << endl; // mengembalikan output pertama.

    number = 012345;// Tidak perlu ada deklarasi int lagi karena sebelumnya sudah ada,
                    // Kalau dipaksa declare int lagi, maka akan ada error "redeclaration".
    cout << "Jumlah digit: " << countDigits(number) << endl; // mengembalikan output kedua.
}