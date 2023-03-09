#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int a, b, sum;
  cout << "Enter two integers. " << endl;
  cout << "Enter first integers: ";
  cin >> a;
  cout << "Enter second integers: ";
  cin >> b;
  sum = a + b;
  cout << a << " + " <<  b << " = " << sum;     
  getch();
  return 0;
}