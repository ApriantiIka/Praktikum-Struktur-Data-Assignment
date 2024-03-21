#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    //It allows user to enter operator i.e. +, -, *, /
    cout << "Masukkan Operator: ";
    cin >> op;
    // It allows user to enter the operands
    cout <<"\nMasukkan Bilangan ke-1  dan ke-2: ";
    cin >> num1 >> num2;
    
    // Switch statement begins
    switch(op)
    {
    case '+':
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
        break;
    case '*':
        cout<< num1 * num2;
        break;
    case '/':
        cout<< num1 / num2;
        break;
    default:
        cout<< "Error! operator is not correct";
    }
return 0; 
}