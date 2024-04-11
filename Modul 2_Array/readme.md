# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
Pemrograman array adalah sintaks yang kuat untuk mengakses, memanipulasi, dan mengoperasikan data dalam vektor, matriks, dan array berdimensi lebih tinggi, seperti dalam fisika, kimia, dan teknik [1]. Array merupakan salah satu tipe data yang digunakan dalam bahasa pemrograman PHP, Pascal, JAVA, C++, dan Python. Menggunakan array dapat mempermudah penyimpanan data karena berisi tabel komponen dengan tipe data yang sama. Setiap anggota array dapat diakses melalui indeks [2]. 

### 1. Array Satu Dimensi
Array satu dimensi atau yang disebut juga dengan vektor adalah salah satu array yang nilainya hanya ditunjukkan oleh satu indeks [2]. Indeks digunakan untuk mengakses elemen array tersebut. Indeks dimulai dari 0 dan berakhir pada jumlah elemen dikurangi satu. Berikut adalah contoh kode array satu dimensi.

```C++
#include <iostream>
using namespace std;
int main ()
{
    int arr [4] = {2,3,5,7}; //deklarasi array
    cout << arr[0] << endl;
    cout << arr[3]; // memanggil array yang ditunjukkan indeks
}
```
Array terdiri dari 4 elemen. Program tersebut akan menampilkan elemen array yang dipanggil berdasarkan indeks yang diminta

### 2. Array Dua Dimensi
Array dua dimensi adalah array yang terdiri dari m elemen baris dan n kolom. Bentuk array jenis ini masing-masing menggunakan 2 (dua) kelompok indeks angka direpresentasikan sebagai indeks baris dan kolom. Jika ingin memasukkan atau membaca nilai pada matriks, maka perlu terlebih dahulu mengetahui indeks baris dan kolom [3]. Array ini digunakan dalam perhitungan matematika yang memiliki matriks/grafik/diagram yang memiliki sumbu x dan y [2]. Berikut adalah contoh kode array satu dimensi.
```C++
#include <iostream>
using namespace std;
int main ()
{
    int arr [2][2] = {{5,4}, {7,8,}};
    for (int i=0; i<2; i++) // baris
    {
        for (int j=0; j<2; j++) // kolom
        {
            cout << arr [i][j] << " " << ends;
        };
        cout << endl;
    };

}
```

### 3. Array Multidimensi
Array Multidimensi adalah kumpulan elemen yang disusun terstruktur dalam dua atau lebih dimensi. Pada array 2 dimensi, elemen-elemennya disusun dalam baris dan kolom, sedangkan dalam array multidimensi yang lebih tinggi, elemen-elemennya disusun dalam tiga atau lebih dimensi. Array multidimensi sering digunakan dalam pemrograman untuk merepresentasikan data yang kompleks, seperti data gambar dan data audio, atau untuk memudahkan pemrosesan data dalam bentuk matriks dan tabel [4].

### 4. Array Empat Dimensi
Array empat dimensi adalah sebuah tipe data yang memiliki empat dimensi, atau lebih dikenal dengan nama multidimensional array. Ini merupakan tipe data yang dapat digunakan untuk menyimpan data berupa bilangan, karakter, atau objek dalam sebuah matriiks yang memiliki empat dimensi. Array empat dimensi dapat digunakan dalam berbagai aplikasi, seperti simulasi, perhitungan statistik, dan simulasi fisika. Namun, peggunaan array empat dimensi juga memerlukan pengelolaan yang lebih baik karena kompleksitas yang tinggi. Sebuah array empat dimensi dapat didefinisikan seperti berikut ini.
```C++
int arr [2][3][3][4]
```
Contoh di atas menunjukkan bahwa array memiliki empat dimensi, yaitu 2,3,3, dan 4. Artinya array memiliki 2 baris, 3 kolom, 3 baris 4 kolom.

### 5. Array Lima Dimensi
Array lima dimensi merujuk pada struktur data yang memiliki lima dimensi. Bentuk array ini memungkinkan untuk menyimpan dan mengakses data dalam lima arah yang berbeda. Array databases digunakan untuk merepresentasikan data dalam bentuk datacubes, seprti data sensor spasial-tempotal, citra, hasil simulasi, atau statistik [5]. Array lima dimensi dapat didefinisikan seperti berikut ini.
```C++
int arr [2][3][4][4][5]
```

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++) // for pertama untuk matriks
    {
        for (int y = 0; y < 3; y++) // for kedua untuk baris
        {
            for (int z = 0; z < 3; z++) // for ketiga untuk kolom
            {
                cout << "Input Array[" << x << "][" << y << "][" << z <<
 "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z <<
 "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
Kode di atas merupakan contoh dari array tiga dimensi. Library iostream digunakan untuk mengaktifkan operasi input dan output, serta mendeklarasikan fungsi utama tempat program mulai dijalankan. `int arr[2][3][3]` mendeklarasikan array tiga dimensi bernama arr dengan dimensi 2×3×3, artinya memiliki 2 matriks yang masing-masing memiliki 3 baris dan 3 kolom. Dapat dilihat bahwa pada kode ini terdapat tiga perulangan nested for. Perulangan nested for pertama adalah untuk mengulangi elemen array dan meminta user memasukkan nilai untuk setiap elemen. for Perulangan nested for kedua adalah untuk melakukan iterasi pada elemen array dan mencetak nilai setiap elemen. Lalu, perulangan nested for ketiga adalah untuk mengulangi elemen array dan mencetak nilai setiap elemen tanpa indeks.

### 2. Program Mencari Nilai Maksimal pada Array

```C++
// Program Mencari Nilai Maksimal pada Array
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0]; // fungsi mencari nilai max. umpamakan nilai max ada di arr ke 0
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks) // untuk membandingkan. apakah arr 0 > max? jika salah, akan mengulang
        {
            maks = array[i]; // jika benar, lanjut ke sini
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
Kode di atas adalah program untuk mencari nilai maksimum dan lokasinya pada suatu array. Pertama-tama program ini mendeklarasikan variabel `maks`, `a`, `i`, dan `lokasi` yang akan digunakan untuk mencari nilai maksimum dan lokasinya dalam array. Program kemudian meminta user untuk memasukkan panjang array dan nilai untuk setiap elemen. `maks = array[0]` kode ini menginisialisasi varibel `maks` ke elemen pertama array untuk memulai pencarian maksimum. Diumpamakan nilai maksimum ada di array ke 0. Program ini menggunakan perulangan for untuk melakukan iterasi pada elemen array dan memeriksa apakah elemen saat ini lebih besar dari variabel maks. Jika ya, maka variabel maks akan diperbarui dengan elemen saat ini dan variabel lokasi dengan indeks saat ini. Jika nilai maksimum sudah ditemukan, program akan mencetak nilai maksimum dan lokasinya dalam array.

## Unguided 

### 1.  Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
### Data Array : 1 2 3 4 5 6 7 8 9 10
### Nomor Genap : 2, 4, 6, 8, 10
### Nomor Ganjil : 1, 3, 5, 7, 9

```C++
#include <iostream>
using namespace std;

int main() {
    int arr[10], i, j = 0;
    cout << "Masukkan nilai array: ";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "\nData Array: ";
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nNomor Genap : ";
    j = 0;
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            j++;
        }
    }
    if (j == 0) {
        cout << "Tidak ada angka genap";
    }

    cout << "\n\nNomor Ganjil : ";
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            j++;
        }
    }
    if (j == 0) {
        cout << "Tidak ada angka ganjil";
    }

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/5ca8b2b0-9d5a-4448-8c65-d03a7f01a9cc)

#### Full Code Screenshot:
![Screenshot 2024-03-28 192642](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/17b67b76-9551-44f9-9454-5d1b43802230)

![Screenshot 2024-03-28 192656](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/c3106da6-8023-4753-b0b6-9201cf59e706)

#### Penjelasan:
Kode di atas merupakan program untuk membuat inputan array 10 elemen dan mencetak elemen array serta bilangan genap dan ganjil di dalam array tersebut. Bagian pertama mendeklarasikan array dengan 10 elemen dan dua variabel integer i dan j. Kemudian program meminta user untuk memasukkan nilai array menggunakan for loop yang diulang sebanyak 10 kali. Kode bagian kedua mencetak elemen array menggunakan for loop. Bagian selanjutnya mencetak angka genap dalam array. Program menggunakan for loop untuk mengulangi setiap elemen dalam array dan mengecek apakah sisa pembagian elemen dengan 2 sama dengan 0. Jika true, program akan mencetak elemen tersebut kemudian menambah variabell j. Bagian berikutnya adalah mencetak angka ganjil dalam array. Mirip dengan bagian mencari angka genap, tetapi yang diperiksa adalah apakah sisa pembagian elemen dengan 2 tidak sama dengan 0. Jika true, maka program akan mencetak elemen tersebut dan menambah variabel j. Jika variabel j = 0 setelah loop berakhir, artinya tidak ada angka ganjil atau genap dalam array tersebut. Kemudian program akan menampilkan pesan "Tidak ada angka genap" atau "Tidak ada angka ganjil", bergantung pada bagian kodenya.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() 
{
    int i, j, k;

    cout << "Masukkan ukuran array (x y z): ";
    cin >> i >> j >> k;

    int arr[i][j][k];

    for (int x = 0; x < i; x++) 
    {
        for (int y = 0; y < j; y++) 
        {
            for (int z = 0; z < k; z++) 
            {
                cout << "Masukkan nilai array: ";
                cin >> arr[x][y][z];
            }
        }
    }

    cout << "\nData Array: \n";
    for (int x = 0; x < i; x++) 
    {
        for (int y = 0; y < j; y++) 
        {
            for (int z = 0; z < k; z++) 
            {
                cout << arr[x][y][z] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/61edcc78-bb77-42de-b438-dd63b0b070ab)

#### Full Code Screenshot:
![Screenshot 2024-03-28 202631](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/5e910dc8-d13c-4759-a5c1-308063ebe4bd)

![Screenshot 2024-03-28 202642](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/e3e05dc5-558f-4a5f-b28f-2c7bb3d9a0d0)

#### Penjelasan:
Kode di atas merupakan program untuk membuat array tiga dimensi dan memungkinkan user untuk input dan menampilkan nilainya. Pertama, program akan meminta pengguna untuk memasukkan ukuran array, i, j, k atau matriks, baris, dan kolom. Nilai-nilai tersebut mewakili dimensi array 3D. Selanjutnya, program menggunakan nested for loop untuk melakukan iterasi melalui setiap elemen array dan meminta user untuk memasukkan nilainya menggunakan fungsi cin. Setelah semua nilai dimasukkan, program menggunakan nested for loop lagi lalu menampilkan nilai array dengan fungsi cout. Fungsi endl digunakan untuk mencetak kaarakter baris baru setelah setiap baris array 3D dicetak. Program `return 0` untuk menunjukkan bahwa program telah selesai berjalan.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata– rata dari suatu array dengan input yang dimasukan oleh user
```C++
#include <iostream>
using namespace std;

int main() 
{
    int n, choice;
    int max = INT_MIN, min = INT_MAX;
    float avg = 0;
    int arr[100];

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    cout << "Masukkan nilai array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        avg += arr[i];
    }

    avg /= n;

    cout << "Menu pemrosesan array:" << endl;
    cout << "1. Cari nilai maksimum" << endl;
    cout << "2. Cari nilai minimum" << endl;
    cout << "3. Cari rata-rata" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Nilai maksimumnya adalah " << max << endl;
            break;
        case 2:
            cout << "Nilai minimumnya adalah " << min << endl;
            break;
        case 3:
            cout << "Rata-ratanya adalah " << avg << endl;
            break;
        case 4:
            cout << "Keluar dari program..." << endl;
            break;
        default:
            cout << "Pilihan tidak ada. Keluar dari program..." << endl;
    }

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/49d47474-50f6-4db1-9e54-70775b7192c7)

#### Full Code Screenshot:
![Screenshot 2024-03-28 225950](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/dbcd1c9a-6f7f-4388-8efe-50e3237c1534)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/3389c817-42bd-4199-98f3-519a549db1d6)

![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/14c6e17b-2bda-41c6-8c30-7a4e9b9cf56a)

#### Penjelasan:
Kode di atas adalah program untuk mencari nilai maksimum, mnimum dan rata-rata dari sebuah array. Pertama, program meminta user untuk input jumlah elemen dalam array. Kemudia user dapat input nilai-nilai array. User kemudian disajikan dengan menu yang memungkinkan mereka memilih nilai mana yang ingin mereka cari. Pilihan 1 untuk mencari nilai maksimum, 2 untuk mencari nilai minimum, 3 untuk mencari nilai rata-rata, dan 4 untuk keluar dari program. Jika user memasukkan pilihan yang tidak valid, program akan menampilkan pesan "Pilihan tidak ada. Keluar dari program..."

Program ini menggunakan konstanta `INT_MIN` dan `INT_MAX` untuk menginisialisasi nilai maksimum dan minimum array. `cout` dan `cin` digunakan untuk menampilkan menu dan mendapatkan input user. for loop digunakan untuk melakukan iterasi melalui lemen array dan menghitung nilai maksimum, minimum, dan rata-rata. `switch statement` digunakan untuk menangani pilihan user dan melakukan tindakan yang sesuai.

## Kesimpulan
- Pemrograman array adalah sintaks yang kuat untuk mengakses, memanipulasi, dan mengoperasikan data dalam vektor, matriks, dan array berdimensi lebih tinggi, seperti dalam fisika, kimia, dan teknik.
- Array satu dimensi atau yang disebut juga dengan vektor adalah salah satu array yang nilainya hanya ditunjukkan oleh satu indeks. 
- Array dua dimensi adalah array yang terdiri dari m elemen baris dan n kolom. 
- Array Multidimensi adalah kumpulan elemen yang disusun terstruktur dalam dua atau lebih dimensi. Array multidimensi sering digunakan dalam pemrograman untuk merepresentasikan data yang kompleks, seperti data gambar dan data audio, atau untuk memudahkan pemrosesan data dalam bentuk matriks dan tabel. 
- Array empat dimensi adalah sebuah tipe data yang memiliki empat dimensi, atau lebih dikenal dengan nama multidimensional array. Array empat dimensi dapat digunakan dalam berbagai aplikasi, seperti simulasi, perhitungan statistik, dan simulasi fisika. 
- Array lima dimensi merujuk pada struktur data yang memiliki lima dimensi. Bentuk array ini memungkinkan untuk menyimpan dan mengakses data dalam lima arah yang berbeda.

## Referensi
[1] Harris, C., Millman, K., Walt, S., Gommers, R., Virtanen, P., Cournapeau, D., Wieser, E., Taylor, J., Berg, S., Smith, N., Kern, R., Picus, M., Hoyer, S., Kerkwijk, M., Brett, M., Haldane, A., R'io, J., Wiebe, M., Peterson, P., G'erard-Marchant, P., Sheppard, K., Reddy, T., Weckesser, W., Abbasi, H., Gohlke, C., & Oliphant, T. (2020). Array programming with NumPy. Nature. https://doi.org/10.1038/s41586-020-2649-2.

[2] M. P. Putri, dkk., "Algoritma dan Struktur Data," WIDINA BHAKTI PERSADA BANDUNG, Bandung, Indonesia, 2022.

[3] Windarto, Agus, dkk.,Belajar Dasar Algoritma dan Pemrograman C++, Medan, 2016.

[4] R. G. Guntara, “Algoritma dan Pemrograman Dasar: Menggunakan Bahasa Pemrograman C++ dengan Contoh Kasus Aplikasi untuk Bisnis dan Manajemen,” CV. Ruang Tentor, 2023.

[5] Baumann, P., Misev, D., Merticariu, V. et al. Array databases: concepts, standards, implementations. J Big Data 8, 28 (2021). https://doi.org/10.1186/s40537-020-00399-2
