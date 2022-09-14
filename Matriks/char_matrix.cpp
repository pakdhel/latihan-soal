#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef char MatrixChar[Nmaks][Nmaks];

void print_word(MatrixChar a, int row) {
    for (int i = 0; i < row; i++) {
        int j = 0;
        while (a[i][j] != '\0') {
            cout << a[i][j];
            j++;
        }
        cout << endl;
    }
}

int max_length_word(MatrixChar a,int row) {
    int panjang = 0;
    for (int i = 0; i < row; i++) {
        int j = 0;
        int p = 0;
        while (a[i][j] != '\0') {
            p++, j++;
        }
        if (p > panjang) {
            panjang = p;
        }
    }
    return panjang;
}

void set_row_col(MatrixChar a, int &row, int &col) {
    
}

int main(int argc, char const *argv[])
{
    // MatrixChar a = 
    // {
    //     {'a', 'm', 'p', 'u', 'h', ' '},
    //     {'b', 'a', 'n', 'd', 'u', 'n', 'g', ' '},
    //     {'s', 'e', 'n', ' '}
    // };

    MatrixChar b = 
    {
        "bandung",
        "Polewali",
        "Wonomulyo"
    };

    int m,n;

    // print_word(a, 3);
    print_word(b, 3);

    int length = max_length_word(b, 3);
    cout << length << endl;

    return 0;
}
