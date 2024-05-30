// DIRECT RECURSION
#include<iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown (n-1);
}

int main() {
    cout << "Rekursif Langsung:";
    countdown(5); //5 merupakan inputnya
    cout << endl;
    return 0;
}