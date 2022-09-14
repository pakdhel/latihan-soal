#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks + 1][Nmaks + 1];

void matrix_transpose(MatrixInt m, int bar, int kol, MatrixInt mT, int &barT, int &kolT) {
    for (int i = 0; i < bar; i++) {
        for (int j = 0; j < kol; j++) {
            mT[j][i] = m[i][j];
        }
    }
    barT = kol;
    kolT = bar;
}

int main(int argc, char const *argv[])
{
    int bar, kol, barT, kolT;
    MatrixInt m;
    MatrixInt mT;

    cout << "Masukkan banyak baris? : "; cin >> bar;
    cout << "Masukkan banyak kolom? : "; cin >> kol;

    for (int i = 0; i < bar; i++) {
        for (int j = 0; j < kol; j++) {
            m[i][j] = rand() % 50;
        }
    }

    for (int i = 0; i < bar; i++) {
        cout << "[ ";
        for (int j = 0; j < kol; j++) {
            cout << m[i][j] << " ";
        }
        cout << "]" << endl;
    }

    cout << endl;
    matrix_transpose(m, bar, kol, mT, barT, kolT);
    for (int i = 0; i < barT; i++) {
        cout << "[ ";
        for (int j = 0; j < kolT; j++) {
            cout << mT[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
