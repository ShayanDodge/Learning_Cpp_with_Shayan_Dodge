#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main()
{
    int matrix[ROWS][COLS];

    // Initializing matrix elements
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = i * COLS + j;
        }
    }

    // Printing matrix elements
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}