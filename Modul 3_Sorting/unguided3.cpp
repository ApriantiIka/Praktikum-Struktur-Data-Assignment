// Insertion Sort
#include <iostream>
#include <string>
using namespace std;

// Fungsi Insertion Sort Ascending
void insertionSortAscending(string arr[], int n) {
    int i, j;
    string key;
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
void insertionSortDescending(string arr[], int n) {
    int i, j;
    string key;
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

void printArray(string arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter (n): "; // input panjang array
    cin >> n;
    string arr[n];
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
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;

    return 0;
}