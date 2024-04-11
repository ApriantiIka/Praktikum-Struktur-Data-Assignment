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

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;

    return 0;
}