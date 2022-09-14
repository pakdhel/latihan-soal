#include <stdio.h>
#define N 10

typedef int array[N];

void cariMedian(array, float*);

int main(int argc, char const *argv[])
{
    float me;
    array a = {1,2,3,4,5,6,8,9,10};
    cariMedian(a, &me);
    printf("Median : %g", me);
    return 0;
}

void cariMedian(array a, float *me) {
    if (N % 2 == 0) {
        *me = (a[N] + a[(N/2) - 1])/2.0;
    } else {
        *me = a[N/2];
    }
}