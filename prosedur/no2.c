#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void mean(float *m);
bool isPitagoras(int a, int b, int c);

int main(int argc, char const *argv[])
{
    bool val; int a, b, c;
    printf("a : ");scanf("%d", &a);
    printf("b : ");scanf("%d", &b);
    printf("c : ");scanf("%d", &c);
    val = isPitagoras(a,b,c);
    if (val) {
        printf("triple pitagoras");
    } else {
        printf("not ctriple pitagoras");
    }
    return 0;
}

// void mean(float *m) {
//     float x; int i = 0; float sum = 0;
//     do
//     {
//         i++;
//         printf("Data ke-%d (kecuali 9999) : ", i); scanf("%f", &x);
//         sum = sum + x;
//     } while (x != 9999);
//     sum = sum - 9999;
//     *m = sum/ (float) (i - 1);
// }

bool isPitagoras(int a, int b, int c) {
    if (c*c == a*a + b*b) {
        return true;
    } else {
        return false;
    }
}