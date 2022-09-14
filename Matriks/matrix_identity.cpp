#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];


bool upper_triangular(MatrixInt a, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i and a[i][j] != 0) {
                return false;
                break;
            }
        }
    }
    return true;
}

bool lower_triangular(MatrixInt a, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > j and a[i][j] != 0) {
                return false;
                break;
            }
        }
    }
    return true;
}

bool matrix_identity(MatrixInt a, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i == j and a[i][j] != 1) or (!upper_triangular(a, N) or !lower_triangular(a, N))) {
                return false;
                break;
            }
        }
    }
    return true;
}


void make_matrix_identity(MatrixInt a, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) a[i][j] = 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    MatrixInt a;
    int N;
    cout << "Matriks Identitas (N * N) " << endl;
    cout << "N : "; cin >> N;

    make_matrix_identity(a, N);
    for (int i = 0; i < N; i++) {
        cout << "[ ";
        for (int j = 0; j < N; j++) {
            cout << a[i][j] << " ";
        }
        cout << "]" << endl;
    }

    MatrixInt b =
    {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    if (matrix_identity(b, 3)) cout << "Is matrix identity" << endl;
    else cout << "Is not matrix identity" << endl;
    return 0;
}
