# <h1 align="center">Laporan Praktikum Modul Apa?</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
### 1. Graph
Dalam matematika diskrit, graph (juga dikenal sebagai graf atau digraf) adalah struktur yang terdiri dari kumpulan objek yang disebut simpul (node), dan hubungan di antara pasangan objek tersebut yang disebut sisi (edge). Sisi dapat menghubungkan dua simpul yang sama (self-loop) atau dua simpul yang berbeda. Graph dapat digambarkan secara visual dengan gambar yang terdiri dari titik-titik yang (simpul) dan garis yang menghubungkan titik-titik tersebut (edge). Graph memiliki beberapa karakteristik, yaitu [1]:
- Node yang unik. Setiap node dalam graph memiliki identitas yang unik dan tidak boleh ada node yang duplikat.
- Hubungan antar node. Edge digunakan untuk merepresentasikan hubungan antar node. Edge dapat berarah (memiliki arah) atau tidak berarah.
- Bobot edge. Edge dapat memiliki nilai yang disebut bobot yang menghubungkan antar node.

Graph dapat diklasifikasikan menjadi beberapa jenis berdasarkan karakteristiknya, seperti arah dan bobot sisi. Berdasarkan arahnya, graph terdiri dari [2]:
1. Graf Berarah
Pada graph berarah, sisi memiliki arah, sehingga menunjukkan hubungan satu arah antara dua simpul. Contohnya adalah representasi jaringan jalan di mana setiap sisi menunjukkan arah jalan yang diizinkan.

2. Graph Tidak Berarah
Pada graph tidak berarah, sisi tidak memiliki arah, sehingga menunjukkan hubungan dua arah antara dua simpul. Contohnya adalah representasi jaringan pertemanan di mana setiap sisi menunjukkan bahwa dua orang berteman.

Berdasarkan bobot isi, graph terdiri dari [1]:
1. Graph Berbobot
Pada graph berbobot, setiap sisi memiliki nilai yang disebut bobot. Bobot ini dapat mewakili biaya, jarak, atau informasi lainnya yang terkait dengan hubungan antara dua simpul. Contohnya adalah jaringan transportasi di mana setiap sisi memiliki bobot yang mewakili jarak antar kota.

2. Graph Tidak Berbobot
Pada graph tidak berbobot, sisi tidak memiliki bobot. Contohnya adalah representasi jaringan sosial di mana setiap sisi menunjukkan bahwa dua orang terhubung tanpa informasi tambahan tentang hubungan tersebut.

### 2. Tree
Struktur data tree (pohon) adalah struktur data non-linear yang terdiri dari elemen-elemen yang disebut node (simpul). Setiap node memiliki nilai dan dapat terhubung dengan node lain melalui hubungan hierarkis. Hubungan ini membentuk struktur seperti pohon, di mana terdapat satu node khusus yang disebut akar (root) dan node-node lainnya terhubung ke akar atau node lain dengan cara bertingkat [3]. Tree memiliki beberapa bagian, yaitu [3]:
- Akar (root): Node teratas dalam tree yang tidak memiliki parent node.
- Child node (anak): Node yang terhubung langsung ke node lain.
- Parent node (induk): Node yang terhubung ke child node.
- Sibling node (saudara kandung): Node-node yang memiliki parent node yang sama.
- Subtree: Tree yang terbentuk dari node tertentu dan semua child node-nya.
- Tingkat (level): Jarak node dari akar. Akar berada di level 0, child node dari akar berada di level 1, dan seterusnya.

Tree memiliki beberapa operasi yang umum digunakan untuk memanipulasi data dalam tree. Operasi-operasi ini memungkinkan kita untuk menambah, menghapus, dan mencari data dalam tree secara efisien. Berikut adalah beberapa operasi dasar pada struktur data tree [3].
1. Penambahan (Insertion)
Operasi penambahan bertujuan untuk memasukkan data baru ke dalam tree. Data baru dimasukkan ke dalam node baru yang kemudian dihubungkan dengan node lain dalam tree. Posisi node baru ditentukan oleh nilai datanya dan struktur tree yang ada.
2. Penghapusan (Deletion)
Operasi penghapusan bertujuan untuk menghapus data yang sudah ada dalam tree. Node yang berisi data yang ingin dihapus dicari terlebih dahulu. Jika node tersebut ditemukan, maka node tersebut beserta semua child node-nya dihapus dari tree. Penghapusan node dapat memengaruhi struktur tree, sehingga perlu dilakukan penyesuaian struktur tree setelah penghapusan dilakukan.
3. Pencarian (Search)
Operasi pencarian bertujuan untuk mencari data yang sudah ada dalam tree. Nilai data yang ingin dicari dibandingkan dengan nilai-nilai data dalam node-node tree. Jika data yang dicari ditemukan, maka node yang berisi data tersebut dikembalikan.

Selain operasi-operasi dasar tersebut, terdapat beberapa operasi lain pada struktur data tree, yaitu sebagai berikut [3].
- Traversal: Mengunjungi semua node dalam tree secara berurutan. Terdapat beberapa metode traversal yang umum digunakan, yaitu pre-order, in-order, dan post-order [3].
- Merging: Menggabungkan dua tree menjadi satu tree.
- Balancing: Menyeimbangkan struktur tree agar lebih efisien dalam operasi pencarian dan penghapusan.

## Guided 
### 1. Program Graph

```C++
#include <iostream>
#include <iomanip>
using namespace std;

string simpul[7] = {"Cimasi",
                    "Bandung",
                    "Bekasi",
                    "Tasikmalaya",
                    "Cianjur",
                    "Purwokerto",
                    "Yogyakarta"};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 9, 15, 0},
    {0, 5, 0, 9, 5, 0, 0},
    {0, 0, 0, 2, 4, 0, 8},
    {3, 0, 0, 1, 0, 0, 0},
    {0, 0, 7, 0, 0, 9, 4},
    {0, 0, 0, 0, 8, 0, 0}
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0)
            cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
Kode program di atas digunakan untuk menampilkan graph yang menghubungkan beberapa kota di Indonesia. Graph disajikan dalam bentuk matriks, di mana setiap kota diwakili oleh sebuah simpul (node) dan setiap hubungan antar kota diwakili oleh sebuah busur. Terdapat dua array yang digunakan dalam program ini, yaitu:
1. `simpul`
Array ini berisi nama-nama kota di Indonesia, seperti "Cimasi", "Bandung", "Bekasi", dan lain-lain. Array ini memiliki 7 elemen, karena kita memiliki 7 kota yang akan dihubungkan.
2. `busur`
Array ini berisi informasi tentang hubungan antar kota. Array ini memiliki 7 baris dan 7 kolom, karena kita memiliki 7 kota yang akan dihubungkan. Nilai pada array ini menunjukkan jarak dari satu kota ke kota lainnya. Misalnya, nilai busur[0][1] adalah 7, artinya jarak dari Cimasi ke Bandung adalah 7.

Fungsi `tampilGraph()` digunakan untuk menampilkan graph yang menghubungkan kota-kota tersebut. Fungsi ini menggunakan nested for loop untuk mengiterasi array `busur`. Dalam loop kedua, kita memeriksa apakah nilai pada array busur tidak sama dengan 0. Jika tidak sama dengan 0, artinya ada hubungan antar kota, maka kita akan menampilkan informasi tentang hubungan tersebut. Informasi yang ditampilkan adalah nama kota asal, nama kota tujuan, dan jarak dari kota asal ke kota tujuan.

### 2. Tree
```C++
#include <iostream>
using namespace std;

//Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul -> data = dataMasukkan;
    simpul -> kanan = NULL; // karena baru membuat simpul baru, maka simpul kanan dan kiri harus NULL
    simpul -> kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar(){
    if (root == NULL) { // jika root masih kosong
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda); // data baru menjadi root
        root = simpul;
        cout << "Root terbentuk ..." << endl;
    }
    else {
        cout << "Root sudah ada ..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) { // jika root tidak sama dengan NULL, maka kita isi
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) { // jika kita input 0, maka program akan berhenti dan mencetak output 
        // j<256 adalah kuota
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni -> kiri = simpul; // tree bergeraknya dari kiri ke kanan
                j++;
                alamat[j] = simpul;
            }
            else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat [i];
                    saatIni -> kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                }
                else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() { // menampilkan
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatIni = alamat[i];
            cout << saatIni-> data << " ";
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n*2;
            }
            i++;
        }
    }
}

// Fungsi utama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();

    return 0;
}
```
Kode program di atas menggunakan struktur pohon (tree) untuk menyimpan data. Struktur tree pada program ini terdiri dari:
- `pohon* kanan`, pointer ke simpul kanan
- `char data`, data yang diismpan pada simpul
- `pohon* kiri`, pointer ke simpul kiri

Fungsi `inisialisasi()` berfungsi untuk menginisialisasi root dari pohon. Fungsi ini mengatur nilai `root` menjadi `NULL`, yang berarti pohon masih kosong. Fungsi `simpulBaru()` berfungsi untuk membuat simpul baru dalam pohon. Fungsi ini mengalokasikan memori untuk simpul baru dan mengisi data pada simpul tersebut. Fungsi `simpulAkar()` berfungsi untuk membuat simpul akar (root) dari pohon. Fungsi ini meminta user untuk memasukkan data, lalu membuat simpul baru dengan data tersebut dan mengatur nilai `root` menjadi simpul baru tersebut. Fungsi `tambahSimpul()` berfungsi untuk menambah simpul baru ke dalam pohon. Fungsi ini meminta user untuk memasukkan data kiri dan kanan, lalu membuat simpul baru dengan data tersebut dan menghubungkan simpul baru tersebut dengan simpul yang sudah ada. Fungsi `bacaPohon()` berfungsi untuk membaca dan menampilkan isi pohon. Fungsi ini mengiterasi array alamat dan menampilkan data pada setiap simpul dalam pohon.

Dalam fungsi `main()`, kita memanggil fungsi-fungsi di atas untuk membuat pohon, menambah simpul, dan membaca isi pohon. Pertama, kita memanggil fungsi `inisialisasi()` untuk menginisialisasi root dari pohon. Lalu, kita memanggil fungsi `simpulAkar()` untuk membuat simpul akar dari pohon. Kemudian, kita memanggil fungsi `tambahSimpul()` untuk menambah simpul baru ke dalam pohon. Terakhir, kita memanggil fungsi `bacaPohon()` untuk membaca dan menampilkan isi pohon.

## Unguided 

### 1.  Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

```C++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num_nodes;
    cout << "Silakan masukan jumlah simpul : ";
    cin >> num_nodes;

    vector<string> aprianti_2311110023 (num_nodes);
    cout << "Silakan masukan nama simpul\n";
    for (int i = 0; i < num_nodes; i++) {
        cout << "Simpul " << i + 1 << " : ";
        cin >> aprianti_2311110023[i];
    }

    // Inisialisasi matriks bobot dengan nilai 0
    vector<vector<int>> weight_matrix(num_nodes, vector<int>(num_nodes, 0));

    cout << "Silakan masukkan bobot antar simpul\n";
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            cout << aprianti_2311110023[i] << "--> " << aprianti_2311110023[j] << " = ";
            cin >> weight_matrix[i][j];
        }
    }

    // Tampilkan matriks
    cout << endl;
    for (int i = 0; i < num_nodes; i++) {
        cout << "\t" << aprianti_2311110023[i];
    }
    cout << endl;

    for (int i = 0; i < num_nodes; i++) {
        cout << aprianti_2311110023[i] << " ";
        for (int j = 0; j < num_nodes; j++) {
            cout << "\t" << weight_matrix[i][j];
        }
        cout << endl;
    }

    cout << " " << endl;
    cout << "Nama : Aprianti Ika Larasati" << endl;
    cout << "NIM  : 2311110023" << endl;
    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/3a33fb68-e11d-47a7-bf36-151fc4e22ec4)

#### Full Code Screenshot:
![11_unguided2](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/59cd773c-463b-4392-81a1-a69f61978529)


#### Penjelasan:
Kode program di atas berfungsi untuk membuat matriks yang merepresentasikan graf. Fungsi `main()` menggunakan loop untuk mengulangi proses input dan output untuk setiap simpul dan bobot antar simpul. Dalam fungsi `main()` kita dapat melakukan beberapa langkah, yaitu: 
1. Meminta user untuk memasukkan jumlah simpul (node) dalam graf dan menyimpannya dalam variabel `num_nodes`.
2. Meminta user untuk memasukkan nama untuk setiap simpul dan menyimpannya dalam vektor `aprianti_2311110023`.
3. Membuat matriks bobot yang merepresentasikan graf dan menyimpannya dalam vektor `weight_matrix`.
4. Meminta user untuk memasukkan bobot antar simpul untuk setiap pasangan simpul dan menyimpannya dalam matriks `weight_matrix`.
5. Menampilkan matriks bobot dalam format yang mudah dibaca.

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

```C++
#include <iostream>
using namespace std;

//Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char aprianti_2311110023;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul -> aprianti_2311110023 = dataMasukkan;
    simpul -> kanan = NULL; 
    simpul -> kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar(){
    if (root == NULL) { 
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda); 
        root = simpul;
        cout << "Root terbentuk..." << endl;
    }
    else {
        cout << "Root sudah ada..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root!= NULL) { 
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) { 
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser!= '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni -> kiri = simpul; 
                j++;
                alamat[j] = simpul;
            }
            else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser!= '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat [i];
                    saatIni -> kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                }
                else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() { 
    if (root!= NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i]!= NULL) {
            saatIni = alamat[i];
            cout << saatIni-> aprianti_2311110023 << " ";
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n*2;
            }
            i++;
        }
    }
}

// Fungsi untuk menampilkan pohon dalam urutan pre-order
void preOrder(pohon* node) {
    if (node!= NULL) {
        cout << node->aprianti_2311110023 << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi untuk menampilkan pohon dalam urutan in-order
void inOrder(pohon* node) {
    if (node!= NULL) {
        inOrder(node->kiri);
        cout << node->aprianti_2311110023 << " ";
        inOrder(node->kanan);
    }
}

// Fungsi untuk menampilkan pohon dalam urutan post-order
void postOrder(pohon* node) {
    if (node!= NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->aprianti_2311110023 << " ";
    }
}

// Fungsi utama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();

    cout << "Pre-order: ";
    preOrder(root);
    cout << endl;

    cout << "In-order: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order: ";
    postOrder(root);
    cout << endl;

    bacaPohon();

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/c6e28da6-d09e-45ae-92a4-bf682008d1fa)

#### Full Code Screenshot:
![carbon](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/cbd2ea01-b04d-410f-8545-e0606ee4fe07)

#### Penjelasan:
Kode program di atas berfungsi untuk membuat dan mengelola sebuah pohon biner. Fungsi ini dinamakan `simpulAkar()` dan `tambahSimpul()` yang digunakan untuk membuat simpul akar dan menambah simpul ke pohon. Fungsi `simpulBaru()` digunakan untuk membuat simpul baru dengan data yang diinputkan oleh user.

Dalam fungsi `simpulAkar()`, kita melakukan pengecekan apakah `root` masih `NULL`. Jika benar, maka fungsi ini akan membuat simpul baru dengan data yang diinputkan oleh user dan menginisialisasi `root` dengan simpul tersebut. Dalam fungsi `tambahSimpul()`, kita melakukan perulangan untuk menambah simpul ke pohon. Fungsi ini akan meminta user untuk memasukkan data kiri dan kanan, dan kemudian membuat simpul baru dengan data tersebut. Fungsi `bacaPohon()` digunakan untuk menampilkan pohon dalam bentuk tree. Fungsi ini akan mencetak data dari setiap simpul dalam pohon. Fungsi `preOrder()`, `inOrder()`, dan `postOrder()` digunakan untuk menampilkan pohon dalam urutan pre-order, in-order, dan post-order. Fungsi-fungsi ini akan mencetak data dari setiap simpul dalam pohon dengan urutan yang sesuai.

Dalam fungsi `main()`, kita memanggil fungsi `inisialisasi()` untuk menginisialisasi `root` menjadi `NULL`. Kemudian, kita memanggil fungsi `simpulAkar()` untuk membuat simpul akar, dan fungsi `tambahSimpul()` untuk menambah simpul ke pohon. Setelah itu, kita memanggil fungsi `preOrder()`, `inOrder()`, dan `postOrder()` untuk menampilkan pohon dalam berbagai urutan. Terakhir, kita memanggil fungsi `bacaPohon()` untuk menampilkan pohon dalam bentuk tree.

## Kesimpulan
Graph dan Tree merupakan struktus data dalam ilmu komputer yang digunakan untuk merepresentasikan hubungan antar data. Graph adalah struktur yang terdiri dari kumpulan objek (node) yang dihubungkan oleh sisi (edge). Edge dapat berarah dan tidak berarah dan dapat memiliki bobot. Graph digunakan untuk merepresentasikan hubungan antar data yang bersifat non-hierarkis, seperti jaringan sosial, jaringan transportasi, dan peta. Tree adalah struktur data yang terdiri dari node (simpul) dan hubungan hierarkis. Setiap node memiliki parent node (induk) dan child node (anak). Tree digunakan untuk merepresentasikan hubungan antar data yang bersifat hierarkis, seperti struktur organisasi, struktur folder dalam sistem operasi, dan pohon leluhur dalam silsilah keluarga.

## Referensi
[1] T. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, Introduction to Algorithms, MIT Press, 2021.

[2] R. Diestel, Graph Theory, Springer, Cham, 2020.

[3] C. P. Satona, N. K. Dewi, I. K. Sari, "Implementasi Algoritma Breadth-First Search (BFS) dan Depth-First Search (DFS) pada Struktur Data Pohon," Jurnal Teknologi dan Informasi, vol. 17, no. 1, pp. 1-10, 2022.