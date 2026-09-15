#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    double suhu1, suhu2, suhu3, suhu4, suhu5;
    double average;

    cout << "Masukkan suhu pada hari ke-1: ";
    cin >> suhu1;

    cout << "Masukkan suhu pada hari ke-2: ";
    cin >> suhu2;

    cout << "Masukkan suhu pada hari ke-3: ";
    cin >> suhu3;

    cout << "Masukkan suhu pada hari ke-4: ";
    cin >> suhu4;

    cout << "Masukkan suhu pada hari ke-5: ";
    cin >> suhu5;

    average = (suhu1 + suhu2 + suhu3 + suhu4 + suhu5) / 5.0;

    string keterangan = (average > 30.0) ? "Cuaca Panas" : ((average >= 20.0)) ? "Cuaca Normal" : "Cuaca Dingin";

    cout << left << setw(10) << "Hari" << setw(10) << "Suhu" << endl;
    cout << "=========================================" << endl;
    cout << left << setw(10) << "1" << setw(10) << suhu1 << endl;
    cout << left << setw(10) << "2" << setw(10) << suhu2 << endl;
    cout << left << setw(10) << "3" << setw(10) << suhu3 << endl;
    cout << left << setw(10) << "4" << setw(10) << suhu4 << endl;
    cout << left << setw(10) << "5" << setw(10) << suhu5 << endl;    
    cout << "=========================================" << endl;
    cout << setw(20) << left << "Rata-Rata Suhu" << ": " << setw(8) << right << fixed << setprecision(1) << average << endl;
    cout << setw(20) << left << "Keterangan"     << ": " << setw(8) << right << keterangan << endl;

}