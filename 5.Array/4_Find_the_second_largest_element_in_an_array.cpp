#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0], secondLargest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element in array: " << secondLargest << endl;

    return 0;
}