#include <iostream>
using namespace std;

//Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char aprianti_2311110023;
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
    simpul -> aprianti_2311110023 = dataMasukkan;
    simpul -> kanan = NULL; 
    simpul -> kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar(){
    if (root == NULL) { 
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda); 
        root = simpul;
        cout << "Root terbentuk..." << endl;
    }
    else {
        cout << "Root sudah ada..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root!= NULL) { 
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) { 
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser!= '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni -> kiri = simpul; 
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
                if (dataUser!= '0') {
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
void bacaPohon() { 
    if (root!= NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i]!= NULL) {
            saatIni = alamat[i];
            cout << saatIni-> aprianti_2311110023 << " ";
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

// Fungsi untuk menampilkan pohon dalam urutan pre-order
void preOrder(pohon* node) {
    if (node!= NULL) {
        cout << node->aprianti_2311110023 << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi untuk menampilkan pohon dalam urutan in-order
void inOrder(pohon* node) {
    if (node!= NULL) {
        inOrder(node->kiri);
        cout << node->aprianti_2311110023 << " ";
        inOrder(node->kanan);
    }
}

// Fungsi untuk menampilkan pohon dalam urutan post-order
void postOrder(pohon* node) {
    if (node!= NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->aprianti_2311110023 << " ";
    }
}

// Fungsi utama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();

    cout << "Pre-order: ";
    preOrder(root);
    cout << endl;

    cout << "In-order: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order: ";
    postOrder(root);
    cout << endl;

    bacaPohon();

    cout << " " << endl;
    cout << "Nama: Aprianti Ika Larasati" << endl;
    cout << "NIM: 2311110023" << endl;
    return 0;
}