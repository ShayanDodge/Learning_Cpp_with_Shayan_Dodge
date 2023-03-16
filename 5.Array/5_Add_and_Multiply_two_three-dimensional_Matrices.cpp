#include <iostream>

using namespace std;

int main() {

const int ROWS = 3;
const int COLS = 3;
const int DEPTH = 3;
int result[ROWS][COLS][DEPTH];

    int mat1[ROWS][COLS][DEPTH] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };
    
    int mat2[ROWS][COLS][DEPTH] = {
        {{2, 3, 4}, {5, 6, 7}, {8, 9, 10}},
        {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},
        {{20, 21, 22}, {23, 24, 25}, {26, 27, 28}}
    };

    cout << "Add (A) or Multiply (M) : ";
    char A_M ;
    cin >> A_M ;


    switch (A_M)
    {
    case 'A':
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                result[i][j][k] = mat1[i][j][k] + mat2[i][j][k];
            }
        }
    }
    cout << "Addition of two 3D arrays:\n";        break;
    default:
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                result[i][j][k] = mat1[i][j][k] * mat2[i][j][k];
            }
        }
    }
    cout << "Multiplication of two 3D arrays:\n";
        break;
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                cout << result[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}
