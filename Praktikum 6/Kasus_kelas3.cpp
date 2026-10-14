#include <iostream>
using namespace std;

// Deklarasi nama dan tipe array dengan nilai awal 1, 2, 3, 4, 5.
int arr[5] = {1, 2, 3, 4, 5};

// Tempat dimulainya program.
int main() {
    cout << "Angka Genap: "; // Mengembalikan output berupa "Angka Genap: {hasil dari arr[i]}".
    for (int i = 0; i < 5; i++) { // Loop for yang mengakses setiap nilai array,
                                  // i dimulai dari 0 (indeks pertama), 
                                  // dan terus bertambah (i++) selama i kurang dari 5 (batas panjang array).

        if (arr[i] % 2 == 0) { // Operator kondisi yang menyatakan:
                               // "Jika sisa bagi 2 arr[i] menghasilkan 0, maka nilai itu yang ditampilkan".
            cout << arr[i] << " "; // output yang menyatakan nilai dari arr[i] setelah adanya loop dan kondisi.
        }
    }
    cout << endl << "Angka ganjil: "; // Mengembalikan output berupa "Angka ganjil: {hasil dari arr[i]}".
        for (int i = 0; i < 5; i++) { // Loop for yang mengakses setiap nilai array.
                                      // i dimulai dari 0 (indeks pertama),
                                      // dan terus bertambah (i++) selama i kurang dari 5 (batas array).
            if (arr[i] % 2 != 0) { // Operator kondisi yang menyatakan bahwa:
                                   // "Jika sisa bagi 2 arr[i] tidak sama dengan 0, maka nilai itu ditampilkan".
                cout << arr[i] << " ";
            }
        }
}