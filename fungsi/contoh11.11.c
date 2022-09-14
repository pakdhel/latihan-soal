// contoh 11.11

#include <stdio.h>

float f(float);

int main()
{
    float a,b,hasil;
    a = 10;
    b = 15;
    printf("\nf(x) = 2*x*x + 5*x - 8\n");
    printf("=================================\n");
    printf("|\t%c\t|\t%s \t|\n", 'x', "f(x)");
    printf("=================================\n");

    while (a <= b)
    {
        hasil = f(a);        
        printf("|\t%.2f\t|\t%.2f \t|\n", a, hasil);
        a += 0.2;
    }
}

float f(float x)
{
    float F;
    F = 2*x*x + 5*x - 8;
    return F;
}