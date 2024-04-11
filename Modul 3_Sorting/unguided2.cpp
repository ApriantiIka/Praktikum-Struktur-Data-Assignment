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

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}