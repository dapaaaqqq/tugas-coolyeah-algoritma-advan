#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Var Declare
    string fullname = "John Doe";
    int age = 30;
    float height = 168.5;
    double averagescore = 85.75;
    bool isPassed = true;

    //Format Table Output
    cout << left; //Rata kiri
    cout << setw(20) << "Nama Lengkap" << ": " <<
fullname << endl;
    cout << setw(20) << "Usia" << ": " << 
age << "tahun" << endl;
    cout << setw(20) << "Tinggi Badan" << ": " <<
fixed << setprecision(1) << height << " cm" << endl;
    cout << setw(20) << "Nilai Rata-Rata" << ": " << fixed << setprecision(2) << 
averagescore << endl;
    cout << setw(20) << "Status Kelulusan" << ": " << 
(isPassed ? "Lulus" : "Tidak Lulus") << endl;
}