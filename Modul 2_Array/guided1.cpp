// array 2 dimensi
// for pertama menampilkan baris, dia akan berulang sampai i mencapai 2
// for untuk kolom (j)

// array 3 dimensi

// Program input array tiga dimensi
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++) // for pertama untuk matriks
    {
        for (int y = 0; y < 3; y++) // for kedua untuk baris
        {
            for (int z = 0; z < 3; z++) // for ketiga untuk kolom
            {
                cout << "Input Array[" << x << "][" << y << "][" << z <<
 "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z <<
 "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}