#include <iostream>
using namespace std;

//  Fungsi recursion() yang memanggil dirinya sendiri dan menampilkan teks "Halo.".
void recursion() {
    //  Mencetak teks "Halo."
    cout << "Halo." << endl;
    //  Mencetak recursion secara terus-menerus
    recursion();
}

//  Titik awal program (hanya bertugas memanggil fungsi recursion).
int main() {

    recursion();

return 0;

}