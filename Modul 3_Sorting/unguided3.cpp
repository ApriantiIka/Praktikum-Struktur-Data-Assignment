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
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;

    return 0;
}