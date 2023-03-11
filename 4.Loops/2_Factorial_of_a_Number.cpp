#include <iostream>

using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while(i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}