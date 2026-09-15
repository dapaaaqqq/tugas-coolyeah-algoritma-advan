#include <iostream>

using namespace std;

int main() {

    int kode_hari;
    
    cout << "Masukkan kode hari: " << endl;
    cin >> kode_hari;

    switch (kode_hari) 
    {
    case 1: 
        cout << "Hari SENIN";
        break;

    case 2:
        cout << "Hari SELASA";
        break;
    }
}