#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // assigning the sum of a and b to a
    cout << "\na += b;" << endl;
    a += b;  // a = a + b
    cout << "a = " << a << endl;

    // assigning the modulo of a by b to a
    cout << "\na %= b;" << endl;
    a %= b;  // a = a % b
    cout << "a = " << a << endl;

    return 0;
}