#include <iostream>
using namespace std;

const float pi = 3.14;

// Fungsi Menghitung Volume Tabung
float hitungVTabung(float radius, float tinggi){
    return (pi * radius * radius * tinggi);
}

// Fungsi Menghitung Luas Permukaan Tabung
float hitungLTabung(float radius, float tinggi){
    return (2 * pi * radius * (radius + tinggi));
}

// Main Program
int main(){
    int Menu;
    float radius, tinggi;

    cout << "Pilihan Menu:\n";
    cout << "1. Hitung Volume Tabung\n";
    cout << "2. Hitung Luas Permukaan Tabung\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> Menu;

    switch(Menu){
        case 1:
            cout << "Masukkan panjang r: ";
            cin >> radius;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Volume tabung = " << hitungVTabung(radius, tinggi) << endl;
            break;
        case 2:
            cout << "Masukkan panjang r: ";
            cin >> radius;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Luas permukaan tabung = "<< hitungLTabung(radius, tinggi) << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;

    return 0;
}