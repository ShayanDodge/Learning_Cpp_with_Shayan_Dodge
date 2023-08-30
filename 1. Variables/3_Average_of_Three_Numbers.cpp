#include <iostream>
#include<conio.h>

using namespace std;
 
int main() {
   int num_1;
   cout << "Enter num_1 : ";
   cin >> num_1;
 
   int num_2;
   cout << "Enter num_2 : ";
   cin >> num_2;
 
   int num_3;
   cout << "Enter num_3 : ";
   cin >> num_3;
    
   float average = (num_1 + num_2 + num_3) / 3;
   cout << "Average : " << average << endl;

   getch();
}