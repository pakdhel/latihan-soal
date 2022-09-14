#include <stdio.h>

#define Nmaks 100
typedef int ArrayInt[Nmaks];

int main(int argc, char const *argv[])
{
    int a[3] = {5,16,24};
    int b[4] = {2,15,27,30};

    ArrayInt c;
    int i = 0, j = 0, k = 0;
    while (i < 3 || j < 4) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++, k++;
        } else {
            c[k] = b[j];
            j++, k++;
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
