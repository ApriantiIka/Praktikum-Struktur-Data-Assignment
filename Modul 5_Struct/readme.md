# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
Dalam ilmu komputer, 

### 1. Bubble Sort


## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman harga_buku. Isi dengan nilai kemudian tampilkan. 
```C++
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

Buku buku1; // memanggil tipe data buku, buku1 adalah variabel
Buku buku2;

int main(){
    // Mengisi nilai buku1
    buku1.judul_buku = "The Greatest Showman";
    buku1.pengarang = "Keigo Higashino";
    buku1.penerbit = "Gramedia";
    buku1.tebal_halaman = 400;
    buku1.harga_buku = 100000;

    // Mencetak isi buku1
    cout << "\n=== Informasi Buku 1 ===" << endl;
    cout << "\nJudul: " << buku1.judul_buku << endl;
    cout << "\nPengarang: " << buku1.pengarang << endl;
    cout << "\nPenerbit: " << buku1.penerbit << endl;
    cout << "\nTebal halaman: " << buku1.tebal_halaman << endl;
    cout << "\nHarga buku: " << buku1.harga_buku << endl;

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
```
Program di atas merupakan program katalog buku. Program ini menyimpan informasi tentang dua buku, seperti judul, penulis, penerbit, jumlah halaman, dan harga buku. Program tersebut mendefinisikan sebuah struct bernama `Buku` yang memiliki lima atribut, yaitu `judul_buku`, `pengarang`, `penerbit`, `tebal_halaman`, dan `harga_buku`. Variabel `buku1` dan `buku2` yang bertipe `Buku` akan menyimpan informasi tentang dua buah buku berbeda. Artinya, program membuat dua buku dengan atribut-atribut yang telah didefinisikan sebelumnya. Pada fungsi `main()`, nilai-nilai untuk `buku1` dan `buku2` diisi. Misalnya, untuk `buku1`, diisi nilai `judul_buku` dengan "The Greatest Showman", `pengarang` dengan "Keigo Higashino", dan seterusnya. Setelah itu isi dari `buku1` dan `buku2` dicetak dengan perintah `cout`. Kemudian, program akan mencetak informasi dua buku yang didefinisikan, yaitu `buku1` dan `buku2`.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan. 
```C++
#include <iostream>
#include <string>
using namespace std;

struct Hewan{
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernapasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct Hewan_darat{
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
    Hewan info_hewan;
};
Hewan_darat hewan1;

struct Hewan_laut{
    string bentuk_sirip;
    string pertahanan_diri;
    Hewan info_hewan;
};
Hewan_laut hewan2;

int main(){
    hewan1.info_hewan.nama_hewan = "Ayam";
    hewan1.info_hewan.jenis_kelamin = "Betina";
    hewan1.info_hewan.kembangbiak = "Bertelur";
    hewan1.info_hewan.pernapasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = false;
    hewan1.jumlah_kaki = 2;
    hewan1.apakah_menyusui = false;
    hewan1.suara = "petok-petok";

    // Hewan 2 (Laut)
    hewan2.info_hewan.nama_hewan = "Ikan Kakap";
    hewan2.info_hewan.jenis_kelamin = "Jantan";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernapasan = "Insang";
    hewan2.info_hewan.tempat_hidup = "Perairan";
    hewan2.info_hewan.karnivora = true;
    hewan2.bentuk_sirip = "sirip dan ekor";
    hewan2.pertahanan_diri = "Gigi tajam";

    // Menampilkan data
    cout << "\tHewan Darat" << endl;
    cout << "Nama hewan: " << hewan1.info_hewan.nama_hewan << endl;
    cout << "Jenis kelamin: " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "Cara berkembangbiak: " << hewan1.info_hewan.kembangbiak << endl;
    cout << "Alat pernapasan: " << hewan1.info_hewan.pernapasan << endl;
    cout << "Tempat hidup: " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah karnivora? " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah kaki: " << hewan1.jumlah_kaki << endl;
    cout << "Apakah menyusui? " << hewan1.apakah_menyusui << endl;
    cout << "Suara: " << hewan1.suara << endl;

    cout << "\tHewan Air" << endl;
    cout << "Nama hewan: " << hewan2.info_hewan.nama_hewan << endl;
    cout << "Jenis kelamin: " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "Cara berkembangbiak: " << hewan2.info_hewan.kembangbiak << endl;
    cout << "Alat pernapasan: " << hewan2.info_hewan.pernapasan << endl;
    cout << "Tempat hidup: " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah karnivora? " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk sirip: " << hewan2.bentuk_sirip << endl;
    cout << "Pertahanan diri: " << hewan2.pertahanan_diri << endl;

    return 0;
}
```
Program di atas membuat tiga buah struct, yaitu `Hewan`, `Hewan_darat`, dan `Hewan_laut`. Struct `Hewan` memiliki 6 atribut, yaitu:
- `nama_hewan`: string yang menyimpan nama hewan
- `jenis_kelamin`: string yang menyimpan jenis kelamin hewan
- `kembangbiak`: string yang menyimpan cara hewan berkembangbiak
- `pernapasan`: string yang menyimpan alat pernapasan hewan
- `tempat_hidup`: string yang menyimpan tempat hidup hewan
- `karnivora`: boolean yang menyimpan apakah hewan karnivora atau tidak
Struct `Hewan_darat` terdiri dari 4 atribut, yaitu:
- `jumlah_kaki`: integer yang menyimpan jumlah kaki hewan
- `apakah_menyusui`: boolean yang menyimpan apakah hewan menyusui atau tidak
- `suara`: string yang menyimpan suara hewan
- `info_hewan`: struct `Hewan` yang menyimpan informasi hewan
Struct `Hewan_laut`, memiliki 3 atribut, yaitu:
- `bentuk_sirip`: string yang menyimpan bentuk sirip hewan
- `pertahanan_diri`: string yang menyimpan pertahanan diri hewan
- `info_hewan`: struktur `Hewan` yang menyimpan informasi hewan
Kemudian dibuat dua variabel `hewan1` dan `hewan2` yang bertipe `Hewan_darat` dan `Hewan_laut`. Pada fungsi `main()`, nilai-nilai untuk `hewan1` dan `hewan2` diisi. Misalnya, untuk `hewan1`, diisi nilai `nama_hewan` dengan "Ayam", `jenis_kelamin` dengan "Betina", dan seterusnya. Lalu isi dari `hewan1` dan `hewan2` dicetak menggunakan perintah `cout` dan program ini akan menampilkan informasi dua hewan yang didefinisikan, yaitu `hewan1`: Ayam dan hewan2: Ikan Kakap.

## Unguided 

### 1.  Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan. 

```C++
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

    return 0;
}
```

#### Output:
![Screenshot 2024-05-03 003736](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/a278cb10-4f16-4f8f-b32c-e39e009ed6c0)

![Screenshot 2024-05-03 003748](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/8a30fda4-3775-452b-9c93-1b3ebb504a8f)

#### Full Code Screenshot:
![Screenshot 2024-05-03 004224](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/0a447474-53df-460c-a98c-20bdd8b83307)

#### Penjelasan:
Program di atas merupakan program katalog buku. Program ini menyimpan informasi tentang lima buah buku, seperti judul, penulis, penerbit, jumlah halaman, dan harga buku. Program tersebut mendefinisikan sebuah struct bernama `Buku` yang memiliki lima atribut, yaitu:
- judul_buku: array string yang menyimpan judul buku
- pengarang: array string yang menyimpan nama pengarang buku
- penerbit: array string yang menyimpan nama penerbit buku
- tebal_halaman: array integer yang menyimpan tebal halaman buku
- harga_buku: array double yang menyimpan harga buku
Kemudian dibuat sebuah variabel `bukux` yang bertipe `Buku`. Pada fungsi `main()`, digunakan for loop untuk mengisi nilai-nilai atribut `bukux`. Program meminta input dari user untuk 5 buah buku dan setiap input akan disimpan dalam array yang sesuai. Setelah mengisi nilai-nilai atribut, digunakan for loop lagi untuk mencetak isi dari array tersebut sebagai output.

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya? 
Array digunakan untuk menyimpan beberapa elemen struct. Hal ini memungkinkan kita mengelompokkan data dengan tipe yang sama dalam satu struct. Misalnya, kita ingin mengisi data mie instan sebanyak 3 kali. Berikut adalah cara mengisi data dan menampilkannya.

```C++
#include <iostream>
#include<string>
using namespace std;

struct mie_instan {
    string brand;
    string varian;
    double harga;
};

int main() {
    mie_instan mie[3]; // Array of struct mie_instan

    // Mengisi data
    for (int i = 0; i < 3; i++) {
        cout << "Brand: ";
        cin >> mie[i].brand;
        cout << "Varian: ";
        cin >> mie[i].varian;
        cout << "Harga: ";
        cin >> mie[i].harga;
        cout << endl;
    }

    // Menampilkan data
    cout << "Data Mie Instan:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Mie Instan ke-" << i + 1 << ":" << endl;
        
        cout << "Brand: " << mie[i].brand << endl;
        cout << "Varian: " << mie[i].varian << endl;
        cout << "Harga: " << mie[i].harga << endl;
        cout << endl;
    }

    return 0;
}
```

Program di atas meminta input 3 data mie instan, yaitu brand, varian, dan harga, kemudian menampilkan data tersebut.

Kelebihan menggunakan array untuk deklarasi varibel struct, yaitu:
- Pengelolaan data terstruktur: Struct of array memungkinkan kita mengelola data dengan tipe yang sama secara terstruktur.
- Akses elemen dengan mudah: Kita dapat mengakses elemen struct dengan indeks array, sehingga memudahkan akses data individual.
- Penggunaan memori yang efisien: Struct of array mengalokasikan memori di lokasi yang berdekatan untuk semua elemennya
Sedangkan kekurangan menggunakan array untuk deklarasi varibel struct, yaitu:
- Ukuran tetap: Ukuran array ditentukan pada saat deklarasi dan tidak dapat diubah selama eksekusi program.
- Penggunaan memori yang statis: Tidak fleksibel untuk menangani perubahan dinamis.
- Tidak efisien untuk penghapusan dan penambahan elemen: Jika kita perlu menghapus atau menambah elemen, harus menggeser elemen lain.
- Pencarian lambat: Pencarian elemen dalam array memerlukan iterasi linear.
- Tidak mendukung struct yang dinamis: Tidak cocok untuk situasi di mana ukuran data berubah secara dinamis.

## Kesimpulan
Struct merupakan tipe data bentukan yang berisi kumpulan variabel yang bernaung dalam suatu nama yang sama dan memiliki kaitan satu sama lain. Berbeda dengan array yang hanya berupa kumpulan variabel dengan tipe data yang sama, struct bisa memiliki variabel-variabel yang memiliki tipe data yang sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe array atau struct itu sendiri. Untuk membuat tipe data struktur dalam C++, kita harus dideklarasikan dengan menggunakan kata kunci struct.

## Referensi
[1] M.S. Garai Canaan.C and M. Daya. Popular sorting algorithms. World Applied Programming, 1:62–71, April 2011.

[2] 