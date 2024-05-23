# <h1 align="center">Laporan Praktikum Modul Priority Queue dan Heaps</h1>
<p align="center">Aprianti Ika Larasati </p>
<p align="center">2311110023 </p>

## Dasar Teori
### 1. Priority Queue
Priority queue atau antrian berprioritas merupakan struktur data abstrak yang menyimpan elemen dengan nilai prioritas tertentu. Berbeda dengan antrian biasa di mana elemen diproses berdasarkan urutan masuk (First-In-First-Out/FIFO), priority queue memprioritaskan elemen berdasarkan nilainya. Elemen dengan nilai prioritas tertinggi akan diproses terlebih dahulu, meskipun elemen tersebut baru saja masuk antrian.

Priority queue memiliki berbagai macam aplikasi dalam bidang ilmu komputer, seperti:

## Guided 
```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i-1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
        }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize-1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);
    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority : " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
    
    remove(3);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
}
```
Program di atas merupakan implementasi dari priority queue menggunakan heap maksimum. Heap maksimum adalah jenis tree kompleks yang mempertahankan properti, di mana niali node parent selalu lebih besar atau sama dengan nilai childnya. Hal ini memungkinkan operasi ekstraksi maksimum atau mengambil nilai terbesar dari heap dengan waktu kompleksitas O(log n). Terdapat beberapa fungsi yang digunakan dalam program tersebut, yaitu:
- `parent(i)`, digunakan untuk menghitung indeks parent dari node i.
- `leftChild(i)`, function ini akan mengembalikan indeks dari node child kanan dari node ke-i.
- `shiftUp(i)`, function ini menggeser node ke-i ke atas dengan menggeser node-node yang lebih besar ke bawah sampai node ke-i berada pada posisi yang tepat.
- `shiftDown(i)`, function ini menggeser node ke-i ke bawah dengan menggeser node-node yang lebih kecil ke atas sampai node ke-i berada pada posisi yang tepat.
- `insert(p)`, function ini akan menambahkan nilai p ke heap dengan menggeser node-node yang diperlukan untuk mempertahankan properti heap.
- `extractMax()`, function ini akan mengambil dan mengembalikan nilai terbesar dari heap dan menggeser node-node yang diperlukan untuk mempertahankan elemen heap.
- `changePriority(i, p)`, function ini adalah function untuk mengubah nilai dari node ke-i menjadi p dan menggeser node-node yang diperlukan untuk mempertahankan elemen heap.
- `getMax()`, digunakan untuk melihat nilai terbesar dari heap
- `remove(i)`, digunakan untuk menghapus node ke-i dari heap dan menggeser node-node yang diperlukan untuk mempertahankan elemen heap.
Pada `main()` function, kita dapat melakukan beberapa operasi pada heap, yaitu:
- `insert()`, untuk menambahkan beberapa nilai ke heap.
- `extractMax()`, untuk mengambil dan mencetak nilai terbesar dari heap.
- `changePriority()`, untuk mengubah prioritas node ke-2
- `remove()`, untuk menghapus node ke-3.
Setelah melakukan operasi-operasi tersebut, program akan menampilkan output berupa elemen-elemen heap.

## Unguided 

### 1.  Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.

```C++
#include <iostream>
#include <algorithm>
#include <vector>

class MaxHeap {
private:
    std::vector<int> H;

    int parent(int i) {
        return (i-1) / 2;
    }

    int leftChild(int i) {
        return ((2 * i) + 1);
    }

    int rightChild(int i) {
        return ((2 * i) + 2);
    }

    void shiftUp(int i) {
        while (i > 0 && H[parent(i)] < H[i]) {
            std::swap(H[parent(i)], H[i]);
            i = parent(i);
        }
    }

    void shiftDown(int i) {
        int maxIndex = i;
        int l = leftChild(i);
        if (l < H.size() && H[l] > H[maxIndex]) {
            maxIndex = l;
        }
        int r = rightChild(i);
        if (r < H.size() && H[r] > H[maxIndex]) {
            maxIndex = r;
        }
        if (i != maxIndex) {
            std::swap(H[i], H[maxIndex]);
            shiftDown(maxIndex);
        }
    }

public:
    void insert(int p) {
        H.push_back(p);
        shiftUp(H.size() - 1);
    }

    int extractMax() {
        int result = H[0];
        H[0] = H.back();
        H.pop_back();
        shiftDown(0);
        return result;
    }

    void changePriority(int i, int p) {
        int oldp = H[i];
        H[i] = p;
        if (p > oldp) {
            shiftUp(i);
        } else {
            shiftDown(i);
        }
    }

    int getMax() {
        return H[0];
    }

    void remove(int i) {
        H[i] = getMax() + 1;
        shiftUp(i);
        extractMax();
    }

    void printHeap() {
        for (int i = 0; i < H.size(); ++i) {
            std::cout << H[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    MaxHeap heap;
    int choice, input, index, newPriority;

    while (true) {
        std::cout << "1. Insert\n";
        std::cout << "2. Extract Max\n";
        std::cout << "3. Change Priority\n";
        std::cout << "4. Remove\n";
        std::cout << "5. Print Heap\n";
        std::cout << "6. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to insert: ";
                std::cin >> input;
                heap.insert(input);
                break;
            case 2:
                std::cout << "Extracted Max: " << heap.extractMax() << "\n";
                break;
            case 3:
                std::cout << "Enter the index and new priority: ";
                std::cin >> index >> newPriority;
                heap.changePriority(index, newPriority);
                break;
            case 4:
                std::cout << "Enter the index to remove: ";
                std::cin >> input;
                heap.remove(input);
                break;
            case 5:
                heap.printHeap();
                break;
            case 6:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
```

#### Output:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/0fa9c7be-f9d6-414c-9fe1-eb345752a7ab)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/2a56444b-a44d-4499-9755-cb89fb932a42)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/ab75c2e6-98a2-468b-a937-513864a0318c)

#### Full Code Screenshot:
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/9fa978b5-9e93-42c6-940d-e739baa5fba2)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/6bce1b4b-6e5f-4b21-aa67-175686a7dc85)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/683f2ba5-8611-4e1e-8dcb-6c875d192868)
![image](https://github.com/ApriantiIka/Praktikum-Struktur-Data-Assignment/assets/161322924/91c11e83-dd78-4fcb-9190-c7163327bb61)

#### Penjelasan:
Program tersebut merupakan implementasi dari heap maksimum menggunakan kontainer `std::vector` dari library standard C++. Heap maksimum adalah jenis tree kompleks yang mempertahankan properti, di mana niali node parent selalu lebih besar atau sama dengan nilai childnya. Hal ini memungkinkan operasi ekstraksi maksimum atau mengambil nilai terbesar dari heap dengan waktu kompleksitas O(log n). Terdapat beberapa fungsi yang digunakan dalam program tersebut, yaitu:
- `parent(i)`, digunakan untuk menghitung indeks parent dari node i.
- `leftChild(i)`, function ini akan mengembalikan indeks dari node child kanan dari node ke-i.
- `shiftUp(i)`, function ini menggeser node ke-i ke atas dengan menggeser node-node yang lebih besar ke bawah sampai node ke-i berada pada posisi yang tepat.
- `shiftDown(i)`, function ini menggeser node ke-i ke bawah dengan menggeser node-node yang lebih kecil ke atas sampai node ke-i berada pada posisi yang tepat.
- `insert(p)`, function ini akan menambahkan nilai p ke heap dengan menggeser node-node yang diperlukan untuk mempertahankan properti heap.
- `extractMax()`, function ini akan mengambil dan mengembalikan nilai terbesar dari heap dan menggeser node-node yang diperlukan untuk mempertahankan elemen heap.
- `changePriority(i, p)`, function ini adalah function untuk mengubah nilai dari node ke-i menjadi p dan menggeser node-node yang diperlukan untuk mempertahankan elemen heap.
- `getMax()`, digunakan untuk melihat nilai terbesar dari heap
- `remove(i)`, digunakan untuk menghapus node ke-i dari heap dan menggeser node-node yang diperlukan untuk mempertahankan elemen heap.
- `printHeap()`, digunakan untuk mencetak isi heap.

Pada `main()` function, terdapat objek `MaxHeap` yang dapat melakukan beberapa operasi pada heap, yaitu:
- `insert()`, untuk menambahkan beberapa nilai ke heap.
- `extractMax()`, untuk mengambil dan mencetak nilai terbesar dari heap.
- `changePriority()`, untuk mengubah prioritas node ke-2
- `remove()`, untuk menghapus node ke-3.
- `printHeap()`, untuk mencetak isi heap.

Setiap operasi akan menghasilkan output yang menunjukkan status dari heap setelah melakukan operasi-operasi tersebut. Program ini juga meminta user untuk memilih operasi yang ingin dilakukan dengan while loop dan switch-case.

## Kesimpulan
Algoritma 

## Referensi
[1] M.S. Garai Canaan.C and M. Daya. Popular sorting algorithms. World Applied Programming, 1:62–71, April 2011.

[2] A. Karunanithi, “A Survey, Discussion and Comparison of Sorting Algorithms,” Umeå University, 2014.