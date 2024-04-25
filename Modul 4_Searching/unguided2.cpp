#include <iostream>
#include <string>
using namespace std;

int hitungVokal(string kalimat) {
    int count = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;
    int jumlahVokal;

    cout << "\t MENGHITUNG JUMLAH HURUF VOKAL\n";
    cout << "\n Masukkan kalimat : ";
    getline(cin, kalimat);

    jumlahVokal = hitungVokal(kalimat);

    cout << "\n Jumlah huruf vokal pada kalimat tersebut adalah " << jumlahVokal << " huruf." << endl;

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}