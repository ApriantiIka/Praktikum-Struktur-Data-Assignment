#include <iostream>
using namespace std;

//Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul -> data = dataMasukkan;
    simpul -> kanan = NULL; // karena baru membuat simpul baru, maka simpul kanan dan kiri harus NULL
    simpul -> kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar(){
    if (root == NULL) { // jika root masih kosong
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda); // data baru menjadi root
        root = simpul;
        cout << "Root terbentuk ..." << endl;
    }
    else {
        cout << "Root sudah ada ..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) { // jika root tidak sama dengan NULL, maka kita isi
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) { // jika kita input 0, maka program akan berhenti dan mencetak output 
        // j<256 adalah kuota
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni -> kiri = simpul; // tree bergeraknya dari kiri ke kanan
                j++;
                alamat[j] = simpul;
            }
            else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat [i];
                    saatIni -> kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                }
                else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() { // menampilkan
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatIni = alamat[i];
            cout << saatIni-> data << " ";
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n*2;
            }
            i++;
        }
    }
}

// Fungsi utama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();

    return 0;
}