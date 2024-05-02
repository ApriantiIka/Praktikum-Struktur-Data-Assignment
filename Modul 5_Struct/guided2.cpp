#include <iostream>
#include <string>
using namespace std;

struct Hewan{
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernapasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct Hewan_darat{
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
    Hewan info_hewan;
};
Hewan_darat hewan1;

struct Hewan_laut{
    string bentuk_sirip;
    string pertahanan_diri;
    Hewan info_hewan;
};
Hewan_laut hewan2;

int main(){
    hewan1.info_hewan.nama_hewan = "Ayam";
    hewan1.info_hewan.jenis_kelamin = "Betina";
    hewan1.info_hewan.kembangbiak = "Bertelur";
    hewan1.info_hewan.pernapasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = false;
    hewan1.jumlah_kaki = 2;
    hewan1.apakah_menyusui = false;
    hewan1.suara = "petok-petok";

    // Hewan 2 (Laut)
    hewan2.info_hewan.nama_hewan = "Ikan Kakap";
    hewan2.info_hewan.jenis_kelamin = "Jantan";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernapasan = "Insang";
    hewan2.info_hewan.tempat_hidup = "Perairan";
    hewan2.info_hewan.karnivora = true;
    hewan2.bentuk_sirip = "sirip dan ekor";
    hewan2.pertahanan_diri = "Gigi tajam";

    // Menampilkan data
    cout << "\tHewan Darat" << endl;
    cout << "Nama hewan: " << hewan1.info_hewan.nama_hewan << endl;
    cout << "Jenis kelamin: " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "Cara berkembangbiak: " << hewan1.info_hewan.kembangbiak << endl;
    cout << "Alat pernapasan: " << hewan1.info_hewan.pernapasan << endl;
    cout << "Tempat hidup: " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah karnivora? " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah kaki: " << hewan1.jumlah_kaki << endl;
    cout << "Apakah menyusui? " << hewan1.apakah_menyusui << endl;
    cout << "Suara: " << hewan1.suara << endl;

    cout << "\tHewan Air" << endl;
    cout << "Nama hewan: " << hewan2.info_hewan.nama_hewan << endl;
    cout << "Jenis kelamin: " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "Cara berkembangbiak: " << hewan2.info_hewan.kembangbiak << endl;
    cout << "Alat pernapasan: " << hewan2.info_hewan.pernapasan << endl;
    cout << "Tempat hidup: " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah karnivora? " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk sirip: " << hewan2.bentuk_sirip << endl;
    cout << "Pertahanan diri: " << hewan2.pertahanan_diri << endl;

    return 0;
}