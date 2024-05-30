# <h1 align="center">Laporan Praktikum Modul Rekursif & Hash Table</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
### 1. Rekursif
Rekursif adalah sebuah teknik pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan suatu masalah. Teknik ini sering digunakan untuk menyelesaikan masalah yang dapat dipecah menjadi sub-masalah yang lebih kecil dan mirip dengan masalah aslinya [1]. Secara sederhana, rekursif dapat dianalogikan dengan proses memasukkan boneka ke dalam boneka yang lebih besar. Boneka yang lebih kecil melambangkan sub-masalah, dan boneka yang lebih besar melambangkan masalah utama. Proses memasukkan boneka ini dilakukan secara berulang hingga semua boneka terisi.

Menurut Marcano et al., rekursif memiliki dua jenis utama, yaitu rekursif langsung dan rekursif tidak langsung [1].
- Rekursif Langsung: Pada rekursif langsung, fungsi memanggil dirinya sendiri secara langsung dalam definisinya. Contohnya, menghitung faktorial suatu bilangan.
- Rekursif Tidak Langsung: Pada rekursif tidak langsung, fungsi memanggil fungsi lain yang pada akhirnya akan memanggil fungsi awal tersebut. Contohnya, mencari elemen dalam sebuah daftar bertingkat.

Rekursif juga memiliki beberapa kelebihan dan kekurangan. Kelebihan dari rekursif adalah sebagai berikut [1].
- Mudah dipahami dan ditulis untuk beberapa masalah tertentu
- Membuat kode lebih ringkas dan elegan
- Sangat cocok untuk masalah yang dapat dibagi menjadi sub-masalah yang mirip 

Sedangkan kekurangan rekursif, yaitu:
- Dapat menyebabkan konsumsi memori yang besar jika tidak diimplementasikan dengan hati-hati
- Lebih lambat dibandingkan dengan metode iteratif untuk beberapa masalah
- Sulit untuk didebug jika terjadi kesalahan

### 2. Hash Table
Hash table, juga dikenal sebagai tabel hash, adalah struktur data yang menyimpan data dalam bentuk pasangan kunci-nilai (key-value pair). Key digunakan untuk mengidentifikasi nilai yang terkait dengannya. Hash table dirancang untuk mempercepat operasi pencarian, penambahan, dan penghapusan data. Menurut Cormen et al., hash table bekerja dengan menggunakan fungsi hash untuk memetakan kunci ke dalam array (tabel) dengan ukuran tetap. Fungsi hash ini menghasilkan indeks (hash value) dalam array berdasarkan nilai kunci. Nilai data kemudian disimpan di lokasi array yang sesuai dengan indeks tersebut [2].

Hash table menawarkan beberapa keuntungan dibandingkan struktur data lain, seperti array dan linked list dalam hal efisiensi pencarian. Dengan menggunakan fungsi hash yang baik, waktu rata-rata untuk menemukan nilai dalam hash table adalah O(1), yang berarti waktu pencarian tidak bergantung pada jumlah data yang disimpan dalam tabel.

Dalam hash table, terdapat operasi-operasi utama yang dapat dilakukan, yaitu sebagai berikut [2]:
1. Pencarian (Search)
Operasi search bertujuan untuk menemukan nilai yang terkait dengan kunci tertentu. Fungsi hash digunakan untuk menghitung indeks array, dan nilai data di lokasi array yang sesuai dengan indeks tersebut diperiksa untuk melihat apakah itu cocok dengan nilai yang dicari[2].
2. Penyisipan (Insertion)
Operasi insertion menambahkan pasangan key-value baru ke dalam hash table. Fungsi hash digunakan untuk menghitung indeks array, dan nilai data dan kunci baru disimpan di lokasi array yang sesuai dengan indeks tersebut. Jika lokasi tersebut sudah terisi, teknik yang disebut "collision resolution" digunakan untuk menemukan lokasi lain yang kosong [2].
3. Penghapusan (Deletion)
Operasi deletion menghilangkan pasangan key-value dari hash table. Fungsi hash digunakan untuk menghitung indeks array, dan nilai data dan kunci di lokasi array yang sesuai dengan indeks tersebut dihapus. Jika lokasi tersebut kosong, teknik "collision resolution" mungkin diperlukan untuk memperbarui indeks pasangan kunci-nilai lain [2].

Performa hash table dipengaruhi oleh faktor-faktor berikut ini:
- Fungsi Hash: Fungsi hash yang baik harus mendistribusikan kunci secara merata ke seluruh array dan meminimalkan terjadinya tabrakan [2].
- Ukuran Array: Ukuran array harus cukup besar untuk menampung semua data tanpa terlalu banyak tabrakan [2].
- Teknik Resolusi Tabrakan: Teknik resolusi tabrakan yang efisien harus digunakan untuk menangani tabrakan dan meminimalkan dampaknya pada waktu operasi [2].
- Load Factor: Load factor adalah rasio antara jumlah data yang disimpan dalam hash table dengan ukuran array. Semakin tinggi load factor, semakin besar kemungkinan terjadinya tabrakan dan semakin lambat kinerja hash table [1].

## Guided 

### 1. Rekursif Langsung (Direct Recursion)

```C++
// DIRECT RECURSION
#include<iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown (n-1);
}

int main() {
    cout << "Rekursif Langsung:";
    countdown(5); //5 merupakan inputnya
    cout << endl;
    return 0;
}
```
Kode program di atas berfungsi untuk melakukan hitung mundur dari sebuah angka yang diinputkan. Fungsi ini dinamakan `countdown()` dan menerima sebuah parameter bertipe data `int` yang disebut `n`. Dalam fungsi ini, kita melakukan pengecekan apakah `n` sama dengan `0`. Jika benar, maka fungsi ini akan segera kembali ke fungsi yang memanggilnya tanpa melakukan apa-apa lagi. Jika `n` tidak sama dengan `0`, maka fungsi ini akan mencetak nilai dari `n` ke layar, lalu memanggil fungsi `countdown()` sendiri dengan mengurangi nilai `n` sebanyak `1`. Hal ini disebut dengan rekursif langsung. Dalam fungsi `main()`, kita mencetak teks "Rekursif Langsung:", lalu memanggil fungsi `countdown()` dengan memasukkan nilai `5` sebagai argumen. Setelah fungsi `countdown()` selesai dijalankan, kita mencetak teks baris baru ke output dan kemudian kode program berakhir.

### 2. Rekursif Tidak Langsung (Indirect Recursion)
```C++
#include <iostream>
using namespace std;

void functionB (int n);

void functionA (int n) {
    if (n > 0) {
        cout << n << " ";
        functionB (n-1); // Panggilan rekursif tidak langsung
    }
}

void functionB (int n) {
    if (n > 0) {
        cout << n << " ";
        functionA (n/2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA (num);
    return 0;
}
```
Kode program di atas berfungsi untuk melakukan rekursif tidak langsung, yaitu sebuah fungsi memanggil fungsi lainnya yang juga memanggil fungsi pertama. Dalam kode program ini, terdapat dua fungsi yaitu `functionA` dan `functionB`. Fungsi `functionA` menerima sebuah parameter bertipe data `int` yang disebut `n`. Dalam fungsi ini, kita melakukan pengecekan apakah `n` lebih besar dari `0`. Jika benar, maka fungsi ini akan mencetak nilai dari `n` ke output, lalu memanggil fungsi `functionB` dengan mengurangi nilai `n` sebanyak `1`. Fungsi `functionB` juga menerima sebuah parameter bertipe data `int` yang disebut `n`. Dalam fungsi ini, kita melakukan pengecekan apakah `n` lebih besar dari `0`. Jika benar, maka fungsi ini akan mencetak nilai dari `n` ke output, lalu memanggil fungsi `functionA` dengan mengurangi nilai `n` sebanyak setengahnya (dengan menggunakan operator `/`).

Dalam fungsi `main()`, kita mendefinisikan sebuah variabel `num` dengan nilai `5`. Kemudian, kita mencetak teks "Rekursif Tidak Langsung: ", lalu memanggil fungsi `functionA` dengan memasukkan nilai `num` sebagai argumen.

### 3. Hash Table
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;
    
    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0; 
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
    }
    void insert(string name, string phone_number) { 
        int hash_val = hashFunc(name);
        
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }
    
    void remove(string name) {
        int hash_val = hashFunc(name);
        
        for (auto it = table[hash_val].begin(); it !=
table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
    }
    return "";
    }
    
    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
                for (auto pair : table[i]) {
                    if(pair != nullptr){
                        cout << "[" << pair->name << ", " << pair->phone_number << "]";
                    }
                }
                cout << endl;
        }
    }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") << endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") << endl;
cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") << endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : " <<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
```
Kode programm di atas adalah implementasi hash table sederhana dengan menggunakan kontainer vektor dan class `HashNode`. Class `HashNode` memiliki dua atribut, yaitu `name` dan `phone_number`, yang digunakan untuk menyimpan nama dan nomor telepon. Class `HashMap` memiliki hash table dengan ukuran `TABLE_SIZE` dan empat fungsi, yaitu `hashFunc()`, `insert()`, `remove()`, dan `searchByName()`.

Fungsi `hashFunc()` digunakan untuk menghitung nilai hash dari sebuah string. Fungsi ini melakukan penjumlahan dari setiap karakter dari string tersebut, lalu mengambil sisa bagi dari hasil penjumlahan tersebut dengan `TABLE_SIZE` menggunakan operator modulus `%`.

Fungsi `insert()` digunakan untuk menambahkan data ke dalam hash table. Fungsi ini menerima dua parameter, yaitu `name` dan `phone_number`, dan melakukan pengecekan apakah data dengan nama yang sama sudah ada di dalam hash table. Jika sudah, maka nilai `phone_number` akan diupdate. Jika belum, maka data baru akan ditambahkan ke dalam hash table.

Fungsi `remove()` digunakan untuk menghapus data dari dalam hash table. Fungsi ini menerima parameter `name` dan melakukan pengecekan apakah data dengan nama yang sama ada di dalam hash table. Jika ada, maka data karyawan tersebut akan dihapus dari hash table.

Fungsi `searchByName()` digunakan untuk mencari data karyawan berdasarkan nama dari dalam hash table. Fungsi ini menerima parameter `name` dan melakukan pengecekan apakah data dengan nama yang sama ada di dalam hash table. Jika ada, maka nilai `phone_number` dari data karyawan tersebut akan dikembalikan.

Dalam fungsi `main()`, kita membuat objek `employee_map` dari class `HashMap`. Kemudian, kita menambahkan beberapa data ke dalam hash table menggunakan fungsi `insert()`. Setelah itu, kita mencetak beberapa data karyawan menggunakan fungsi `searchByName()`. Kemudian, kita menghapus data karyawan dengan nama "Mistah" menggunakan fungsi `remove()`. Terakhir, kita mencetak seluruh isi dari hash table menggunakan fungsi `print()`.

## Unguided 

### 1.  Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

```C++
#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int num;
    cout << "Masukkan angka: ";
    cin >> num;
    cout << "Nilai faktorial dari " << num << " adalah " << factorial(num) << endl;
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/b76961da-dfa8-40f2-ab9e-abe65d8d8ba5)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/912ea520-e07b-4e2c-ade4-9fb3a9374f71)

#### Penjelasan:
Kode program di atas berfungsi untuk menghitung faktorial dari suatu bilangan bulat positif dengan menggunakan direct recursion. Kode program ini memiliki dua fungsi, yaitu `main()` dan `factorial()`. Fungsi `main()` digunakan untuk meminta inputan bilangan bulat positif dari user dan menampilkan hasil perhitungan faktorial dari bilangan tersebut. Fungsi `factorial()` digunakan untuk melakukan perhitungan faktorial dari sebuah bilangan bulat positif.

Fungsi `factorial()` menerima parameter `n` dan melakukan pengecekan apakah `n` sama dengan `0`. Jika benar, maka fungsi ini akan mengembalikan nilai `1` sebagai hasil perhitungan faktorial dari `0`. Jika tidak, maka fungsi ini akan melakukan perhitungan faktorial dari `n` dengan cara mengalikan `n` dengan hasil perhitungan faktorial dari `n-1` (rekursif langsung). Sedangkan dalam fungsi `main()`, kita meminta inputan bilangan bulat positif dari user menggunakan `cin >> num`. Kemudian, kita memanggil fungsi `factorial()` dengan memasukkan `num` sebagai argumen dan menampilkan hasil perhitungan faktorial dari `num` menggunakan `cout`.

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

```C++
#include <iostream>
using namespace std;

int factorial(int n);
int helper(int n, int simpenan);

int main() {
    int num;
    cout << "Masukkan angka: ";
    cin >> num;
    cout << "Nilai faktorial dari " << num << " adalah " << factorial(num) << endl;
    return 0;
}

int factorial(int n) {
    return helper(n, 1);
}

int helper(int n, int simpenan) {
    if (n == 0) {
        return simpenan;
    } else {
        return helper(n-1, n * simpenan);
    }
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/6ae5b3a5-18dc-4b61-9d52-d0809fca13de)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/5ab9d700-6d95-48c5-b533-2cbfd60159d4)

#### Penjelasan:
Kode ini memiliki tiga fungsi, yaitu `main()`, `factorial()`, dan `helper()`. Fungsi `main()` digunakan untuk meminta inputan bilangan bulat positif dari user dan menampilkan hasil perhitungan faktorial dari bilangan tersebut. Fungsi `factorial()` digunakan sebagai antarmuka (wrapper function) untuk memanggil fungsi `helper()` dengan argumen yang tepat. Fungsi `helper()` digunakan untuk melakukan perhitungan faktorial dari sebuah bilangan bulat positif.

Fungsi `helper()` menerima dua parameter, yaitu `n` dan `simpenan`. Parameter `n` digunakan untuk menyimpan nilai bilangan bulat positif yang akan dihitung faktorialnya. Parameter `simpenan` digunakan untuk menyimpan hasil perhitungan faktorial yang sedang berjalan.

Fungsi `helper()` melakukan pengecekan apakah `n` sama dengan `0`. Jika benar, maka fungsi ini akan mengembalikan nilai `simpenan` sebagai hasil perhitungan faktorial dari `0`. Jika tidak, maka fungsi ini akan memanggil dirinya sendiri dengan argumen `n-1` dan `n * simpenan` (rekursif tidak langsung).

Fungsi `factorial()` digunakan sebagai antarmuka (wrapper function) untuk memanggil fungsi `helper()` dengan argumen `n` dan `1` sebagai `simpenan` awal.

Dalam fungsi `main()`, kita meminta inputan bilangan bulat positif dari user menggunakan `cin >> num`. Kemudian, kita memanggil fungsi `factorial()` dengan memasukkan `num` sebagai argumen dan menampilkan hasil perhitungan faktorial dari `num` menggunakan `cout`.

### 3.  Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. 
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mahasiswa {
public:
    string NIM;
    int nilai;

    Mahasiswa(string NIM, int nilai) {
        this->NIM = NIM;
        this->nilai = nilai;
    }
};

class DataMahasiswa {
private:
    vector<Mahasiswa> data;
public:
    void insertData(string NIM, int nilai) {
        Mahasiswa mahasiswa(NIM, nilai);
        data.push_back(mahasiswa);
    }

    void removeData(string NIM) {
        for (auto it = data.begin(); it!= data.end(); it++) {
            if (it->NIM == NIM) {
                data.erase(it);
                return;
            }
        }
    }

    Mahasiswa* searchData(string NIM) {
        for (auto& mahasiswa : data) {
            if (mahasiswa.NIM == NIM) {
                return &mahasiswa;
            }
        }
        return nullptr;
    }

    vector<Mahasiswa> searchByNilai(int min, int max) {
        vector<Mahasiswa> hasil;
        for (auto& mahasiswa : data) {
            if (mahasiswa.nilai >= min && mahasiswa.nilai <= max) {
                hasil.push_back(mahasiswa);
            }
        }
        return hasil;
    }

    void printData() {
        for (auto& mahasiswa : data) {
            cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
        }
    }
};

int main() {
    DataMahasiswa dataMahasiswa;
    int pilihan;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Insert Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Cari Data" << endl;
        cout << "4. Cari Data Berdasarkan Rentang Nilai" << endl;
        cout << "5. Print Data" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string NIM;
                int nilai;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan Nilai: ";
                cin >> nilai;
                dataMahasiswa.insertData(NIM, nilai);
                break;
            }
            case 2: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                dataMahasiswa.removeData(NIM);
                break;
            }
            case 3: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                Mahasiswa* mahasiswa = dataMahasiswa.searchData(NIM);
                if (mahasiswa!= nullptr) {
                    cout << "NIM: " << mahasiswa->NIM << ", Nilai: " << mahasiswa->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                int min, max;
                cout << "Masukkan Nilai Minimum: ";
                cin >> min;
                cout << "Masukkan Nilai Maksimum: ";
                cin >> max;
                vector<Mahasiswa> hasil = dataMahasiswa.searchByNilai(min, max);
                for (auto& mahasiswa : hasil) {
                    cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
                }
                break;
            }
            case 5: {
                dataMahasiswa.printData();
                break;
            }
            case 6: {
                cout << "Terima kasih <3";
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid";
                break;
            }
        }
    }

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/3827fe13-39e0-4dcc-bd68-671bb415f962)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/b70a125c-a4e3-4af3-a96c-533e7b106ae9)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/229d2fb1-718e-401c-9ffa-49a1ca4d33a1)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/7b631f03-10ac-45b0-8c6d-29f963a6c29e)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/50d6e512-4ff0-4356-8ab7-962603840a1b)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/3b34ba69-1c37-4d2c-9d0a-31eb5353643c)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/1d46cff2-ecd2-4537-9be7-77275979fda7)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/3784e1d7-b08b-4f98-9cdc-2321fcc81ce0)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/c5591f80-0d0a-48db-be4e-5c8855040acd)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/a00cf363-b7ca-4a63-b21f-d224a518f9f6)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/10a1d66c-4f21-411c-8be4-b225b11ea208)

#### Penjelasan:
Program ini memiliki dua kelas, yaitu `Mahasiswa` dan `DataMahasiswa`. Class `Mahasiswa` digunakan untuk menyimpan data mahasiswa dengan NIM dan nilai, sedangkan class `DataMahasiswa` digunakan untuk mengelola data mahasiswa, seperti menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai, dan mencetak data. Class `DataMahasiswa` memiliki beberapa fungsi, yaitu:
- `insertData(string NIM, int nilai)`: Fungsi ini digunakan untuk menambahkan data baru ke dalam vektor `data`.
- `removeData(string NIM)`: Fungsi ini digunakan untuk menghapus data dari vektor `data` berdasarkan NIM.
- `serachData(string NIM)`: Fungsi ini digunakan untuk mencari data dari vektor `data` berdasarkan NIM. Fungsi ini akan mengembalikan pointer ke data yang ditemukan atau `nullptr` jika data tidak ditemukan.
- `cariDataRentangNilai(int min, int max)`: Fungsi ini digunakan untuk mencari data dari vektor `data` berdasarkan rentang nilai. Fungsi ini akan mengembalikan vektor dari data yang ditemukan.
- `printData()`: Fungsi ini digunakan untuk mencetak semua data yang ada dalam vektor `data`.
Dalam fungsi `main()`, kita membuat objek `DataMahasiswa` dan memulai looping menu. Looping menu akan terus berjalan sampai user memilih untuk keluar. Dalam looping menu, kita akan mengambil input pilihan menu dari user dan akan mengeksekusi fungsi yang sesuai dengan pilihan tersebut. Jika user memilih menu insert data, kita akan meminta input NIM dan nilai dari user dan akan menambahkan data tersebut ke dalam vektor `data`. Jika user memilih menu hapus data, kita akan meminta input NIM dari user dan akan menghapus data tersebut dari vektor `data`. Jika user memilih menu cari data, kita akan meminta input NIM dari user dan akan mencari data tersebut dari vektor `data`. Jika data ditemukan, kita akan mencetak data tersebut. Jika data tidak ditemukan, kita akan mencetak pesan kesalahan. Jika user memilih menu cari data berdasarkan rentang nilai, kita akan meminta input nilai minimum dan nilai maksimum dari user dan akan mencari data dari vektor `data` berdasarkan rentang nilai tersebut. Kita akan mencetak semua data yang ditemukan. Jika user memilih menu print data, kita akan mencetak semua data yang ada dalam vektor `data`. Jika user memilih menu keluar, kita akan keluar dari looping menu dan program akan berhenti.

## Kesimpulan
Rekursif adalah sebuah teknik pemrograman di mana sebuah fungsi memanggil dirinya sendiri. Meskipun rekursif adalah teknik pemrograman yang kuat dan berguna untuk menyelesaikan banyak masalah, penting untuk memahami kelebihan dan kekurangan teknik sebelum menggunakannya dalam program.

Hash table adalah struktur data yang sangat berguna dan efisien untuk menyimpan dan mengakses data. Sifat pencarian yang cepat dan mudah diakses menjadikannya pilihan yang tepat untuk berbagai aplikasi, seperti database, cache, dan kompilator.

## Referensi
[1] A. Marcano and J. Ferratt, "Recursive Functions: A Didactic Approach Based on Flowcharts and Pseudocode," IEEE Revista de Educacion en Ingenieria, vol. 40, no. 2, pp. 113-122, 2021.

[2] T. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, Introduction to Algorithms, 4th Edition, MIT Press, 2020.