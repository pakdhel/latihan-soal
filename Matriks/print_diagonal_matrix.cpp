#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

void print_diagonal_elemen(MatrixInt m, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) cout << m[i][j] << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    MatrixInt m; int N;
    cout << "Baris dan kolom matriks persegi : "; cin >> N;
    for (int i = 0 ;i < N; i++) {
        for (int j = 0; j < N; j++) {
            m[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << "[ ";
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << " ";
        }
        cout << "]" << endl;
    }
    print_diagonal_elemen(m, N);
    return 0;
}
