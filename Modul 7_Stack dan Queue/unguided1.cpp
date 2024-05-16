#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;
char stack[MAX_SIZE];
int top = -1;

void push(char data) { // untuk menambahkan elemen stack
    if (top == MAX_SIZE - 1) {
        cout << "Stack penuh!" << endl;
    } else {
        stack[++top] = data;
    }
}

char pop() { // untuk menghapus elemen stack
    if (top == -1) {
        cout << "Stack kosong!" << endl;
        return '\0';
    } else {
        return stack[top--];
    }
}

bool isPalindrom(string word) { // fungsi untuk mengetahui apakah kata yang diinput palindrom atau tidak
    for (int i = 0; i < word.length(); i++) {
        push(word[i]);
    }

    for (int i = 0; i < word.length(); i++) {
        if (word[i] != pop()) {
            return false;
        }
    }

    return true;
}

int main() {
    string word;
    cout << "Masukkan kata: ";
    cin >> word;

    if (isPalindrom(word)) {
        cout << "Kata tersebut adalah palindrom" << endl;
    } else {
        cout << "Kata tersebut bukan palindrom" << endl;
    }
    
    cout << " " << endl;
    cout << "Nama   : Aprianti Ika Larasati" << endl;
    cout << "NIM    : 2311110023" << endl;
    cout << " " << endl;
    cout << " " << endl;
    return 0;
}