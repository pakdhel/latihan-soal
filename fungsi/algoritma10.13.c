// mempertukarkan nilai

#include <stdio.h>

int tukar(int *, int *);

int main(void)
{
    int a,b;
    a = 3;
    b = 4;
    printf("Sebelum ditukar\nA = %d\nB = %d\n", a, b);
    tukar(&a, &b);
    printf("Setelah ditukar\nA = %d\nB = %d\n", a, b);
    tukar(&a, &b);
    printf("Setelah ditukar kembali\nA = %d\nB = %d\n", a, b);
}

int tukar(int *A, int *B)
{
    int C;
    C = *A;
    *A = *B;
    *B = C;    
}