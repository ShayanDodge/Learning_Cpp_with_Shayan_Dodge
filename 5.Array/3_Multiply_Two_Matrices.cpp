#include <iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100], mult[100][100], n1, m1, n2, m2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> n1 >> m1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> n2 >> m2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.

    while (m1!=n2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> n1 >> m1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> n2 >> m2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < n1; ++i)
        for(j = 0; j < m1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < n2; ++i)
        for(j = 0; j < m2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < n1; ++i)
        for(j = 0; j < m2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < n1; ++i)
        for(j = 0; j < m2; ++j)
            for(k = 0; k < m1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < n1; ++i)
    for(j = 0; j < m2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == m2-1)
            cout << endl;
    }

    return 0;
}