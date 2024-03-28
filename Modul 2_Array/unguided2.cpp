#include <iostream>
using namespace std;

int main() 
{
    int i, j, k;

    cout << "Masukkan ukuran array (x y z): ";
    cin >> i >> j >> k;

    int arr[i][j][k];

    for (int x = 0; x < i; x++) 
    {
        for (int y = 0; y < j; y++) 
        {
            for (int z = 0; z < k; z++) 
            {
                cout << "Masukkan nilai array: ";
                cin >> arr[x][y][z];
            }
        }
    }

    cout << "\nData Array: \n";
    for (int x = 0; x < i; x++) 
    {
        for (int y = 0; y < j; y++) 
        {
            for (int z = 0; z < k; z++) 
            {
                cout << arr[x][y][z] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}