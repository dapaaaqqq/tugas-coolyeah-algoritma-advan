// DETAIL TUGAS :

// Buat program yang menerima input suhu harian selama 5 hari berturut-turut dan menghitung rata-rata suhu. 
// Program harus menampilkan setiap input suhu dan rata-rata akhir dengan presisi satu digit desimal.


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double h1 = 30.5;
    double h2 = 28.0;
    double h3 = 29.5;
    double h4 = 31.0;
    double h5 = 32.5;
    double h6 = 70.9;

    double average_suhu = (h1 + h2 + h3 + h4 + h5 + h6) /6;
    cout << "Rata-rata suhu: " << fixed << setprecision(1) << average_suhu << endl;
}
