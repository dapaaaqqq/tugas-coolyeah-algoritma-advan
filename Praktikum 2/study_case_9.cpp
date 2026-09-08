// DETAIL TUGAS : 

// Buat program yang menampilkan tabel konversi dari meter ke sentimeter, milimeter, dan kilometer untuk nilai dari 1 hingga 10 meter. 
// Gunakan manipulators untuk menyusun tabel dengan rapi.


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int meter;


    cout << left << setw(10) << "Meter"
    << setw(15) << "Sentimeter"
    << setw(15) << "Milimeter" 
    << setw(15) << "Kilometer" << endl;
    cout << "==================================================================================================" << endl;

    
    for (meter = 1; meter <= 10; meter++) {
    double cm = meter * 100;
    double mm = meter * 1000;
    double km = meter / 1000.0;

    cout << left << setw(10) << meter 
        << setw(15) << cm
        << setw(15) << mm
        << setw(15) << fixed << setprecision(3) << km
        << defaultfloat << setprecision(6) << endl;
    }

    return 0;
}