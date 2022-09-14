#include <stdio.h>

float mean(int, float*);

int main(void) 
{
    int a;
    float b, hasil;
    mean(a, &b);    
    printf("Rata-rata %g\n", b);
}

float mean(int N, float *m)
{
    int x, sum = 0;
    printf("Jumlah data : ");scanf("%d", &N);
    for (int i=1;i<=N;i++)
    {
        printf("Data ke-%d : ", i);scanf("%d", &x);
        sum = sum + x;
    }
    *m = (float)sum/N;
    return *m;
}