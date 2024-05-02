#include<iostream>
#include<string>
using namespace std;

// atribut: judul_buku, pengarang, penerbit, tebal_halaman, harga_buku, isi dengan nilai kemudian tampilkan
struct Buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
}; 

Buku bukux; // memanggil tipe data buku, bukux adalah variabel
Buku buku2;

int main(){
    // Mengisi nilai bukux
    bukux.judul_buku = "The Greatest Showman";
    bukux.pengarang = "Keigo Higashino";
    bukux.penerbit = "Gramedia";
    bukux.tebal_halaman = 400;
    bukux.harga_buku = 100000;

    // Mencetak isi bukux
    cout << "\n=== Informasi Buku 1 ===" << endl;
    cout << "\nJudul: " << bukux.judul_buku << endl;
    cout << "\nPengarang: " << bukux.pengarang << endl;
    cout << "\nPenerbit: " << bukux.penerbit << endl;
    cout << "\nTebal halaman: " << bukux.tebal_halaman << endl;
    cout << "\nHarga buku: " << bukux.harga_buku << endl;

    // Mengisi nilai buku2
    buku2.judul_buku = "The Midnight Library";
    buku2.pengarang = "Matt Haig";
    buku2.penerbit = "Gramedia";
    buku2.tebal_halaman = 350;
    buku2.harga_buku = 97000;

    // Mencetak isi buku1
    cout << "\n=== Informasi Buku 2 ===" << endl;
    cout << "\nJudul: " << buku2.judul_buku << endl;
    cout << "\nPengarang: " << buku2.pengarang << endl;
    cout << "\nPenerbit: " << buku2.penerbit << endl;
    cout << "\nTebal halaman: " << buku2.tebal_halaman << endl;
    cout << "\nHarga buku: " << buku2.harga_buku << endl;

    return 0;
}