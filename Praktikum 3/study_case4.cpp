#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double rupiah, dollar, euro, yen, rupe, rial, won, ringgit, baht;
    int kode_kurs;
    double result;

    cout << "Masukkan nilai rupiah: ";
    cin >> rupiah;

    cout << "Pilih Mata Uang Tujuan:" << endl;
    cout << "1. Dollar" << endl;
    cout << "2. Euro" << endl;
    cout << "3. Yen" << endl;
    cout << "4. Rupe" << endl;
    cout << "5. Rial" << endl;
    cout << "6. Won" << endl;
    cout << "7. Ringgit" << endl;
    cout << "8. Baht" << endl;

    cout << "Masukkan kode kurs: ";
    cin >> kode_kurs;
    

    switch (kode_kurs)
    {
    case 1:
        cout << "Nilai uang dalam Dollar adalah: " << fixed << setprecision(2) << rupiah / 15000 << " USD" << endl;
        break;
    
    case 2:
        cout << "Nilai uang dalam Euro adalah: " << fixed << setprecision(2) << rupiah / 16000 << "  EUR" << endl;
        break;

    case 3:
        cout << "Nilai uang dalam Yen adalah: " << fixed << setprecision(2) << rupiah / 105 << "Yen" << endl;
        break;
    
    case 4:
        cout << "Nilai uang dalam Rupe adalah: " << fixed << setprecision(2) << rupiah / 180 << "INR" <<endl;
        break;    

    case 5:
        cout << "Nilai uang dalam Rial adalah: " << fixed << setprecision(2) << rupiah / 4000 << "SAR" << endl;
        break;
    
    case 6:
        cout << "Nilai uang dalam Won adalah: " << fixed << setprecision(2) << rupiah / 11 << "KRW" << endl;
        break;

    case 7:
        cout << "Nilai uang dalam Ringgit adalah: " << fixed << setprecision(2) << rupiah / 3400 << "MYR" << endl;
        break;
    
    case 8:
        cout << "Nilai uang dalam Baht adalah: " << fixed << setprecision(2) << rupiah / 420 << "THB" <<endl;
        break; 

    default:
        break;
    }
}