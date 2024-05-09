# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
Dalam ilmu komputer, 

### 1. Topik


## Guided 

### 1. Latihan Single Linked List

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    // hanya ada 2 komponen: data, pointer
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){     // pengecekan, apakah suatu head itu kosong atau tidak
    if (head == NULL)
        return true;
    else
        return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru; // jika linked list belom dibuat, head=baru
        tail->next = NULL;
    }
    else{
        baru->next = head; 
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung; // pointer hitung
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){  // linked list dimulai dari 1
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu; // jika posisi ditengah, dia akan membuat node baru
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){ // head akan dipindah ke next verteks
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() { // tail yang bagian belakang akan pindah ke sebelumnya
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next; 
            }
            tail = bantu; // pointer tail akan berganti di bantu
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){ // ada linked list
        head->data = data; // yang diubah bagian head
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data; // yang diubah bagian tail
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```
Program di atas merupakan implementasi single linked list. Program tersebut berfungsi untuk menginisialisasi list, memeriksa apakah list tersebut kosong atau tidak, menyisipkan/insert elemen dari awal, akhir, dan tengah list, memperbarui/update elemen di awal, akhir, dan tengah list, hapus list, serta menampilkan list.

Program ini menginisialisasi linked list dengan mengatur head dan tail pointer ke NULL. Terdapat 3 insert function, yaitu `insertDepan` (insert di awal), `insertBelakang` (insert di akhir), dan `insertTengah` (insert di posisi tertentu). Setiap function membuat node baru dan memperbarui head dan tail pointer yang sesuai. Pada program ini terdapat 3 function hapus, yaitu `hapusDepan` (hapus dari awal), `hapusBelakang` (hapus dari akhir), dan `hapusTengah` (hapus dari posisi tertentu). etiap function memperbarui head dan tail pointer yang sesuai dan menghapus node. Terdapat 3 function update, yaitu `ubahDepan` (update dari awal), `ubahBelakang` (update dari akhir), dan `ubahTengah` (update dari posisi tertentu). Setiap function memperbarui data node pada posisi yang ditentukan. Program ini juga menyediakan function `clearList` yang menghapus semua node dalam list dan mengatur head dan tail pointer ke NULL. Terdapat function `tampil` yang akan menampilkan elemen pada list.

### 2. Latihan Double Linked List

```C++
#include <iostream>
using namespace std;

// DOUBLE LINKED LIST
class Node {
    public:int data;
    Node* prev; // POINTER PREVIOUS
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) { // TAMBAH DEPAN
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() { // TAMBAH BELAKANG
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) { // UPDATE DEPAN
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() { // HAPUS
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) { 
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        // PROGRAM MENU
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
Program di atas mengimplementasikan struktur data double linked list yang memungkinkan user untuk menambahkan, menghapus, dan mengupdate data dalam list.

`class Node` digunakan untuk mendefinisikan node dalam double linked list. Node ini memiliki tiga komponen, yaitu:
- `data`, yaitu untuk menyimpan nilai dalam node
- `prev`, yaitu pointer untuk menunjuk ke node sebelumnya
- `next`, yaitu pointer untuk menunjuk ke node berikutnya
`class DoublyLinkedList` digunakan untuk mengelola double linked list. Class ini memiliki dua pointer, yaitu `head` dan `tail` yang menunjuk ke node pertama dna terakhir dalam list.

`void push()` digunakan untuk menambahkan node baru di awal list. Node baru dibuat dengan menggunakan operator new, kemudian data dan pointer prev dan next diisi dengan nilai yang diberikan. Jika list kosong, maka head dan tail menunjuk ke node baru. Jika list tidak kosong, maka pointer prev dari node baru menunjuk ke node sebelumnya, dan pointer next dari node sebelumnya menunjuk ke node baru.

`void pop()` digunakan untuk menghapus node pertama dalam list. Jika list kosong, maka tidak ada yang dihapus. Jika list tidak kosong, maka pointer next dari node pertama menunjuk ke node berikutnya, dan pointer prev dari node berikutnya menunjuk ke NULL. Node pertama kemudian dihapus menggunakan operator delete.

`void update()` digunakan untuk mengupdate nilai dalam node. Void ini mencari node yang memiliki nilai yang sama dengan `oldData`, kemudian mengupdate nilai tersebut dengan `newData`. Jika node tidak ditemukan, maka method ini mengembalikan nilai false.

`void deleteAll()` digunakan untuk menghapus semua node dalam list. Void ini mencari node pertama dalam list, kemudian menghapus node tersebut menggunakan operator delete. Proses ini diulang sampai semua node dalam list dihapus.

`void display()` digunakan untuk menampilkan nilai dalam list. Void ini mencari node pertama dalam list, kemudian menampilkan nilai dalam node tersebut menggunakan cout. Proses ini diulang sampai semua node dalam list ditampilkan.

Main program menggunakan menu untuk memilih operasi yang ingin dilakukan, yaitu:
- Add data: menambahkan node baru di awal list
- Delete data: menghapus node pertama dalam list
- Update data: mengupdate nilai dalam node
- Clear data: menghapus semua node dalam list
- Display data: menampilkan nilai dalam list
- Exit: keluar dari program
User dapat memilih operasi yang ingin dilakukan menggunakan menu, lalu program akan menjalankan operasi yang dipilih.

## Unguided 

### 1.  Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. 

```C++
#include <iostream>
#include <string>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    string nama;
    int usia;
    Node *next;
};
Node *head;
Node *tail;

//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool isEmpty(){     
    if (head == NULL)
        return true;
    else
        return false;
}

//Tambah Depan
void insertDepan(string nama, int usia){
    //Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru; 
        tail->next = NULL;
    }
    else{
        baru->next = head; 
        head = baru;
    }
}

//Tambah Belakang
void insertBelakang(string nama, int usia){
    //Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int hitungList(){
    Node *hitung; 
    hitung = head;
    int jumlah = 0;
    while( hitung!= NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

//Tambah Tengah
void insertTengah(string nama, int usia, int posisi){
    if( posisi < 1 || posisi > hitungList() ){  
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu; 
        baru = new Node();
        baru->nama = nama;
        baru->usia = usia;
        // tranversing
        bantu = head;
        int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){ 
        if (head->next!= NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}

//Hapus Belakang
void hapusBelakang() { 
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head!= tail){
            hapus = tail;
            bantu = head;
            while (bantu->next!= tail){
                bantu = bantu->next; 
            }
            tail = bantu; 
            tail->next = NULL;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}

//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}

//Ubah Depan
void ubahDepan(string nama, int usia){
    if (isEmpty() == false){ 
        head->nama = nama;
        head->usia = usia;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Tengah 
void ubahTengah(string nama, int usia, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->nama = nama;
            bantu->usia = usia;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(string nama, int usia){
    if (isEmpty() == false){
        tail->nama = nama;
        tail->usia = usia; // yang diubah bagian tail
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}

//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << "Nama: " << bantu->nama << ", Usia: " << bantu->usia << endl;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan("Laras", 19);
    tampil();
    insertBelakang("John", 19);
    tampil();
    insertBelakang("Jane", 20);
    tampil();
    insertBelakang("Michael", 18);
    tampil();
    insertBelakang("Yusuke", 19);
    tampil();
    insertBelakang("Akechi", 20);
    tampil();
    insertBelakang("Hoshino", 18);
    tampil();
    insertBelakang("Karin", 18);
    tampil();
    hapusTengah(6);
    tampil();
    insertTengah("Futaba", 18, 3);
    tampil();
    insertDepan("Igor", 20);
    tampil();
    ubahTengah("Reyn", 18, 6);
    tampil();
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/637b3259-6f32-40c8-aaff-8d1c3e17ab74)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/76e29d37-9859-42b4-b0eb-00aac3cf8585)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/4b46801f-a6e1-41fc-b7e4-f30957ebc274)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/19283907-bfa0-40ac-a21c-889ac578b18f)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/7c8362bd-a973-4ba7-bc88-1c9c328a2019)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/787fb5d6-74fb-41a7-8899-ebaebb0ef14e)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/b8736dad-8484-40b3-8c88-6fde63683e02)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/da4ff35f-6c24-465c-9619-e079026bc061)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/a1f244ab-5cfc-4e66-a2c8-cc1b026c4b0a)

#### Penjelasan:
Program tersebut menggunakan struktur data Single Linked List Non-Circular yang berarti setiap node hanya memiliki satu pointer yang menunjuk ke node berikutnya. Program ini mampu melakukan berbagai tugas, seperti insialiasi node; memeriksa apakah list kosong; menambah node di depan, belakang, atau tengah; menghitung jumlah node di list; menghapus node di depan, belakang, atau tengah list; mengubah posisi node di depan, belakang, atau tengah list; dan menampilkan isi list. 

Program ini memiliki beberapa function, yaitu:
- `init()`: untuk inisialisasi node head dan tail menjadi NULL.
- `isEmpty()`: untuk memeriksa apakah list kosong.
- `insertDepan()`: untuk menambah node di depan list.
- `insertBelakang()`: untuk menambah node di belakang list.
- `insertTengah()`: untuk menambah node di tengah list pada posisi tertentu.
- `hitungList()`: untuk menghitung jumlah node di list.
- `hapusDepan()`: untuk menghapus node di depan list.
- `hapusBelakang()`: untuk menghapus node di belakang list.
- `hapusTengah()`: untuk menghapus node di tengah list.
- `ubahDepan()`: Mengubah node di depan list.
- `ubahTengah()`: Mengubah node di tengah list pada posisi tertentu.
- `ubahBelakang()`: Mengubah node di belakang list.
- `tampil()`: Menampilkan isi list.
Program ini menggunakan pointer untuk menghubungkan node-node di dalam list. Setiap node memiliki dua komponen, yaitu nama dan usia serta satu pointer next yang menunjuk ke node berikutnya. Ketika user menambahkan node di depan list, user membuat node baru dan menghubungkannya dengan node head. Ketika user menambah node di belakang list, user juga membuat node baru dan menghubungkannya dengan node tail. Saat user menghapus node di depan list, user menghapus node head dan menghubungkan dengan nide berikutnya dengan node head. Sedangkan saat user menghapus node di belakang list, user menghapus node tail dan menghubungkan node sebelumnya dengan node tail. Ketika node diubah di depan list, user mengubah nilai `nama` dan `usia` dari node head. Sedangkan ketika node diubah di tengah list, user mengubah nilai `nama` dan `usia` dari node yang dipilih.

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.

```C++
#include <iostream>
#include <string>
using namespace std;

// DOUBLE LINKED LIST
class Node {
    public:
        string productName;
        int price;
        Node* prev; // POINTER PREVIOUS
        Node* next;
};
class DoublyLinkedList {
    public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
        }
        void push(string productName, int price) { // TAMBAH DEPAN
            Node* newNode = new Node;
            newNode->productName = productName;
            newNode->price = price;
            newNode->prev = nullptr;
            newNode->next = head;
            if (head!= nullptr) {
                head->prev = newNode;
            } else {
                tail = newNode;
            }
            head = newNode;
        }
        void append(string productName, int price) { // TAMBAH BELAKANG
            Node* newNode = new Node;
            newNode->productName = productName;
            newNode->price = price;
            newNode->prev = tail;
            newNode->next = nullptr;
            if (tail!= nullptr) {
                tail->next = newNode;
            } else {
                head = newNode;
            }
            tail = newNode;
        }
        void insertAtPosition(string productName, int price, int position) { // TAMBAH DATA URUTAN TERTENTU
            Node* newNode = new Node;
            newNode->productName = productName;
            newNode->price = price;
            if (position == 0) {
                push(productName, price);
                return;
            }
            Node* current = head;
            int currentPosition = 0;
            while (current!= nullptr) {
                if (currentPosition == position - 1) {
                    newNode->prev = current;
                    newNode->next = current->next;
                    if (current->next!= nullptr) {
                        current->next->prev = newNode;
                    } else {
                        tail = newNode;
                    }
                    current->next = newNode;
                    return;
                }
                current = current->next;
                currentPosition++;
            }
        }
        void deleteAtPosition(int position) { // HAPUS DATA URUTAN TERTENTU
            if (position == 0) {
                pop();
                return;
            }
            Node* current = head;
            int currentPosition = 0;
            while (current!= nullptr) {
                if (currentPosition == position - 1) {
                    Node* temp = current->next;
                    current->next = temp->next;
                    if (temp->next!= nullptr) {
                        temp->next->prev = current;
                    } else {
                        tail = current;
                    }
                    delete temp;
                    return;
                }
                current = current->next;
                currentPosition++;
            }
        }
        void pop() { // HAPUS DEPAN
            if (head == nullptr) {
                return;
            }
            Node* temp = head;
            head = head->next;
            if (head!= nullptr) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
            delete temp;
        }
        bool update(string oldProductName, string newProductName, int newPrice) { // UPDATE DEPAN
            Node* current = head;
            while (current!= nullptr) {
                if (current->productName == oldProductName) {
                    current->productName = newProductName;
                    current->price = newPrice;
                    return true;
                }
                current = current->next;
            }
            return false;
        }
        void deleteAll() { // HAPUS
            Node* current = head;
            while (current!= nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
            head = nullptr;
            tail = nullptr;
        }
        void display() {
            Node* current = head;
            while (current!= nullptr) { 
                cout << "Nama produk: " << current->productName << ", Harga: " << current->price << endl;
                current = current->next;
            }
        }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        // PROGRAM MENU
        cout << "\t Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        int choice;
        cout << "Masukkan Pilihan Anda: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string productName;
                int price;
                cout << "Masukkan nama produk: ";
                cin >> productName;
                cout << "Masukkan harga: ";
                cin >> price;
                list.append(productName, price);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                string oldProductName, newProductName;
                int newPrice;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> oldProductName;
                cout << "Masukkan nama produk yang baru: ";
                cin >> newProductName;
                cout << "Masukkan harga yang baru: ";
                cin >> newPrice;
                bool updated = list.update(oldProductName, newProductName, newPrice);
                if (!updated) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string productName;
                int price, position;
                cout << "Masukkan nama produk: ";
                cin >> productName;
                cout << "Masukkan harga: ";
                cin >> price;
                cout << "Masukkan posisi: ";
                cin >> position;
                list.insertAtPosition(productName, price, position);
                break;
            }
            case 5: {
                int position;
                cout << "Masukkan posisi: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            }
            case 6: {
                list.deleteAll();
                break;
            }
            case 7: {
                list.display();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
    }
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/317497f9-e62e-4fe1-b906-fda8a4cab84f)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/e5b051e6-beb3-4286-a2f1-415ac58aa6ea)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/bc13627a-306e-41b0-a743-0262b3e4440f)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/e094fa98-2b20-4600-a858-54d5e37c84f7)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/71563ea1-155b-416f-99b2-573d7fe6b0c5)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/70ab7ea6-2462-4b58-9e97-a49069e6c540)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/1f5961d6-d3fe-48f3-a044-754bd509531d)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/9d6cfb96-8817-41fc-aa1d-8e89e6daaf7d)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/307b3e13-b726-48ee-8b0f-04007486a51d)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/54049cdf-81f2-49cd-8fe5-886be1e51d51)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/cf201520-8fac-4960-8f19-6159bf5eb9d9)

#### Penjelasan:
Program ini menggunakan struktur data Double Linked List yang berarti setiap node memiliki 2 pointer, yaitu `prev` yang menunjuk ke node sebelumnya dan `next` yang menunjuk ke node berikutnya. Pada blok kode `Class Node` memiliki empat komponen, yaitu `productName`, `price`, `prev`, dan `next`. `productName` dan `price` adalah data yang disimpan di node, sedangkan `prev` dan `next` adalah pointer yang menunjuk ke node sebelumnya dan node berikutnya. Terdapat enam fungsi pada blok kode `Class DoublyLinkedList`, yaitu:
- `push()`: Menambah node di depan list.
- `append()`: Menambah node di belakang list.
- `insertAtPosition()`: Menambah node di urutan tertentu.
- `deleteAtPosition()`: Menghapus node di urutan tertentu.
- `pop()`: Menghapus node di depan list.
- `update()`: Mengupdate node di depan list.
- `deleteAll()`: Menghapus semua node di list.
- `display()`: Menampilkan isi list.
Main function membuat sebuah objek dari `Class DoublyLinkedList` dan menampilkan menu kepada user. Menu terdiri dari beberapa pilihan perintah yang memungkinan user untuk menambahkan data, menghapus data, memperbarui data, menambahkan data ke posisi tertentu, menghapus data berdasarkan posisi, menghapus semua data, menampilkan data, dan keluar dari program.

## Kesimpulan
Linked list adalah struktur data yang dinamis untuk menyimpan data secara berurutan. Berbeda dengan array yang memiliki ukuran tetap, linked list dapat bertambah dan berkurang sesuai kebutuhan. Struktur ini terdiri dari node, yang merupakan elemen penyusunnya, dan pointer, yang menghubungkan antar node.

Jenis-jenis linked list:
- Single linked list: Setiap node hanya memiliki satu pointer yang menunjuk ke node berikutnya.
- Double linked list: Setiap node memiliki dua pointer, yaitu pointer ke node sebelumnya dan pointer ke node berikutnya.
- Circular linked list: Node terakhir dalam linked list menunjuk kembali ke node pertama.
Operasi-operasi pada linked list:
- Insert: Memasukkan node baru ke dalam linked list.
- Delete: Menghapus node dari linked list.
- Search: Mencari node dengan nilai tertentu dalam linked list.

## Referensi
[1] M.S. Garai Canaan.C and M. Daya. Popular sorting algorithms. World Applied Programming, 1:62–71, April 2011.

[2] A. Karunanithi, “A Survey, Discussion and Comparison of Sorting Algorithms,” Umeå University, 2014.