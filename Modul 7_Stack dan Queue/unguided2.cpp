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
        cout << "\n1. Tambah Antrian" << endl;
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
                cout << " " << endl;
                cout << "Nama   : Aprianti Ika Larasati" << endl;
                cout << "NIM    : 2311110023" << endl;
                cout << " " << endl;
                cout << " " << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }
    return 0;
}