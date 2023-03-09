// Program to print the boolean value of an expression
#include <iostream>
using namespace std;

int main() {
  int num1 = 10;
  int num2 = 20;
  bool result = (num1 > num2);
  cout << "Is " << num1 << " greater than " << num2 << "? " << boolalpha << result << endl;
  return 0;
}