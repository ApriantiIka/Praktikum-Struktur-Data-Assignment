# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori


### 1. Array Satu Dimensi


## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort 

```C++
// Bubble sort ascending
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array menggunakan algoritma bubble sort
void bubble_sort(double arr[], int length) {
    bool not_sorted = true;     // jika belum tersorting dia akan looping
    int j = 0;
    double tmp;

    // Melakukan pengurutan hingga array sudah terurut
    while (not_sorted) {
        not_sorted = false;
        j++;
        // Membandingkan dan menukar elemen
        for (int i = 0; i < length - j; i++) {
            if (arr[i] > arr [i + 1]) {
                // Menukar elemen
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = tmp;

                //Set not_sorted ke true karena
                not_sorted = true;
            }
        }
    }
}

//Fungsi utk mencetak isi array
void print_array(double a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main () {
    int length = 6; // Jumlah elemen dalam array
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99, 99.99};

    cout << "Urutkan bilangan sebelum sorting:" << endl;
    print_array(a, length);

    // memanggil fungsi bubble_sort untuk meng
    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting" << endl;
    print_array(a, length);

    return 0;
}
```
Kode di atas menggunakan algortima Bubble Sort dan mengurutkan array secara ascending. Fungsi `bubble_sort` mengambil array double values dan panjangnya sebagi input. Terdapat variabel flag `not_sorted` untuk memeriksa apakah array sudah diururtkan atau belum. Jika array tidak diurutkan, maka akan dilanjutkan ke iterasi berikutnya dari loop luar.
Di setiap iterasi outer, loop flag `not_sorted` disetel ke `false`. Kemudian, inner loop membandingkan setiap pasangan elemen yang berdekatan dan menukarnya jika urutannya salah. Jika ada pertukaran yang terjadi, flag `not_sorted` disetel ke `true`, yang menunjukkan bahwa diperlukan iterasi lain dari outer loop.
Dalam fungsi `main`, array double values didefinisikan dan diinisialisasi. Fungsi `print_array` dipanggil untuk mencetak sebelum mengurutkan. Kemudian, fungsi `bubble_sort` dipanggil untuk mengurutkan array dalam urutan ascending. Terakhir, fungsi `print_array` dipanggil lagi untuk mencetak array yang sudah diurutkan.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort 

```C++
#include <iostream>
using namespace std;

//Fungsi utk mengurutkan array secara descending menggunakan insertion sort
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j>  0 && arr[j - 1] < arr[j]) {  // Perubahan terjadi di sini
            //Menukar elemen
            tmp = arr [j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}

void print_array (char a[], int length) {
    for (int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6; // Jumlah elemen dalam array
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutkan karakter sebelum sorting: " << endl;
    print_array(a, length);

    //Memanggil fungsi insertion_sort_descending untuk mengurutkan array secara descending
    insertion_sort(a, length);

    cout << "\nUrutkan karakter setelah sorting secara descending: " << endl;
    print_array(a, length);

    return 0;
}
```
Kode di atas merupakan contoh dari algoritma Insertion Sort yang mengurutkan array secara descending. Fungsi `insertion_sort` mengambil array char dan panjangnya sebagai input. Terdapat nested loop untuk membandingkan dan menukar elemen yang berdekatan dalam array. Outer loop melakukan iterasi melalui array mulai dari elemen kedua, sedangkan inner loop membandingkan elemen saat ini dengan elemen sebelumnya dan menukarnya jika urutannya salah.
Dalam fungsi `main`, serangkaian karakter didefinisikan dan diinisialisasi. Fungsi `print_array` dipanggil untuk mencetak array sebelum diurutkan. Kemudian, fungsi `insertion_sort` dipanggil untuk mengurutkan array dalam urutan descending. Terakhir, fungsi `print_array` dipanggil lagi untuk mencetak array yang telah diurutkan.

## Unguided 

### 1.  Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

```C++
#include <iostream>
using namespace std;

void selectionSort(float arr[], int n) {
    int i, j, maxIndex;
    float temp;

    for (i = 0; i < n-1; i++) {
        maxIndex = i;
        for (j = i+1; j < n; j++)
            if (arr[j] > arr[maxIndex])
                maxIndex = j;

        // Menukar elemen maksimum yang ditentukan dengan elemen pertama
        temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

// Fungsi untuk mencetak isi array
void printArray(float arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips)/sizeof(ips[0]);
    
    // Memanggil fungsi selection sort descending untuk mengurutkan array secara descending
    selectionSort(ips, n);
    cout<<"IPS mahasiswa dari yang terbesar hingga terkecil: \n";
    printArray(ips, n);
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/aa0aa25b-0c8f-40e5-9c83-7ac18a0e19d5)

#### Full Code Screenshot:
![Screenshot 2024-04-11 204210](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/d93bfa4e-c555-4485-ae24-d8505ff73b6d)

#### Penjelasan:
Program tersebut merupakan program untuk mengurutkan IPS mahasiswa secara descending atau dari terbesar ke yang terkecil.
Fungsi `selectionSort` mengambil array float dan panjagnya sebagai input. Terdapat nested loop untuk menemukan elemen maksimum di bagian array yang tidak disortir dan menukarnya dengan elemen pertama dari bagian yang tidak disortir.
Fungsi `printArray` adalah fungsi untuk mencetak array.
Dalam fungsi `main`, array float didefinisikan dan diinisialiasi. Fungsi `selectionSort` dipanggil untuk mengurutkan array dalam urutan descending. Kemudian, fungsi `printArray` dipanggil untuk mencetak array yang diurutkan.

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int n) {
    int i, j;
    string temp;
    for(i = 0; i < n-1; i++) {     
        for (j = 0; j < n-i-1; j++) { 
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Fungsi untuk mencetak isi array
void printArray(string arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names)/sizeof(names[0]);
    
    // Memanggil fungsi bubbleSort untuk mengurutkan array
    bubbleSort(names, n);
    cout<<"Nama-nama warga setelah diurutkan: \n";
    printArray(names, n);
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/a5abfc17-1158-4d18-b17f-3ff82b4bf0da)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/17d60b41-4d9a-4c80-b4d5-26c71a1b44e9)

#### Penjelasan
Program di atas merupakan program untuk mengurutkan nama secara ascending dengan menggunakan algoritma Bubble Sort. Fungsi `bubbleSort` mengambil array string dan panjangnya sebagai input. Terdapat nested loop untuk membandingkan dan menukar elemen yang berdekatan dalam array. Outer loop membandingkan setiap pasangan elemen yang berdekatan dalam array. Jika elemen saat ini lebih besar dari elemen berikutnya, kedua elemen tersebut ditukar. Outer loop berlanjut hingga tidak ada lagi pertukaran yang dilakukan, yang menunjukkan bahwa array telah urut.
Fungsi `printArray` adalah fungsi untuk mencetak isi array. Dalam fungsi `main`, array string didefinisikan dan diinisialisasi. Fungsi `bubbleSort` dipanggil untuk mengurutkan array secara ascending. Fungsi `printArray` dipanggil untuk mencetak array yang diurutkan.

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

```C++
// Insertion Sort
#include <iostream>
using namespace std;

// Fungsi Insertion Sort Ascending
void insertionSortAscending(char arr[], int n) {
    int i, j;
    char key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

// Fungsi Insertion Sort Descending
void insertionSortDescending(char arr[], int n) {
    int i, j;
    char key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] < key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void printArray(char arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter (n): "; // input panjang array
    cin >> n;
    char arr[n];
    cout << "Masukkan " << n << " karakter: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nUrutan karakter sebelum sorting: \n";     // Mencetak array sebelum sorting
    printArray(arr, n);
    insertionSortAscending(arr, n);
    cout << "\nUrutan karakter setelah ascending sort: \n";    // Mencetak array yang sudah diurutkan secara ascending
    printArray(arr, n);
    insertionSortDescending(arr, n);
    cout << "\nUrutan karakter setelah descending sort: \n";   // Mencetak array yang sudah diurutkan secara descending
    printArray(arr, n);
    return 0;
}
```
#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/f9307a79-dd66-4fe0-9894-f2d5f442f6a5)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/20bb584e-9c0d-4d9d-9142-45f961633af7)

#### Penjelasan
Program di atas merupakan program untuk mengurutkan karakter yang diinputkan oleh user dengan menggunakan algoritma insertion sort. Program tersebut akan mengeluarkan output berupa array yang diurutkan secara ascending dan descending. 

Fungsi `insertionSortAscending` mengambil array char dan panjangnya sebagai input. Terdapat nested loop untuk membandingkan dan menukar elemen yang berdekatan dalam array. Outer loop melakukan iterais melalui array, dimulai dari elemen kedua dan berakhir pada elemen terakhir. Inner loop membandingkan elemen saat ini dengan elemen sebelumnya dan menukarnya jika urutannya salah.

Fungsi `insertionSortDescending` mengambil array char dan panjangnya sebagai input. Terdapat nested loop untuk membandingkan dan menukar elemen yang berdekatan dalam array. Outer loop melakukan iterasi melalui array, dimulai dari elemen kedua dan berakhir pada elemen terakhir. Inner loop membandingkan elemen saat ini dengan elemen sebelumnya dan menukarnya jika urutannya salah.

Fungsi `printArray` adalah fungsi untuk mencetak isi array.
Pada fungsi `main`, user diminta untuk menginputkan panjang array dan karater dalam array. Fungsi `printArray` dipanggil untuk mencetak array sebelum melakukan sorting. Kemudian, fungsi `insertionSortAscending` dipanggil untuk mengurutkan array secara ascending (menaik). Fungsi `printArray` dipanggil lagi untuk mencetak array yang diurutkan. Terakhir, fungsi `insertionSortDescending` dipanggil untuk mengurutkan array dalam urutan descending (menurun) dan fungsi `printArray` dipanggil lagi untuk mencetak array yang telah diurutkan.

## Referensi
[1] 