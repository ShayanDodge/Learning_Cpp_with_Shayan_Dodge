#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Pleasem, insert the array dimenssion" << endl ;
    cin >> n ;
    int arr [n] ;
    cout << "pleasem, Insert the array" << endl;
    for ( int i = 0; i < n; i++)
    {
     cout<< "Pleasem, insert the array " << i+1 << endl;
     cin >> arr [i];    
    }
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest element in array: " << largest << endl;
    return 0;
}