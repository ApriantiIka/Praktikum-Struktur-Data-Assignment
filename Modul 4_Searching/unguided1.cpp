#include <iostream>
#include <string>
using namespace std;

void selection_sort(string &kata) { // sorting menggunakan selection sort
    for (int i = 0; i < kata.length() - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < kata.length(); j++) {
            if (kata[j] < kata[min_index]) {
                min_index = j;
            }
        }
        char temp = kata[i];
        kata[i] = kata[min_index];
        kata[min_index] = temp;
    }
}

int binary_search(string kata, char cari) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = kata.length() - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (kata[tengah] == cari) {
            b_flag = 1;
            break;
        } else if (kata[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1) {
        return tengah;
    } else {
        return -1;
    }
}

int main() {
    string kata;
    char cari;
    int hasil;

    cout << "\t BINARY SEARCH\n";
    // input kata dari user
    cout << "\n Masukkan kata : ";
    getline(cin, kata);
    // Input huruf yang ingin dicari oleh user
    cout << "\n Masukkan huruf yang ingin Anda cari : ";
    cin >> cari;
    // tampilan data setelah diurutkan
    selection_sort(kata);
    cout << "\n Huruf diurutkan : " << kata << endl;

    hasil = binary_search(kata, cari);

    if (hasil != -1) {
        cout << "\n Huruf \"" << cari << "\" ditemukan pada index ke-" << hasil << endl;
    } else {
        cout << "\n Huruf \"" << cari << "\" tidak ditemukan pada kata tersebut\n";
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}