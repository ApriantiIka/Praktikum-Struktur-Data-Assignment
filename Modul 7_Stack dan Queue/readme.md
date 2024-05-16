# <h1 align="center">Laporan Praktikum Modul Stack dan Queue</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
### 1. Stack
Stack, atau tumpukan dalam bahasa Indonesia, adalah struktur data linier yang mengikuti prinsip Last In First Out (LIFO) [1]. Artinya, elemen yang terakhir dimasukkan ke dalam stack akan menjadi elemen pertama yang dikeluarkan. Cara kerja stack dapat dianalogikan dengan tumpukan piring, di mana piring yang terakhir diletakkan di atas akan menjadi piring pertama yang diambil [1]

Stack memiliki beberapa karakteristik, yaitu [1]:
- Akses data hanya dapat dilakukan pada satu sisi, yaitu sisi atas stack (top).
- Operasi yang umum dilakukan pada stack adalah push (memasukkan elemen) dan pop (mengambil elemen).
- Stack bersifat LIFO, di mana elemen yang terakhir dimasukkan akan menjadi elemen pertama yang dikeluarkan.

Stack juga memiliki beberapa aplikasi dalam ilmu komputer, yaitu [1]:
- Menyimpan data sementara, seperti variabel lokal dalam program.
- Memproses ekspresi matematika, seperti kalkulator.
- Mengelola memori, seperti alokasi memori dinamis.
- Membuat undo/redo functionality, seperti pada aplikasi pengolah kata.

### 2. Queue
Queue, atau antrian dalam bahasa Indonesia, adalah struktur data linier yang mengikuti prinsip First In First Out (FIFO) [2]. Artinya, elemen yang pertama dimasukkan ke dalam queue akan menjadi elemen pertama yang dikeluarkan. Cara kerja queue dapat dianalogikan dengan antrian orang di kasir supermarket, di mana orang yang pertama datang akan menjadi orang pertama yang dilayani [2].

Queue memiliki beberapa karakteristik, yaitu [2]:
- Akses data hanya dapat dilakukan pada dua sisi, yaitu sisi depan queue (front) dan sisi belakang queue (rear).
- Operasi yang umum dilakukan pada queue adalah enqueue (memasukkan elemen) dan dequeue (mengambil elemen).
- Queue bersifat FIFO, di mana elemen yang pertama dimasukkan akan menjadi elemen pertama yang dikeluarkan.

Queue juga memiliki beberapa aplikasi dalam ilmu komputer, yaitu:
- Menyimpan data yang harus diproses secara berurutan, seperti antrian cetak printer [2].
- Menyimpan data sementara, seperti buffer data dalam jaringan komputer [3].
- Mengelola multitasking, seperti penjadwalan proses dalam sistem operasi [3].
- Membuat sistem simulasi, seperti simulasi antrian di bank atau restoran [2] [3].

## Guided 
### 1. Stack

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() { // true jika top = 0 atau stack masing kosong
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl; // jika full cout data telah penuh
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() { // menghapus data terats
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl; // jika stack kosong maka cout ini
    } else {
        arrayBuku[top - 1] = ""; // jika ada maka topnya berkurang
        top--;
    }
}

void peekArrayBuku(int posisi) { // melihat elemen pada array posisi tertentu
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) { // akan memasukkan data dari bawah
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top; // elemen paling atas adalah paling besar sehingga menujukkan jumlah elemen dalam stack
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) { // pengondisian jika posisi > top maka sout statement posisi melebihi data yang ada
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data; // data yang lama diganti dengan data yang baru
    }
}

void destroyArraybuku() { // menghapus semua isi stack
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) { // jika kosong ada statement "tidak ada data yang dicetak"
        cout << "Tidak ada data yang dicetak" << endl;
    } else { // jika ada, cout semua data dalam stack
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    // menambahkan data ke dalam stack
    pushArrayBuku("Kalkulus"); //karena yang pertama dimasukkan maka posisi yang paling bawah kalkulus
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku(); // mencetak stack
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl; // memeriksa apakah stack penuh atau tidak
    cout << "Apakah data stack kosong? " << isEmpty() << endl; // memeriksa apakah stack kosong atau tidak
    peekArrayBuku(2); // melihat buku ke 2
    popArrayBuku(); // menghapus buku paling atas
    cout << "Banyaknya data = " << countStack() << endl; // menghitung jumlah elemen di stack
    changeArrayBuku(2, "Bahasa Jerman"); // mengganti buku matdis menjadi buku bahasa jerman
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku(); // menghapus semua data
    cout << "Jumlah data setelah dihapus: " << top << endl; // memeriksa jumlah elemen stack setelah dihapus
    cetakArrayBuku(); // mencetak data stack setelah dihapus

    return 0;
}
```
Program di atas merupakan implementasi stack menggunakan array string. Stack adalah data structure LIFO (Last In First Out), yang artinya elemen yang dimasukkan terakhir adalah yang akan keluar pertama. Di dalam program ini, kapasitas stack hanya sampai 5 elemen. Terdapat beberapa function dalam program ini, yaitu:
- `bool isFull()`: untuk memeriksa apakah stack penuh atau tidak.
- `bool isEmpty()`: untuk memeriksa apakah stack kosong atau tidak.
- `void pushArrayBuku(string data)`: untuk menambahkan data ke stack. Function ini akan menambahkan data ke `arrayBuku[top]` dan kemudian menaikkan nilai top dengan 1.
- `void popArrayBuku()`: untuk mengambil data dari stack. Function ini akan mengurangi nilai top dengan 1 dan kemudian menghapus data dari `arrayBuku[top]`.
- `void peekArrayBuku(int posisi)`: untuk melihat data pada posisi tertentu di stack. Function ini akan mengurangi nilai top dengan posisi dan kemudian mencetak data dari `arrayBuku[top]`.
- `int countStack()`: untuk menghitung jumlah elemen di stack. 
- `void changeArrayBuku(int posisi, string data)`: untuk mengganti data pada posisi tertentu di stack. Fungsi ini akan mengurangi nilai top dengan posisi dan kemudian mengganti data dari `arrayBuku[top]` dengan data yang diberikan.
- `void destroyArraybuku()`: untuk menghapus semua elemen di stack.
- `void cetakArrayBuku()`: untuk mencetak semua elemen di stack. Fungsi ini akan mencetak semua elemen di `arrayBuku` mulai dari indeks top - 1 sampai 0.

### 2. Queue
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
    enqueueAntrian("Andi"); // indeks ke 0
    enqueueAntrian("Maya"); // nomor antrian setelah andi, atau no 2
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl; // melihat jumlah antrian
    dequeueAntrian(); // mengambil data pertama yaitu andi. maya jadi maju menjadi no 1
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue(); // menghapus semua data
    viewQueue(); // kosong karena data sdh dihapus
    cout << "Jumlah antrian = " << countQueue() << endl; // jml antrian = 0
    return 0;
}
```
Program di atas merupakan implementasi dari queue (antrian) menggunakan array string. Queue adalah data structure FIFO (First In First Out), yang artinya elemen yang dimasukkan pertama adalah yang akan keluar pertama. Di dalam program ini, kapasitas antrian hanya sampai 5 elemen. Terdapat beberapa function dalam program ini, yaitu:
- `bool isFull()`: untuk memeriksa apakah antrian penuh atau tidak.
- `bool isEmpty()`: untuk memeriksa apakah antrian kosong atau tidak.
- `void enqueueAntrian(string data)`: untuk menambahkan data ke antrian. Function akan menambahkan data ke `queueTeller[back]` dan kemudian menambahkan nilai back dengan 1.
- `void dequeueAntrian()`: untuk mengurangi antrian. Function akan mengurangi nilai back dengan 1 dan kemudian menggeser semua data di antrian ke indeks sebelumnya.
- `int countQueue()`: untuk menghitung jumlah elemen di antrian.
- `void clearQueue()`: untuk menghapus semua elemen di antrian. Fungsi ini akan membuat semua elemen di `queueTeller` menjadi string kosong dan mengatur nilai back dan front menjadi 0.
- `void viewQueue()`: untuk mencetak semua elemen dalam antrian.

## Unguided 

### 1.  Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

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

### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu.

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
Program di atas merupakan program queue (antrian) dengan maksimal 5 elemen yang dapat digunakan untuk melakukan operasi-operasi seperti menambah, mengurangi, menghitung jumlah, melihat isi, dan membersihkan queue. Program ini mendefinisikan beberapa function, yaitu:
- `bool isFull()`: untuk mengecek apakah antrian penuh atau tidak. Jika `back` sama dengan `maksimalQueue`, maka antrian penuh dan function ini akan mengembalikan nilai true, sebaliknya false.
- `bool isEmpty()`: untuk mengecek apakah antrian kosong atau tidak. Jika `back` nol, maka antrian kosong dan function ini akan mengembalikan nilai true, sebaliknya false.
- `void enqueueAntrian(string data)`: untuk menambahkan data ke antrian. Jika antrian penuh, maka akan ditampilkan pesan "Antrian penuh". Jika antrian kosong, maka data akan dimasukkan ke indeks ke-0 dan `front` serta `back` akan bertambah 1. Jika antrian sudah memiliki isi, maka data akan dimasukkan ke indeks `back` dan `back` akan bertambah 1.
- `void dequeueAntrian()`: untuk mengurangi antrian. Jika antrian kosong, maka akan ditampilkan pesan "Antrian kosong". Jika antrian tidak kosong, maka data akan diambil dari indeks ke-0 dan dihapus, lalu semua data yang tersisa akan dipindah ke indeks sebelumnya.
- `int countQueue()`: untuk menghitung jumlah data yang ada di antrian.
- `void clearQueue()`: untuk membersihkan semua data yang ada di antrian. Jika antrian kosong, maka akan ditampilkan pesan "Antrian kosong". Jika antrian tidak kosong, maka semua data akan dihapus dan `front` serta `back` akan dikembalikan ke 0.
- `void viewQueue()`: untuk melihat isi data yang ada di antrian.
Program ini juga menggunakan loop `while(true)` yang akan terus berjalan sampai user memilih untuk keluar dari program dengan memasukkan pilihan 6. Pada setiap loop, user akan diminta untuk memasukkan pilihan yang tersedia, lalu program akan menjalankan function-function yang sesuai. Jika pilihan tidak valid, maka akan ditampilkan pesan "Pilihan tidak valid. Silakan coba lagi.".

## Kesimpulan
Stack adalah struktur data linier yang mengikuti prinsip Last In First Out (LIFO) yang artinya, elemen yang terakhir dimasukkan akan menjadi elemen pertama yang dikeluarkan. Sedangkan queue adalah struktur data linier yang mengikuti prinsip First In First Out (FIFO) yang artinya, elemen yang pertama dimasukkan akan menjadi elemen pertama yang dikeluarkan. Stack dan queue merupakan struktur data yang penting dengan banyak kegunaan dalam ilmu komputer. Pemahaman tentang operasi-operasi dasar pada stack dan queue sangatlah penting bagi mahasiswa ilmu komputer untuk mempelajari algoritma dan struktur data yang lebih kompleks.

## Referensi
[1] A.D. Pratama, "Pemanfaatan Struktur Data Stack untuk Implementasi Sistem Undo/Redo pada Aplikasi Pengolah Kata," Jurnal Edukasi dan Teknologi Informasi, vol. 6, no. 2, pp. 217-224, 2020.

[2] R. Marta & R. D. Sari, "Implementasi Antrian Berprioritas pada Sistem Pendaftaran Pasien Rawat Jalan Menggunakan Algoritma Heap," Jurnal Teknologi Informasi dan Komputer, vol. 9, no. 2, pp. 117-124, 2021.

[3] A. Setiawan & S. Handayani, "Implementasi Algoritma Breadth-First Search (BFS) dan Depth-First Search (DFS) Menggunakan Struktur Data Queue dan Stack pada Game Maze," Jurnal Sains dan Teknologi Komputer, vpl. 9, no. 1, pp. 43-50, 2022.