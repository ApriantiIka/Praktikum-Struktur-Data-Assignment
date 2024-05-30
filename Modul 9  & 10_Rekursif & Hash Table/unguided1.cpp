#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int num;
    cout << "Masukkan angka: ";
    cin >> num;
    cout << "Nilai faktorial dari " << num << " adalah " << factorial(num) << endl;
    cout << " " << endl;
    cout << "Nama  : Aprianti Ika Larasati" << endl;
    cout << "NIM   : 2311110023" << endl;
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}