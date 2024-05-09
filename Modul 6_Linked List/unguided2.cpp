#include <iostream>
#include <string>
using namespace std;

// DOUBLE LINKED LIST
class Node {
    public:
        string productName;
        int price;
        Node* prev; // POINTER PREVIOUS
        Node* next;
};
class DoublyLinkedList {
    public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
        }
        void push(string productName, int price) { // TAMBAH DEPAN
            Node* newNode = new Node;
            newNode->productName = productName;
            newNode->price = price;
            newNode->prev = nullptr;
            newNode->next = head;
            if (head!= nullptr) {
                head->prev = newNode;
            } else {
                tail = newNode;
            }
            head = newNode;
        }
        void append(string productName, int price) { // TAMBAH BELAKANG
            Node* newNode = new Node;
            newNode->productName = productName;
            newNode->price = price;
            newNode->prev = tail;
            newNode->next = nullptr;
            if (tail!= nullptr) {
                tail->next = newNode;
            } else {
                head = newNode;
            }
            tail = newNode;
        }
        void insertAtPosition(string productName, int price, int position) { // TAMBAH DATA URUTAN TERTENTU
            Node* newNode = new Node;
            newNode->productName = productName;
            newNode->price = price;
            if (position == 0) {
                push(productName, price);
                return;
            }
            Node* current = head;
            int currentPosition = 0;
            while (current!= nullptr) {
                if (currentPosition == position - 1) {
                    newNode->prev = current;
                    newNode->next = current->next;
                    if (current->next!= nullptr) {
                        current->next->prev = newNode;
                    } else {
                        tail = newNode;
                    }
                    current->next = newNode;
                    return;
                }
                current = current->next;
                currentPosition++;
            }
        }
        void deleteAtPosition(int position) { // HAPUS DATA URUTAN TERTENTU
            if (position == 0) {
                pop();
                return;
            }
            Node* current = head;
            int currentPosition = 0;
            while (current!= nullptr) {
                if (currentPosition == position - 1) {
                    Node* temp = current->next;
                    current->next = temp->next;
                    if (temp->next!= nullptr) {
                        temp->next->prev = current;
                    } else {
                        tail = current;
                    }
                    delete temp;
                    return;
                }
                current = current->next;
                currentPosition++;
            }
        }
        void pop() { // HAPUS DEPAN
            if (head == nullptr) {
                return;
            }
            Node* temp = head;
            head = head->next;
            if (head!= nullptr) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
            delete temp;
        }
        bool update(string oldProductName, string newProductName, int newPrice) { // UPDATE DEPAN
            Node* current = head;
            while (current!= nullptr) {
                if (current->productName == oldProductName) {
                    current->productName = newProductName;
                    current->price = newPrice;
                    return true;
                }
                current = current->next;
            }
            return false;
        }
        void deleteAll() { // HAPUS
            Node* current = head;
            while (current!= nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
            head = nullptr;
            tail = nullptr;
        }
        void display() {
            Node* current = head;
            while (current!= nullptr) { 
                cout << "Nama produk: " << current->productName << ", Harga: " << current->price << endl;
                current = current->next;
            }
        }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        // PROGRAM MENU
        cout << "\t Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        int choice;
        cout << "Masukkan Pilihan Anda: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string productName;
                int price;
                cout << "Masukkan nama produk: ";
                cin >> productName;
                cout << "Masukkan harga: ";
                cin >> price;
                list.append(productName, price);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                string oldProductName, newProductName;
                int newPrice;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> oldProductName;
                cout << "Masukkan nama produk yang baru: ";
                cin >> newProductName;
                cout << "Masukkan harga yang baru: ";
                cin >> newPrice;
                bool updated = list.update(oldProductName, newProductName, newPrice);
                if (!updated) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string productName;
                int price, position;
                cout << "Masukkan nama produk: ";
                cin >> productName;
                cout << "Masukkan harga: ";
                cin >> price;
                cout << "Masukkan posisi: ";
                cin >> position;
                list.insertAtPosition(productName, price, position);
                break;
            }
            case 5: {
                int position;
                cout << "Masukkan posisi: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            }
            case 6: {
                list.deleteAll();
                break;
            }
            case 7: {
                list.display();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
        cout << " " << endl;
        cout << "Nama   : Aprianti Ika Larasati" << endl;
        cout << "NIM    : 2311110023" << endl;
        cout << " " << endl;
        cout << " " << endl;
    }
    return 0;
}