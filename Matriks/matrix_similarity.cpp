#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int MatrixInt[Nmaks][Nmaks];

bool matrix_similarity(MatrixInt m1, MatrixInt m2, int r1, int r2, int c1, int c2) {
    bool value = true;
    if (r1 == r2 && c1 == c2) {
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                if (m1[i][j] != m2[i][j]) {
                    value = false;
                    break;
                }
            }
        }
    }else{
        value = false;
    }
    return value;
}

bool kesamaan_matriks(MatrixInt m1, MatrixInt m2, int r1, int r2, int c1, int c2) {
    if (r1 != r2 || c1 != c2) return false;
    else {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                if (m1[i][j] != m2[i][j]) {
                    return false;
                    break;
                }
            }
        }
        return true;
    }
}


/* bool matrix_similarity(MatrixInt m1, MatrixInt m2, int r1, int r2, int c1, int c2) {
    bool same;
    if (r1 != r2 and c1 != c2) same = false;
    else {
        same = true;
        int i = 0;
        while (i < r1 and same) {
            int j = 0;
            while (j < c1 and same) {
                if (m1[i][j] != m2[i][j]) {
                    same = false;
                } else {
                    j++;
                }
            }
            if (same) i++;
        }
    }
    return same;
} */


int main(int argc, char const *argv[])
{
    bool similar;
    int r1, c1,r2, c2;
    cout << "Array 1" << endl;
    cout << "Banyak baris : "; cin >> r1;
    cout << "Banyak kolom : "; cin >> c1;
    cout << "Array 2" << endl;
    cout << "Banyak baris : "; cin >> r2; 
    cout << "Banyak kolom : "; cin >> c2;

    MatrixInt a1, a2;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            a1[i][j] = rand() % 50;
        }
    }
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            a2[i][j] = rand() % 50;
        }
    }

    cout << endl;
    for (int i = 0; i < r1; i++){
        cout << "[ ";
        for (int j = 0; j < c1; j++){
            cout << a1[i][j] << " ";
        }
        cout << "]" << endl;
    }

    cout << endl;
    for (int i = 0; i < r2; i++){
        cout << "[ ";
        for (int j = 0; j < c2; j++){
            cout << a2[i][j] << " ";
        }
        cout << "]" << endl;
    }


    MatrixInt m1 = 
    {
        {1,2,3},
        {4,5,6}
    };

    MatrixInt m2 = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    similar = matrix_similarity(m1, m2, 2, 3, 3, 3);

    if (similar) cout << "same"<< endl;
    else cout << "not same" << endl;

    similar = kesamaan_matriks(m1, m2, 2,3,3,3);
    if (similar) cout << "same"<< endl;
    else cout << "not same" << endl;

    return 0;
}
