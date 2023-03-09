#include <iostream>
using namespace std;

int main() {
    int a, b, A, B;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    // Working of increment and decrement operators

    // incrementing a by 1 and storing the result in a then printing a
    cout << "a = " << ++a << endl;

    // printing a then incrementing a by 1 and storing the result in a
    cout << "a = " << a++ << endl;

    // decrementing b by 1 and storing the result in b then printing b 
    cout << "b = " << ++b << endl;

    // printing b then decrementing b by 1 and storing the result in b
    cout << "b = " << b++ << endl;
    return 0;
}