#include <iostream>
using namespace std;

int main() 
{
    int n, choice;
    int max = INT_MIN, min = INT_MAX;
    float avg = 0;
    int arr[100];

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    cout << "Masukkan nilai array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        avg += arr[i];
    }

    avg /= n;

    cout << "Menu pemrosesan array:" << endl;
    cout << "1. Cari nilai maksimum" << endl;
    cout << "2. Cari nilai minimum" << endl;
    cout << "3. Cari rata-rata" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Nilai maksimumnya adalah " << max << endl;
            break;
        case 2:
            cout << "Nilai minimumnya adalah " << min << endl;
            break;
        case 3:
            cout << "Rata-ratanya adalah " << avg << endl;
            break;
        case 4:
            cout << "Keluar dari program..." << endl;
            break;
        default:
            cout << "Pilihan tidak ada. Keluar dari program..." << endl;
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "Aprianti Ika Larasati (2311110023)" << endl;
    
    return 0;
}