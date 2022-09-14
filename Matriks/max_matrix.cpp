#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

int max_matrix(MatrixInt a, int row, int col) {
    int max = a[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > max) max = a[i][j];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    MatrixInt m =
    {
        {1,22,3},
        {4,5,6},
        {1,4,23}
    };

    cout << max_matrix(m,3,3) << endl;
    return 0;
}
