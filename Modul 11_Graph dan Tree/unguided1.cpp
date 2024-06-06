#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num_nodes;
    cout << "Silakan masukan jumlah simpul : ";
    cin >> num_nodes;

    vector<string> aprianti_2311110023 (num_nodes);
    cout << "Silakan masukan nama simpul\n";
    for (int i = 0; i < num_nodes; i++) {
        cout << "Simpul " << i + 1 << " : ";
        cin >> aprianti_2311110023[i];
    }

    // Inisialisasi matriks bobot dengan nilai 0
    vector<vector<int>> weight_matrix(num_nodes, vector<int>(num_nodes, 0));

    cout << "Silakan masukkan bobot antar simpul\n";
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            cout << aprianti_2311110023[i] << "--> " << aprianti_2311110023[j] << " = ";
            cin >> weight_matrix[i][j];
        }
    }

    // Tampilkan matriks
    cout << endl;
    for (int i = 0; i < num_nodes; i++) {
        cout << "\t" << aprianti_2311110023[i];
    }
    cout << endl;

    for (int i = 0; i < num_nodes; i++) {
        cout << aprianti_2311110023[i] << " ";
        for (int j = 0; j < num_nodes; j++) {
            cout << "\t" << weight_matrix[i][j];
        }
        cout << endl;
    }

    cout << " " << endl;
    cout << "Nama : Aprianti Ika Larasati" << endl;
    cout << "NIM  : 2311110023" << endl;
    return 0;
}