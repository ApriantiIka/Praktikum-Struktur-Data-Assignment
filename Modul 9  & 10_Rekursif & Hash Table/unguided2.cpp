#include <iostream>
using namespace std;

int factorial(int n);
int helper(int n, int simpenan);

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
    return helper(n, 1);
}

int helper(int n, int simpenan) {
    if (n == 0) {
        return simpenan;
    } else {
        return helper(n-1, n * simpenan);
    }
}