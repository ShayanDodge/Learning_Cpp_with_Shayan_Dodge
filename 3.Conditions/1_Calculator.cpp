#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char operation;
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: division by zero" << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error: invalid operation" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    getch();
    return 0;
}