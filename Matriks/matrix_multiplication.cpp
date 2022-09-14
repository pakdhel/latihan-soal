#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

void matrix_mult(MatrixInt a, MatrixInt b, MatrixInt c, int rowA, int rowB, int &rowC, int colA, int colB, int &colC) {
    if (colA != rowB) cout << "Tidak bisa dikalikan" << endl;
    else {
        rowC = rowA;
        colC = colB;
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colB; j++) {
                for (int k = 0; k < colA; k++) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
    }
}

void matrix_mult(MatrixInt a, MatrixInt b, MatrixInt c, int N) {
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    MatrixInt a, b, c; int rowA, rowB, colA, colB, rowC, colC;
    cout << "Matriks A" << endl;
    cout << "Baris matriks A : "; cin >> rowA;
    cout << "Kolom matriks A : "; cin >> colA;
    cout << "Matriks B" << endl;
    cout << "Baris matriks B : "; cin >> rowB;
    cout << "Kolom matriks B : "; cin >> colB;

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            a[i][j] = rand() % 5;
        }
    }

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            b[i][j] = rand() % 5;
        }
    }

    matrix_mult(a,b,c, rowA, rowB, rowC, colA, colB, colC);
    for (int i = 0; i < rowA; i++) {
        cout << "[ ";
        for (int j = 0; j < colA; j++) {
            cout << a[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;

    for (int i = 0; i < rowB; i++) {
        cout << "[ ";
        for (int j = 0; j < colB; j++) {
            cout << b[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;
    
    cout << "--------------------- X " << endl; 
    // hasil kali
    for (int i = 0; i < rowC; i++) {
        cout << "[ ";
        for (int j = 0; j < colC; j++) {
            cout << c[i][j] << " ";
        }
        cout << "]" << endl;
    }



    return 0;
}
