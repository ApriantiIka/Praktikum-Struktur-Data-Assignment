#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mahasiswa {
public:
    string NIM;
    int nilai;

    Mahasiswa(string NIM, int nilai) {
        this->NIM = NIM;
        this->nilai = nilai;
    }
};

class DataMahasiswa {
private:
    vector<Mahasiswa> data;
public:
    void insertData(string NIM, int nilai) {
        Mahasiswa mahasiswa(NIM, nilai);
        data.push_back(mahasiswa);
    }

    void removeData(string NIM) {
        for (auto it = data.begin(); it!= data.end(); it++) {
            if (it->NIM == NIM) {
                data.erase(it);
                return;
            }
        }
    }

    Mahasiswa* searchData(string NIM) {
        for (auto& mahasiswa : data) {
            if (mahasiswa.NIM == NIM) {
                return &mahasiswa;
            }
        }
        return nullptr;
    }

    vector<Mahasiswa> searchByNilai(int min, int max) {
        vector<Mahasiswa> hasil;
        for (auto& mahasiswa : data) {
            if (mahasiswa.nilai >= min && mahasiswa.nilai <= max) {
                hasil.push_back(mahasiswa);
            }
        }
        return hasil;
    }

    void printData() {
        for (auto& mahasiswa : data) {
            cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
        }
    }
};

int main() {
    DataMahasiswa dataMahasiswa;
    int pilihan;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Insert Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Cari Data" << endl;
        cout << "4. Cari Data Berdasarkan Rentang Nilai" << endl;
        cout << "5. Print Data" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string NIM;
                int nilai;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan Nilai: ";
                cin >> nilai;
                dataMahasiswa.insertData(NIM, nilai);
                break;
            }
            case 2: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                dataMahasiswa.removeData(NIM);
                break;
            }
            case 3: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                Mahasiswa* mahasiswa = dataMahasiswa.searchData(NIM);
                if (mahasiswa!= nullptr) {
                    cout << "NIM: " << mahasiswa->NIM << ", Nilai: " << mahasiswa->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                int min, max;
                cout << "Masukkan Nilai Minimum: ";
                cin >> min;
                cout << "Masukkan Nilai Maksimum: ";
                cin >> max;
                vector<Mahasiswa> hasil = dataMahasiswa.searchByNilai(min, max);
                for (auto& mahasiswa : hasil) {
                    cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
                }
                break;
            }
            case 5: {
                dataMahasiswa.printData();
                break;
            }
            case 6: {
                cout << "Terima kasih <3" << endl;
                cout << " " << endl;
                cout << "Nama  : Aprianti Ika Larasati" << endl;
                cout << "NIM   : 2311110023" << endl;
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid";
                break;
            }
        }
    }

    return 0;
}