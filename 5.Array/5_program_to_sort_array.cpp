#include<iostream>
using namespace std;
int main() {
    int temp;
    //input the unsorted array
    cout << "enter the size of array" << endl;
    int size;
    cin >> size;
    int Array[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter at array index " << i+1 << endl;
        cin >> Array[i];
    }
    // Printing the unsorted array to user
    cout << "|Unsorted array|" << endl;
    for (int i = 0; i < size; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
    //sort array in ascending order using selection sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size ; j++) {
            if (Array[i] > Array[j]) {
                //swapping with smallest element of array.
                temp = Array[j];
                Array[j] = Array[i];
                Array[i] = temp;
            }
        }
    }
    // printing the array in ascending order.
    cout << "|sorted array|" << endl;
    for (int i = 0; i < size; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
    return 0;
}