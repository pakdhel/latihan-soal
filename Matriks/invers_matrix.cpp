#include <iostream>
using namespace std;

typedef float LarikFLoat[2][2];

void inversMatrix(LarikFLoat a, LarikFLoat invers) {
    float det = a[0][0] * a[1][1] - a[1][0] * a[0][1];
    float temp = a[0][0];
    a[0][0] = a[1][1];
    a[1][1] = temp;

    a[0][1] = -a[0][1];
    a[1][0] = -a[1][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            invers[i][j] = a[i][j]/det;
        }
    }
}

int main(int argc, char const *argv[])
{
    LarikFLoat a, invers;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "a[" << i << "][" << j << "] :"; cin >> a[i][j];
        }
    }

    inversMatrix(a, invers);
    for (int i = 0; i < 2; i++) {
        cout << "[ ";
        for (int j = 0; j < 2; j++) {
            printf("%g ", invers[i][j]);
        }
        cout << " ]" << endl;
    }
    return 0;
}
