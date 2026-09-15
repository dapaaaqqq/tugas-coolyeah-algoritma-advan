#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string karyawan;

    int jabatan;
    int tarif;
    int jam_kerja;
    int gaji_total = jam_kerja * tarif;

    cout << "=== Data Karyawan ===" << endl;

    cout << "Masukkan nama karyawan: ";
    cin >> karyawan;

    cout << "Masukkan jabatan: " << endl;
    cin >> jabatan;

    cout << "Masukkan jam kerja: " << endl;
    cin >> jam_kerja;

    if (jabatan == 1) {
        tarif = 15000;
    }

    else if (jabatan == 2)
    {
        tarif = 25000;
    }
    
    else if (jabatan == 3) {
        tarif = 35000;
    }

    else if (jabatan == 4) {
        tarif = 50000;
    }

    else if (jabatan == 5) {
        tarif = 75000;
    }
 
    cout << "Total gaji anda: " << gaji_total << endl;

    cout << "=========================================" << endl;
    cout << left << setw(10) << "Nama" << setw(10) << "Jabatan" << setw(10) << "Total Gaji" << endl;
    cout << "=========================================" << endl;
    cout << left << setw(10) << karyawan << setw(10) << jabatan << setw(10) << gaji_total << endl;
    cout << "=========================================" << endl; 
}