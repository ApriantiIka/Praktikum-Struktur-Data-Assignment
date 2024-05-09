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

    cout << " " << endl;
    cout << "\nNama   : Aprianti Ika Larasati" << endl;
    cout << "NIM    : 2311110023" << endl;

    return 0;
}