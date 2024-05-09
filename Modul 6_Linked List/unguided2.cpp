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

    void pop() { // TAMBAH BELAKANG
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
            cout << "Product Name: " << current->productName << ", Price: " << current->price << endl;
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        // PROGRAM MENU
        cout << "1. Add product" << endl;
        cout << "2. Delete product" << endl;
        cout << "3. Update product" << endl;
        cout << "4. Clear products" << endl;
        cout << "5. Display products" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string productName;
                int price;
                cout << "Enter product name: ";
                cin >> productName;
                cout << "Enter product price: ";
                cin >> price;
                list.push(productName, price);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                string oldProductName, newProductName;
                int newPrice;
                cout << "Enter old product name: ";
                cin >> oldProductName;
                cout << "Enter new product name: ";
                cin >> newProductName;
                cout << "Enter new product price: ";
                cin >> newPrice;
                bool updated = list.update(oldProductName, newProductName, newPrice);
                if (!updated) {
                    cout << "Product not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}