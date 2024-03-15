// Tipe Data Abstrak
#include <iostream>
#include <stdio.h> //library
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

// Main Program
int main()
{
    // Menggunakna struct
    struct Mahasiswa mhs1, mhs2;
    // Mengisi nilai ke struct
    mhs1.name = "Habibah";
    mhs1.address = "Sumampir";
    mhs1.age = 19;
    mhs2.name = "Grahen";
    mhs2.address = "Kendari";
    mhs2.age = 19;

    cout <<"Mahasiswa 1\n";
    cout <<"Nama: " << mhs1.name <<endl;
    cout <<"Alamat: " << mhs1.address <<endl;
    cout <<"Umur: " << mhs1.age <<endl;
    cout <<"\nMahasiswa 2\n";
    cout <<"Nama: " << mhs2.name <<endl;
    cout <<"Alamat: " <<mhs2.address <<endl;
    cout <<"Umur: " <<mhs2.age <<endl;

}