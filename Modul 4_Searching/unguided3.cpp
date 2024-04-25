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

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}