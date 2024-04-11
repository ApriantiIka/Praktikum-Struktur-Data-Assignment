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

#### Full Code Screenshot:

#### Penjelasan:



## Referensi
[1] Harris, C., Millman, K., Walt, S., Gommers, R., Virtanen, P., Cournapeau, D., Wieser, E., Taylor, J., Berg, S., Smith, N., Kern, R., Picus, M., Hoyer, S., Kerkwijk, M., Brett, M., Haldane, A., R'io, J., Wiebe, M., Peterson, P., G'erard-Marchant, P., Sheppard, K., Reddy, T., Weckesser, W., Abbasi, H., Gohlke, C., & Oliphant, T. (2020). Array programming with NumPy. Nature. https://doi.org/10.1038/s41586-020-2649-2.

[2] M. P. Putri, dkk., "Algoritma dan Struktur Data," WIDINA BHAKTI PERSADA BANDUNG, Bandung, Indonesia, 2022.

[3] Windarto, Agus, dkk.,Belajar Dasar Algoritma dan Pemrograman C++, Medan, 2016.

[4] R. G. Guntara, “Algoritma dan Pemrograman Dasar: Menggunakan Bahasa Pemrograman C++ dengan Contoh Kasus Aplikasi untuk Bisnis dan Manajemen,” CV. Ruang Tentor, 2023.

[5] Baumann, P., Misev, D., Merticariu, V. et al. Array databases: concepts, standards, implementations. J Big Data 8, 28 (2021). https://doi.org/10.1186/s40537-020-00399-2
