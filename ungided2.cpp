#include <iostream>
#include <string>
using namespace std;

//Class standar yang belum public access
class Naspad{
    string nama;
    string lokasi;
    int price;
};

//Class yang sudah public access
class Wr_Naspad1{
public:
    string nama;
    string lokasi;
    int price;
};

struct Wr_Naspad2{
public:
    string nama;
    string lokasi;
    int price;
};

int main(){
    //Merepresentasikan warung naspad 1 dan warung naspad 2
    Wr_Naspad1 naspad1;
    Wr_Naspad2 naspad2;

    //Mengisi nilai ke struct warung naspad 1
    naspad1.nama = "Pagi Sore";
    naspad1.lokasi = "Jl. Pramuka";
    naspad1.price = 11000;

    //Mencetak isi warung naspad 1
    cout << "=== Warung Nasi Padang 1 ==="
         << "\nNama Warung: " << naspad1.nama
         << "\nLokasi: " << naspad1.lokasi
         << "\nHarga: " << naspad1.price << endl;

    //Mengisi nilai ke struct warung naspad 2
    naspad2.nama = "Salero Bunda";
    naspad2.lokasi = "Berkoh";
    naspad2.price = 10000;

    //Mencetak isi struct warung naspad 2
    cout << "\n=== Warung Nasi Padang 2 ==="
         << "\nNama Warung: " << naspad2.nama
         << "\nLokasi: " << naspad2.lokasi
         << "\nHarga: " << naspad2.price << endl;
         
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;

    return 0;
}