#include <iostream>
using namespace std;

// Fungsi rekursif untuk menampilkan matriks
void tampilMatriksRekursif(int** mat, int baris, int kolom, int currBaris = 0, int currKolom = 0) {
    if (currBaris == baris) return; // Base case: selesai

    cout << mat[currBaris][currKolom] << " ";

    if (currKolom == kolom - 1) {
        cout << endl; // Pindah baris
        tampilMatriksRekursif(mat, baris, kolom, currBaris + 1, 0);
    } else {
        tampilMatriksRekursif(mat, baris, kolom, currBaris, currKolom + 1);
    }
}

int main() {
    int baris = 3, kolom = 3;

    // Alokasi array dinamis 2D
    int** matriks = new int*[baris];
    for (int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom];
    }

    // Input data sesuai contoh
    int data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            matriks[i][j] = data[i][j];
        }
    }

    cout << "Matriks asli:" << endl;
    tampilMatriksRekursif(matriks, baris, kolom);

    // Transpose
    int** transpose = new int*[kolom]; // ukuran jadi terbalik (3x3 sama aja)
    for (int i = 0; i < kolom; i++) {
        transpose[i] = new int[baris];
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "\nMatriks transpose:" << endl;
    tampilMatriksRekursif(transpose, kolom, baris);

    // Hapus memori
    for (int i = 0; i < baris; i++) delete[] matriks[i];
    delete[] matriks;
    for (int i = 0; i < kolom; i++) delete[] transpose[i];
    delete[] transpose;

    return 0;
}