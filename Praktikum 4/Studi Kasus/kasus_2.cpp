#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int hadir;
    double presentase;
    int choose;
    int status;

    hadir = 0;

    for (int hari = 1; hari <= 5; hari++) {
        cout << "Apakah mahasiswa hadir pada hari ke-" << hari << "? (1 untuk hadir, 0 untuk tidak hadir): ";
        cin >> status;

        if (status == 1) {
            hadir++;

        }
    }
    presentase = (hadir / 5.0) * 100;


        string statushadir = (presentase > 75) ? "Baik." : (presentase >= 50) ? "Cukup" : "Kurang";
        
        cout << "===============================" << endl;
        cout << "Persentase kehadiran: " << presentase << "%" << endl;
        cout << "===============================" << endl;
        cout << "Status Kehadiran: " << statushadir << endl;
}