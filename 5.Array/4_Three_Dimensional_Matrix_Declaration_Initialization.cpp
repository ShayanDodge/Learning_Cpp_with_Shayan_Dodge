#include <iostream>

using namespace std;

int main()
{
    int array_3d[2][3][4];

    // Initialize the array with specific values
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                array_3d[i][j][k] = i*j*k;
            }
        }
    }

    return 0;
}