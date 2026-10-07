#include <iostream>

using namespace std;

//  Mendeklarasikan fungsi bernama sumDigits. Fungsi ini mengembalikan nilai bertipe integer (int) dan menerima satu parameter integer bernama n.
int sumDigits(int n) {
    //  Base Case (kondisi berhenti) dalam rekursi. Jika nilai n sudah menjadi 0 (artinya semua digit sudah diproses), 
    //  maka fungsi akan berhenti dan mengembalikan nilai 0.
    if (n == 0) return 0;
    //  Recursive case dan inti logika program.
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    // Mendeklarasikan variabel n bertipe integer dan value 222
    int n = 222;
    // Output : "Jumlah digit dari n(222) adalah: {sumDigits(222)}"
    cout << "Jumlah digit dari " << n << " adalah: " << sumDigits(n) << endl;

    // Mendeklarasikan variabel n bertipe integer dan value 333
    n = 333;
    // Output : "Jumlah digit dari n(333) adalah: {sumDigits(333)}"
    cout << "Jumlah digit dari " << n << " adalah: " << sumDigits(n) << endl;
return 0;
}
