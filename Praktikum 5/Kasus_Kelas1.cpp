//  Header dan Namespace
//  Fungsi: Menyiapkan program agar bisa menggunakan fitur fungsi input/output dasar.
#include <iostream>
using namespace std;

//  Passing Arguments: pass-by-reference
//  Fungsi: Mengubah nilai variabel yang dikirim ke dalamnya dengan menambahkan angka 10.
void updateValue(int &x) { 
    x += 10;
}


//  Fungsi: Menjadi titik awal jalannya program (eksekusi utama).
int main() {
    //  Membuat variabel value dan memberinya nilai awal 5.
    int value = 5;
        //  Mencetak nilai dari value
        cout << "Nilai sebelum fungsi dipanggil: " << value << endl;
    //  Memanggil fungsi updateValue(value), karena menggunakan referensi(&), maka variabel value akan "dititipkan" untuk diubah.
    updateValue(value);
        //  Mencetak nilai (value) lagi setelah updateValue selesai. Karena tadi ditambah 10 dalam fungsi, maka outputnya adalah "15". 
        cout << "Nilai setelah fungsi dipanggil: " << value << endl;
    //  menandakan program selesai dengan sukses.
    return 0;

}