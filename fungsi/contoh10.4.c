#include <stdio.h>
#include <stdbool.h>

int max(float, float, bool *);

int main()
{
    float a, b;
    bool m;
    max(a, b, &m);
    if (m) printf("Nilai maximum adalah A\n");
    else printf("Nilai maximum adalah B\n");
}

int max(float A, float B, bool *M)
{
    *M = false;
    printf("A : ");scanf("%f", &A);
    printf("B : ");scanf("%f", &B);
    
    if (A > B) *M = !(*M);
    else *M = *M;
}