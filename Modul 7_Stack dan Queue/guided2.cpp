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