#include <iostream>
using namespace std;

int main () {
    int n = 10; // variabel n utk jumlah data
    int data[n] = {9,4,1,7,5,12,4,13,4,10}; // inputan data dari program
    int cari = 10; //angka yang dicari = 10
    bool ketemu = false; // variabel boolean ketemu 
    int i;
    // Algoritma sequential search
    for (i=0; i < n; i++) { // menggunakan perulangan for
        if (data[i] == cari) { //mengecek apakah data yang dicari = cari
            ketemu = true; //ketika ketemunya false, program akan looping
            break; // jika true maka program berhenti
        }
    }
    cout << "\t Program sequential search sederhana\n" << endl;
    cout << "Data: {9,4,1,7,5,12,4,13,4,10}" << endl;

    if (ketemu) {
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}