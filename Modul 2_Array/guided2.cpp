// cout untuk print/cetak
// cin untuk membaca inputan

// Program Mencari Nilai Maksimal pada Array
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0]; // fungsi mencari nilai max. umpamakan nilai max ada di arr ke 0
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks) // untuk membandingkan. apakah arr 0 > max? jika salah, akan mengulang
        {
            maks = array[i]; // jika benar, lanjut ke sini
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}

// ungided no.2, buat inputan buat panjang arraynya (matriks, baris, kolom)
// no 3 apaki switch case atau if else. datanya diinput ke kode aja (bukan inputan user)