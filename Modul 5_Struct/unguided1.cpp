#include<iostream>
#include<string>
using namespace std;

// atribut: judul_buku, pengarang, penerbit, tebal_halaman, harga_buku, isi dengan nilai kemudian tampilkan
struct Buku{
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5];
}; 

Buku bukux; // memanggil tipe data buku, bukux adalah variabel

int main(){
    // Mengisi nilai bukux
    for (int i = 0; i < 5; i++) {
        cout << "\n=== Masukkan informasi Buku " << i+1 << " ===" << endl;
        cout << "Judul Buku: ";
        getline(cin, bukux.judul_buku[i]);
        cout << "Pengarang: ";
        getline(cin, bukux.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, bukux.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> bukux.tebal_halaman[i];
        cout << "Harga Buku: ";
        cin >> bukux.harga_buku[i];
        
        cin.ignore();
    }

    // Mencetak isi bukux
    for (int i = 0; i < 5; i++) {
        cout << "\n=== Informasi Buku " << i+1 << " ===" << endl;
        cout << "Judul: " << bukux.judul_buku[i] << endl;
        cout << "Pengarang: " << bukux.pengarang[i] << endl;
        cout << "Penerbit: " << bukux.penerbit[i] << endl;
        cout << "Tebal Halaman: " << bukux.tebal_halaman[i] << endl;
        cout << "Harga Buku: " << bukux.harga_buku[i] << endl;
        cout << endl;
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}