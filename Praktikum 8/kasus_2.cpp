#include <iostream>
using namespace std;

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int C[2][2]; // Hasil perkalian matriks 2x3 dan 3x2 adalah 2x2

    // Cek apakah bisa dikalikan (Kolom A == Baris B)
    // Di soal ini statis sudah pasti bisa, tapi ini implementasi pengecekannya
    if (3 != 3) {
        cout << "Matriks tidak dapat dikalikan!" << endl;
        return 0;
    }

    // Proses perkalian
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    cout << "Hasil perkalian Matriks A dan B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}