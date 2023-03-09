#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 1;
    b = 2;
    bool result;

    result = (a == b);   // false
    cout << "1 == 2 is " << boolalpha << result << endl;

    result = (a != b);  // true
    cout << "1 != 2 is " << boolalpha << result << endl;

    result = a > b;   // false
    cout << "1 > 2 is " << boolalpha << result << endl;

    result = a < b;   // true
    cout << "1 < 2 is " << boolalpha << result << endl;

    result = a >= b;  // false
    cout << "1 >= 2 is " << boolalpha << result << endl;

    result = a <= b;  // true
    cout << "1 <= 2 is " << boolalpha << result << endl;

    return 0;
}