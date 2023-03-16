#include <iostream>
using namespace std;

int main()
{
    int n, m, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> n;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> m;

    cout << endl << "Enter elements of 1st matrix: " << endl;

        // Storing elements of first matrix entered by user.
    for(i = 0; i < n; ++i)
       for(j = 0; j < m; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < n; ++i)
       for(j = 0; j < m; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == m - 1)
                cout << endl;
        }

    return 0;
}