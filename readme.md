# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori

Dalam ilmu komputer dan pemrograman, tipe data adalah klasifikasi data yang memberi tahu kompilator atau penerjemah bagaimana pemrogram ingin menggunakan data tersebut. Sebagian besar bahasa pemrograman mendukung tipe data dasar seperti integer, floating point, character, dan boolean. Tipe data menyediakan sekumpulan nilai dari ekspresi (yaitu variabel, fungsi) yang dapat menerima nilai tersebut. Tipe data ini menentukan operasi yang harus dilakukan pada data, tujuan data, dan arah penyimpanan nilai jenis ini [1].

### Tipe Data Primitif
Tipe data primitif adalah sekumpulan tipe data dasar yang menjadi dasar pembuatan semua tipe data lainnya. Tipe data primitif merujuk pada tipe data standar yang dibangun dalam bahasa pemrograman (tipe bawaan) [2]. Jenis-jenis tipe data primitif yang paling umum digunakan adalah integer, float, char, dan boolean.

### Tipe Data Abstrak
Tipe Data Abstrak (TDA) atau Abstract Data Type (ADT) merupakan tipe data dari suatu bahasa pemrograman dengan sematik serupa[3]. 

### Tipe Data Koleksi
Tipe data koleksi adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Beberapa tipe data koleksi yang umum digunakan dalam pemrograman, yaitu:
- Array: adalah salah satu tipe data yang digunakan dalam bahasa pemrograman PHP, Pascal, JAVA, C++, dan Python. Menggunakan array dapat mempermudah penyimpanan data karena berisi tabel komponen dengan tipe data yang sama. Setiap anggota array dapat diakses melalui indeks.
- Vector: 
- Map: 

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    //It allows user to enter operator i.e. +, -, *, /
    cout << "Masukkan Operator: ";
    cin >> op;
    // It allows user to enter the operands
    cout <<"\nMasukkan Bilangan ke-1  dan ke-2: ";
    cin >> num1 >> num2;

    // Switch statement begins
    switch(op)
    {
    case '+':
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
        break;
    case '*':
        cout<< num1 * num2;
        break;
    case '/':
        cout<< num1 / num2;
        break;
    default:
        cout<< "Error! operator is not correct";
    }
return 0; 
}
```
Kode di atas merupakan program kalkulator sederhana untuk pengoperasian aritmatika seperti penjumlahan, pengurangan, perkalian, dan pembagian. Program tersebut memungkinkan pengguna untuk menginputkan dua bilangan float yang nantinya akan dioperasikan. Variabel op merupakan jenis operator perhitungan yang bertipe character. Setelah menginputkan jenis operator serta angka pertama dan kedua, program akan berjalan sesuatu perintah. Program ini menggunakan struktur switch case. Struktur ini memungkinkan program untuk melakukan operasi perhitungan berdasarkan inputan operator dari user. Apabila inputan operator adalah "/", maka program akan menjalankan blok kode "/". Jika inputan operator tidak sesuai dengan semua operator yang ada di program, maka program akan menampilkan pesan "Error! operator is not correct".

### 2. Tipe Data Abstrak
```C++
// Tipe Data Abstrak
#include <iostream>
#include <stdio.h> //library
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

// Main Program
int main()
{
    // Menggunakna struct
    struct Mahasiswa mhs1, mhs2;
    // Mengisi nilai ke struct
    mhs1.name = "Habibah";
    mhs1.address = "Sumampir";
    mhs1.age = 19;
    mhs2.name = "Grahen";
    mhs2.address = "Kendari";
    mhs2.age = 19;

    cout <<"Mahasiswa 1\n";
    cout <<"Nama: " << mhs1.name <<endl;
    cout <<"Alamat: " << mhs1.address <<endl;
    cout <<"Umur: " << mhs1.age <<endl;
    cout <<"\nMahasiswa 2\n";
    cout <<"Nama: " << mhs2.name <<endl;
    cout <<"Alamat: " <<mhs2.address <<endl;
    cout <<"Umur: " <<mhs2.age <<endl;

}
```
Kode di atas merupakan salah satu program yang menggunakan tipe data abstrak, yaitu struct. Struct pada program tersebut adalah struct Mahasiswa yang memuat "name", "address", dan "age". "name" dan "address" bertipe data character, sedangkan "age" merupakan tipe data integer. Program ini memungkinkan pengguna untuk mengisi variabel nama, alamat, dan umur mahasiswa 1 dan mahasiswa 2. Setelah itu, program akan berjalan dan menampilkannya dengan syntax cout.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
#include <array>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //Mencetak array dengan tab
    cout << "Isi array pertama  : " << nilai[0] << endl;
    cout << "Isi array kedua    : " << nilai[1] << endl;
    cout << "Isi array ketiga   : " << nilai[2] << endl;
    cout << "Isi array keempat  : " << nilai[3] << endl;
    cout << "Isi array kelima   : " << nilai[4] << endl;

    return 0;

}
```
Kode di atas menginisialisasi dan mencetak array yang disebut "nilai", bertipe data integer dengan lima elemen. Value setiap elemen ditetapkan satu per satu menggunakan indeks array. "cout" digunakan untuk mencetak setiap elemen array. "nilai[0] = 23", artinya memberikan nilai 23 ke elemen pertama array. Begitu juga seterusnya. Setelah pengguna mengisikan semua nilai array, program akan menampilkannya dengan fungsi cout. Mencetak nilai elemen pertama array dengan string "Isi array pertama : ", dan seterusnya sampai elemen kelima.

## Unguided 

### 1. Buatlah program menggunakan  tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif! 

```C++
#include <iostream>
using namespace std;

const float pi = 3.14;

// Fungsi Menghitung Volume Tabung
float hitungVTabung(float radius, float tinggi){
    return (pi * radius * radius * tinggi);
}

// Fungsi Menghitung Luas Permukaan Tabung
float hitungLTabung(float radius, float tinggi){
    return (2 * pi * radius * (radius + tinggi));
}

// Main Program
int main(){
    int Menu;
    float radius, tinggi;

    cout << "Pilihan Menu:\n";
    cout << "1. Hitung Volume Tabung\n";
    cout << "2. Hitung Luas Permukaan Tabung\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> Menu;

    switch(Menu){
        case 1:
            cout << "Masukkan panjang r: ";
            cin >> radius;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Volume tabung = " << hitungVTabung(radius, tinggi) << endl;
            break;
        case 2:
            cout << "Masukkan panjang r: ";
            cin >> radius;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Luas permukaan tabung = "<< hitungLTabung(radius, tinggi) << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}
```
#### Output:
![Screenshot 2024-03-21 210816](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/6b6d5578-f23c-46c8-bc21-a526a863af87)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![Screenshot 2024-03-21 211243](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/7739ec12-a9ab-4bc9-ab22-d211cfebb30f)

![Screenshot 2024-03-21 230532](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/d7193b99-0d04-4f1f-883f-2ff9d92319dc)

#### Penjelasan:
Kode tersebut mendefinisikan program untuk menghitung volume dan luas permukaan tabung berdasarkan inputan dari pengguna. Program ini menggunakan dua fungsi, "hitungVTabung" untuk menghitung volume tabung dan "hitungLTabung" untuk menghitung luas permukaan tabung. Main function dapat menampilkan menu kepada pengguna, menerima inputan, dan memanggil fungsi yang sesuai berdasarkan pilihan mereka. 
Program tersebut mendeklarasikan variabel const pi dengan nilai 3.14. Fungsi "hitungVTabung" mengambil dua argumen, radius (jari-jari) dan tinggi, serta mengembailkan nilai float yang mewakili rumus volume tabung (pi * radius * radius * tinggi). Fungsi "hitungLTabung" menggunakan dua argumen, radius (jari-jari) dan tinggi, serta mengembalikan nilai float yang mewakili rumus luas permukaan tabung (2 * pi * radius * (radius + tinggi)). Switch(Menu) memungkinkan pengguna untuk memilih menu hitung volume atau luas. Blok kode case akan berjalan apabila pengguna memilih salah satu opsi menu.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
#include <string>
using namespace std;

//Class standar yang belum public access
class Naspad{
    string nama;
    string lokasi;
    int price;
};

//Class yang sudah public access
class Wr_Naspad1{
public:
    string nama;
    string lokasi;
    int price;
};

struct Wr_Naspad2{
public:
    string nama;
    string lokasi;
    int price;
};

int main(){
    //Merepresentasikan warung naspad 1 dan warung naspad 2
    Wr_Naspad1 naspad1;
    Wr_Naspad2 naspad2;

    //Mengisi nilai ke struct warung naspad 1
    naspad1.nama = "Pagi Sore";
    naspad1.lokasi = "Jl. Pramuka";
    naspad1.price = 11000;

    //Mencetak isi warung naspad 1
    cout << "=== Warung Nasi Padang 1 ==="
         << "\nNama Warung: " << naspad1.nama
         << "\nLokasi: " << naspad1.lokasi
         << "\nHarga: " << naspad1.price << endl;

    //Mengisi nilai ke struct warung naspad 2
    naspad2.nama = "Salero Bunda";
    naspad2.lokasi = "Berkoh";
    naspad2.price = 10000;

    //Mencetak isi struct warung naspad 2
    cout << "\n=== Warung Nasi Padang 2 ==="
         << "\nNama Warung: " << naspad2.nama
         << "\nLokasi: " << naspad2.lokasi
         << "\nHarga: " << naspad2.price << endl;
         
    return 0;
}
```

#### Output:
![Screenshot 2024-03-21 212702](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/dedc655d-36ec-4399-b33d-0f1832f6066a)

#### Full code Screenshot:
![Screenshot 2024-03-21 212728](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/aa09b6d9-f1d7-49f7-a1e5-ad1bab77d75e)

![Screenshot 2024-03-21 212759](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/ada2f04b-e74f-4863-abf8-51f47f5b4ff8)

![Screenshot 2024-03-21 230833](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/ef625212-a6ab-4c04-984a-1a161aeececa)

#### Penjelasan:
Kode di atas menunjukkan perbedaan antara class dengan private access dan class dengan public access, serta struct dengan public access. Kode tersebut mendefinisikan dua class, yaitu "Naspad" dan "Wr_Naspad1", serta struct "Wr_Naspad2" yang semuanya mewakili warung yang menjual nasi padang. Class "Naspad" semua anggotanya dinyatakan sebagai private, sedangkan class "Wr_Naspad1" dan struct "Wr_Naspad2" semua anggotanya dinyatakan sebagai public.
Class "Naspad", class "Wr_Naspad1", dan struct "Wr_Naspad2" berisi nama (string), lokasi (string), dan harga (integer). Program akan mencetak dengan syntax cout.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map. 

```C++
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Mendeklarasikan map 'album' dengan key bertipe data integer dan value bertipe data string
    map<int, string> album;

    // Mengisi map 'album musik' dengan data judul album pertama sampai terbaru
    album[0] = "Taylor Swift";
    album[1] = "Fearless";
    album[2] = "Speak Now";
    album[3] = "Red";
    album[4] = "1989";
    album[5] = "Reputation";
    album[6] = "Lover";
    album[7] = "Folklore";
    album[8] = "Evermore";
    album[9] = "Midnights";

    //// Mencetak judul album untuk setiap key dalam map 'album'
    cout << "=== Album-Album Taylor Swift ===" << endl;
    cout << "Album ke-1: " << album[0] << endl;
    cout << "Album ke-2: " << album[1] << endl;
    cout << "Album ke-3: " << album[2] << endl;
    cout << "Album ke-4: " << album[3] << endl;
    cout << "Album ke-5: " << album[4] << endl;
    cout << "Album ke-6: " << album[5] << endl;
    cout << "Album ke-7: " << album[6] << endl;
    cout << "Album ke-8: " << album[7] << endl;
    cout << "Album ke-9: " << album[8] << endl;
    cout << "Album ke-10: " << album[9] << endl;

    return 0;
}
```

#### Output:
![Screenshot 2024-03-21 213506](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/28c9137f-41be-45fb-b9e4-ad9479b13c83)

#### Full code Screenshot:
![Screenshot 2024-03-21 213613](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/9f39dc95-603b-4b42-8719-78fdf6ad8364)

![Screenshot 2024-03-21 231009](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/b3c212f0-e795-4ad9-a52c-8e0f9c7c5621)

#### Penjelasan:
Kode tersebut menunjukkan penggunaan map dari library C++. Map dapat menyimpan elemen sebagai kumpulan pasangan key-values. Kode tersebut mendefinisikan map bernama "album" dengan key integer dan value bertipe string. Map album menyimpan judul-judul album Taylor Swift, dengan key mewakili nomor album dan value mewakili nama album. 
Output akan ditampilkan dengan syntax cout.

## Kesimpulan
Dapat diambil kesimpulan bahwa tipe data adalah klasifikasi data yang memberi tahu kompilator atau penerjemah bagaimana pemrogram ingin menggunakan data tersebut. Terdapat tipe data primitif, abstrak, dan juga koleksi. Tipe data yang paling umum digunakan adalah integer, float, char, dan boolean.

## Referensi
[1] Shaffer, C. A. (2011). Data Structures & Algorithm Analysis in C++ (edisi ke-3). Mineola, New York: Dover. 1.2.
[2] ab Khurana, Rohit. Struktur Data dan File (Untuk GTU), Edisi ke-2 . Rumah Penerbitan Vikas. P. 2.
[3] Barbara Liskov, Programming with Abstract Data Types, in Proceedings of the ACM SIGPLAN Symposium on Very High Level Languages, pp. 50--59, 1974, Santa Monica, California