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

    
    double cm = 100;
    double mm = 1000;
    double km = 1000.0;

    cout << left << setw(10) << 1
        << setw(15) << 1 * cm
        << setw(15) << 1 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;


    return 0;
}