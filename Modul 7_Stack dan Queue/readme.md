# <h1 align="center">Laporan Praktikum Modul Stack dan Queue</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
Dalam ilmu komputer, 

### 1. Topik


## Guided 

### 1. Blabla

```C++

```
Kode di atas menggunakan algortima 

### 2. Blabla
```C++

```


## Unguided 

### 1.  Soal

```C++
#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;
char stack[MAX_SIZE];
int top = -1;

void push(char data) { // untuk menambahkan elemen stack
    if (top == MAX_SIZE - 1) {
        cout << "Stack penuh!" << endl;
    } else {
        stack[++top] = data;
    }
}

char pop() { // untuk menghapus elemen stack
    if (top == -1) {
        cout << "Stack kosong!" << endl;
        return '\0';
    } else {
        return stack[top--];
    }
}

bool isPalindrom(string word) { // fungsi untuk mengetahui apakah kata yang diinput palindrom atau tidak
    for (int i = 0; i < word.length(); i++) {
        push(word[i]);
    }

    for (int i = 0; i < word.length(); i++) {
        if (word[i] != pop()) {
            return false;
        }
    }

    return true;
}

int main() {
    string word;
    cout << "Masukkan kata: ";
    cin >> word;

    if (isPalindrom(word)) {
        cout << "Kata tersebut adalah palindrom" << endl;
    } else {
        cout << "Kata tersebut bukan palindrom" << endl;
    }

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/23a5757a-5d2f-426b-9c82-d6030fbc0d66)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/d68611ef-69cb-4514-83b1-0a232f35cd46)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/658ef156-ae88-4d45-a76e-94af8fec642b)

#### Penjelasan:
Program di ata adalah program untuk mengetahui suatu kata adalah palindrom atau bukan. Palindrom adalah kata yang dibaca dari depan dan belakang sama. Cara kerja program di atas, yaitu yang pertama membuat sebuah stack menggunakan array `stack` dengan ukuran `MAX_SIZE`. Kemudian, membuat dua function, `push` dan `pop`, untuk menambahkan dan menghapus elemen dari stack. Function `isPalindrome` adalah function utama yang akan menentukan apakah kata yang diinputkan adalah palindrom atau tidak. Function ini akan menambahkan setiap karakter dari kata yang diinputkan ke dalam stack menggunakan function `push`. Setelah itu, function `isPalindrome` akan menghapus setiap karakter dari stack menggunakan function `pop` dan membandingkannya dengan karakter yang sama dari kata yang diinputkan. Jika semua karakter cocok, maka function `isPalindrome` akan mengembalikan nilai `true`, yang berarti kata tersebut adalah palindrom. Jika ada karakter yang tidak cocok, maka function `isPalindrome` akan mengembalikan nilai `false`, yang berarti kata tersebut bukan palindrom.

Misalnya, kita inputkan kata "katak". Function `isPalindrome` akan menambahkan setiap karakter dari kata "katak" ke dalam stack, seperti ini: k-a-t-a-k. Kemudian, function `isPalindrome` akan menghapus setiap karakter dari stack dan membandingkannya dengan karakter yang sama dari kata "katak". Hasilnya adalah k-a-t-a-k sama dengan k-a-t-a-k, maka function `isPalindrome` akan mengembalikan nilai `true`, yang berarti kata "katak" adalah palindrom.

### 2. Soal

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak. karena queue maksimal 5 elemen
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data; // data paling baru akan menjadi tail
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl; // jika kosong makan data tdk bisa diambil
    } else {
        for (int i = 0; i < back; i++) { // mengambil data dengan for loop
            queueTeller[i] = queueTeller[i + 1]; // akan berulagan sampai back = 1
        }
        back--; // dikremen karena diambil data dari belakang
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl; //jika kosong, tdk ada data yang bisa dihapus
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl; // menampilkan data dengan numbering
        } else {
            cout << i + 1 << ". (kosong)" << endl; // jika kosong, maka tampilannya list kosong
        }
    }
}

int main() {
    int pilihan;
    string nama;

    while (true){
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Hapus Antrian" << endl;
        cout << "3. Jumlah Antrian" << endl;
        cout << "4. Lihat Antrian" << endl;
        cout << "5. Bersihkan Antrian" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama: ";
                cin >> nama;
                enqueueAntrian(nama);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 4:
                viewQueue();break;
            case 5:
                clearQueue();
                break;
            case 6:
                cout << "Terima kasih <3." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/b757f630-5a4f-4f8f-9635-bc4267c505da)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/7bf508ae-2918-449a-b85d-77c9e87183cf)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/11c2e985-7af5-48c6-9e74-d77ea2fb4ed3)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/a8c046eb-3d8f-4eba-bca1-c970efb07408)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/236a6ef5-c442-48f7-9bdd-b4a0c89a2b81)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/3509468e-3fb5-4a7d-a6df-078839da4748)

#### Penjelasan:
Program di atas merupakan program queue dengan maksimal 5 elemen yang dapat digunakan untuk melakukan operasi-operasi seperti menambah, mengurangi, menghitung jumlah, melihat isi, dan membersihkan queue. 

### 3. Soal
```C++

```

#### Output:

#### Full Code Screenshot:

#### Penjelasan:

## Kesimpulan
Algoritma 

## Referensi
[1] M.S. Garai Canaan.C and M. Daya. Popular sorting algorithms. World Applied Programming, 1:62–71, April 2011.

[2] A. Karunanithi, “A Survey, Discussion and Comparison of Sorting Algorithms,” Umeå University, 2014.