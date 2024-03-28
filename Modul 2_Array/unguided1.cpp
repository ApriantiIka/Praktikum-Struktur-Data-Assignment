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

    cout << "" << endl;
    cout << "" << endl;
    cout << "Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}