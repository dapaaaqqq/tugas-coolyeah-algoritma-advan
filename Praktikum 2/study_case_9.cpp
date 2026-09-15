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

    
    cout << left << setw(10) << 2
        << setw(15) << 2 * cm
        << setw(15) << 2 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 3
        << setw(15) << 3 * cm
        << setw(15) << 3 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 4 
        << setw(15) << 4 * cm
        << setw(15) << 4 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 5 
        << setw(15) << 5 * cm
        << setw(15) << 5 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 6
        << setw(15) << 6 * cm
        << setw(15) << 6 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 7
        << setw(15) << 7 * cm
        << setw(15) << 7 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 8
        << setw(15) << 8 * cm
        << setw(15) << 8 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 9 
        << setw(15) << 9 * cm
        << setw(15) << 9 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    
    cout << left << setw(10) << 10 
        << setw(15) << 10 * cm
        << setw(15) << 10 * mm
        << setw(15) << fixed << setprecision(3) << 1 / km
        << defaultfloat << setprecision(6) << endl;

    return 0;
}