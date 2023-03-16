#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int m = sizeof(arr);
    int m_m = sizeof(arr[0]);
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout<<m<<endl;
    cout<<m_m<<endl;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}