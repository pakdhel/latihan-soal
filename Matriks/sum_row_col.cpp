#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

void sum_row_col(MatrixInt m, int &r, int &c, MatrixInt newM) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            newM[i][j] = m[i][j];
        }
    }
    r++;
    c++;
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum = sum + m[i][j];
        }
        newM[i][r - 1] = sum;
    }
    for (int i = 0; i < c; i++) {
        int sum = 0;
        for (int j = 0; j < r; j++) {
            sum = sum + m[j][i];
        }
        newM[c - 1][i] = sum;
    }
}

void sum_col_row(MatrixInt m, int &r, int &c) {
    for (int i = 0; i < r; i++) {
        m[i][c] = 0;
        for (int j = 0; j < c; j++) {
            m[i][c] = m[i][c] + m[i][j];
        }
    }
    for (int i = 0; i < c; i++) {
        m[r][i] = 0;
        for (int j = 0; j < r; j++) {
            m[r][i] = m[r][i] + m[j][i];
        }
    }
    r++, c++;
}

int main(int argc, char const *argv[])
{
    MatrixInt m, newM;
    int kol, bar, newC, newR;
    cout << "Masukkan banyak baris? : "; cin >> bar;
    cout << "Masukkan banyak kolom? : "; cin >> kol;
    
    for (int i = 0; i < bar; i++) {
        for (int j = 0; j < kol; j++) {
            m[i][j] = rand() % 50;
        }
    }

    cout << endl;
    for(int i = 0; i < bar; i++) {
        cout << "[ ";
        for (int j = 0; j < kol; j++) {
            cout << m[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;

    sum_col_row(m, bar, kol);
    cout << endl;
    for(int i = 0; i < bar; i++) {
        cout << "[ ";
        for (int j = 0; j < kol; j++) {
            cout << m[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;

    // sum_row_col(m, bar, kol, newM);
    // for(int i = 0; i < bar; i++) {
    //     cout << "[ ";
    //     for (int j = 0; j < kol; j++) {
    //         cout << newM[i][j] << " ";
    //     }
    //     cout << "]" << endl;
    // }

    return 0;
}
