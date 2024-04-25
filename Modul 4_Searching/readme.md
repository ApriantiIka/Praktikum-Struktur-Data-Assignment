# <h1 align="center">Laporan Praktikum Modul Algoritma Searching</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
Dalam ilmu komputer, 

### 1. Bubble Sort


## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;

int main () {
    int n = 10; // variabel n utk jumlah data
    int data[n] = {9,4,1,7,5,12,4,13,4,10}; // inputan data dari program
    int cari = 10; //angka yang dicari = 10
    bool ketemu = false; // variabel boolean ketemu 
    int i;
    // Algoritma sequential search
    for (i=0; i < n; i++) { // menggunakan perulangan for
        if (data[i] == cari) { //mengecek apakah data yang dicari = cari
            ketemu = true; //ketika ketemunya false, program akan looping
            break; // jika true maka program berhenti
        }
    }
    cout << "\t Program sequential search sederhana\n" << endl;
    cout << "Data: {9,4,1,7,5,12,4,13,4,10}" << endl;

    if (ketemu) {
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}
```
Kode di atas menggunakan algortima sequential search. Program ini digunakan untuk mencari sebuah bilangan integer yang dicari dalam sebuah array yang telah diinisialisasi. 
- Pada `int n = 10`, variabel n dideklarasikan sebagai integer dan diinisialisasi dengan nilai 10. Nilai ini akan digunakan sebagai panjang dari aray `data`
- Array `data` dideklarasikan sebagai array of integer dengan panjang `n` dan dideklarasikan dengan nilai-nilai yang diinginkan.
- Pada `int cari = 10`, variabel `cari` dideklarasikan sebagai integer dan diinisialisasi dengan nilai 10. Nilai ini akan dicari dalam array.
- Pada `bool ketemu = false`, variabel `ketemu` dideklarasikan sebagai boolean dan diinisialisasi dengan nilai false. Nilai akan digunakan untuk menandakan apakah nilai yang dicari ditemukan atau tidak.
- Perulangan `for` digunakan untuk melakukan iterasi pada setiap elemen dari array.
- `if (data[i] == cari) { ... }`: Blok kode ini digunakan untuk mengecek apakah elemen pada indeks i dari array data sama dengan nilai yang dicari.
- Jika elemen ditemukan, variabel `ketemu` akan diubah menjadi true. Perulangan akan berhenti jika elemen ditemukan.
- Jika nilai yang dicari ditemukan, maka akan ditampilkan pesan "Angka [cari] ditemukan pada indeks ke-[i]". Jika tidak ditemukan, maka akan ditampilkan pesan "[cari] tidak dapat ditemukan pada data.".

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search 
```C++
#include <iostream>
#include <iomanip> //library utk manipulator. implementasi di syntax setw (memberi spasi 3 karakter)

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() { // pengurutan menggunakan selection sort
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
Kode di atas menggunakan algoritma Binary Search. Program tersebut digunakan untuk mencari sebuah integer yang dicari menggunakan algoritma searching binary search pada sebuah array yang telah diurutkan menggunakan algoritma selection sort.
- `int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};`. Array `bil_data` dideklarasikan sebagai array of integer dengan panjang 7 dan diinisialisasi dengan nilai-nilai yang diinginkan.
- `void selection_sort() { ... }`. Fungsi `selection_sort` digunakan untuk mengurutkan array menggunakan algoritma selection sort.
- `void binary_search() { ... }`. Fungsi `binary_search` digunakan untuk mencari nilai yang dicari menggunakan algoritma pencarian binary search.
- Perulangan for digunakan untuk melakukan iterasi pada setiap elemen dalam array.
- `if(b_flag == 1) { ... } else { ... }`. Blok kode ini digunakan untuk mengecek apakah nilai yang dicari ditemukan atau tidak. Jika ditemukan, maka akan ditampilkan pesan "Data ditemukan pada index ke-[tengah]". Jika tidak ditemukan, maka akan ditampilkan pesan "Data tidak ditemukan".

## Unguided 

### 1.  Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search! 

```C++
#include <iostream>
#include <string>
using namespace std;

void selection_sort(string &kata) { // sorting menggunakan selection sort
    for (int i = 0; i < kata.length() - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < kata.length(); j++) {
            if (kata[j] < kata[min_index]) {
                min_index = j;
            }
        }
        char temp = kata[i];
        kata[i] = kata[min_index];
        kata[min_index] = temp;
    }
}

int binary_search(string kata, char cari) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = kata.length() - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (kata[tengah] == cari) {
            b_flag = 1;
            break;
        } else if (kata[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1) {
        return tengah;
    } else {
        return -1;
    }
}

int main() {
    string kata;
    char cari;
    int hasil;

    cout << "\t BINARY SEARCH\n";
    // input kata dari user
    cout << "\n Masukkan kata : ";
    getline(cin, kata);
    // Input huruf yang ingin dicari oleh user
    cout << "\n Masukkan huruf yang ingin Anda cari : ";
    cin >> cari;
    // tampilan data setelah diurutkan
    selection_sort(kata);
    cout << "\n Huruf diurutkan : " << kata << endl;

    hasil = binary_search(kata, cari);

    if (hasil != -1) {
        cout << "\n Huruf \"" << cari << "\" ditemukan pada index ke-" << hasil << endl;
    } else {
        cout << "\n Huruf \"" << cari << "\" tidak ditemukan pada kata tersebut\n";
    }

    return 0;
}
```

#### Output:
![Screenshot 2024-04-26 002241](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/7b1781c3-85c8-4678-b5e0-19b1e489721e)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/1a542086-c90c-4d72-a813-83c93215f6e0)

#### Penjelasan:
Program tersebut merupakan program untuk mencari huruf dalam suatu kata menggunakan algoritma binary search. 

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!
```C++
#include <iostream>
#include <string>
using namespace std;

int hitungVokal(string kalimat) {
    int count = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;
    int jumlahVokal;

    cout << "\t MENGHITUNG JUMLAH HURUF VOKAL\n";
    cout << "\n Masukkan kalimat : ";
    getline(cin, kalimat);

    jumlahVokal = hitungVokal(kalimat);

    cout << "\n Jumlah huruf vokal pada kalimat tersebut adalah " << jumlahVokal << " huruf." << endl;

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/e9ed5c79-9d12-44aa-8295-00fc3acae217)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/247402a2-f8f3-4320-826f-3a61af5af43e)

#### Penjelasan:

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!
```C++
#include <iostream>
using namespace std;

int sequential_search(int data[], int n, int cari) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = sizeof(data) / sizeof(data[0]);
    int cari = 4;
    int jumlah;

    cout << "\t SEQUENTIAL SEARCH\n";
    cout << "\n Data : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";

    jumlah = sequential_search(data, n, cari);

    cout << "\n Banyaknya angka " << cari << " pada data tersebut adalah " << jumlah << " angka." << endl;

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/7234a506-8f27-4c12-830c-2a05814f1a3e)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/8a673e5f-3c94-49ca-9370-42419e6364ea)

#### Penjelasan:

## Kesimpulan
Algoritma 

## Referensi
[1] 