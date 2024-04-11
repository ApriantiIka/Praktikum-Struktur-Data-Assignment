#include <iostream>
using namespace std;

//Fungsi utk mengurutkan array secara descending menggunakan insertion sort
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j>  0 && arr[j - 1] < arr[j]) {  // Perubahan terjadi di sini
            //Menukar elemen
            tmp = arr [j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}

void print_array (char a[], int length) {
    for (int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6; // Jumlah elemen dalam array
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutkan karakter sebelum sorting: " << endl;
    print_array(a, length);

    //Memanggil fungsi insertion_sort_descending untuk mengurutkan array secara descending
    insertion_sort(a, length);

    cout << "\nUrutkan karakter setelah sorting secara descending: " << endl;
    print_array(a, length);

    return 0;
}