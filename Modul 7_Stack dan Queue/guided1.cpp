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