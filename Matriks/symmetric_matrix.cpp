#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

bool symm_matrix(MatrixInt m, int r, int c) {
    if (r != c) return false;
    else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (m[i][j] != m[j][i]) {
                    return false; 
                }
            }
        }
        return true;
    }
}

bool benar() {
    return false;
    return true;
}

int main(int argc, char const *argv[])
{
    MatrixInt a =
    {
        {1,2,3},
        {2,4,6}
        // {7,6,8}
    };

    if (symm_matrix(a, 2,3)) cout << "Symmetric" << endl;
    else cout << "Not symmetric" << endl;

    if (benar()) cout << "benar" << endl;
    else cout << "salah" << endl;
    return 0;
}
