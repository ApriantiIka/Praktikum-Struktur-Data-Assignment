#include <iostream>
#include<string>
using namespace std;

struct mie_instan {
    string brand;
    string varian;
    double harga;
};

int main() {
    mie_instan mie[3]; // Array of struct mie_instan

    // Mengisi data
    for (int i = 0; i < 3; i++) {
        cout << "Brand: ";
        cin >> mie[i].brand;
        cout << "Varian: ";
        cin >> mie[i].varian;
        cout << "Harga: ";
        cin >> mie[i].harga;
        cout << endl;
    }

    // Menampilkan data
    cout << "Data Mie Instan:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Mie Instan ke-" << i + 1 << ":" << endl;
        
        cout << "Brand: " << mie[i].brand << endl;
        cout << "Varian: " << mie[i].varian << endl;
        cout << "Harga: " << mie[i].harga << endl;
        cout << endl;
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}
