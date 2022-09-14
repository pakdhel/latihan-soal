#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

bool upper_triangular_matrix(MatrixInt a, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i && a[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    MatrixInt m =
    {
        {1,0,0,0},
        {2,3,0,0},
        {3,4,5,0},
        {4,5,6,7}
    };

    if (upper_triangular_matrix(m, 4)) cout << "upper triangular matrix" << endl;
    else cout << "not upper triangular matrix" << endl;
    return 0;
}
