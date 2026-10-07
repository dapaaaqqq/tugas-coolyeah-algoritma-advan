#include <iostream>

using namespace std;

//  Mendeklarasikan fungsi bernama printStars. Bertipe void (tidak mengembalikan nilai apa apa) dan menerima parameter int berupa n
void printStars(int n) {
    //  Base Case : Jika nilai n sudah lebih dari atau sama dengan 0, maka fungsi akan langsung berhenti dan tidak melanjutkan.
    if (n <= 0) return;
    //  Recursive Call: Fungsi memanggil dirinya sendiri dengan nilai n yang dikurangi 1.
    printStars(n - 1);
    //  Loop for: Loop akan berjalan sebanyak n kali (dari i = 0 sampai i < n),
    //  Di dalam loop, program mencetak "* "
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    //  mendeklarasikan variabel rows dengan nilai 5. Ini menentukan berapa banyak baris yang akan dicetak.
    int rows = 5;
    //  Memanggil fungsi printStars dengan mengirimkan nilai rows yaitu 5.
    printStars(rows);
    //  Menandakan fungsi berhasil
    return 0;
}