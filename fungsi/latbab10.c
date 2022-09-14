// soal latihan Bab 10


#include <stdio.h>

// No 1

/*
int genap(int, int*);

int main()
{
    int a, b;
    genap(a, &b);
    printf("adalah %d\n", b);
}

int genap(int N, int *sum)
{
    fflush(stdin);
    int n = N;
    int j = 0;
    *sum = 0; 
    printf("Menghitung Jumlah N Buah Bilangan Genap Pertama\n");
    printf("N = ");scanf("%d", &N);

    for (int i=1;i<=N-1;i++)
    {
        j = j + 2;
        *sum = *sum + j;
    }
}
*/
/*
// NO 2

void rerata(float *);

int main()
{
    float a;
    rerata(&a);
    printf("Rata-rata = %g\n", a);
}

void rerata(float *n)
{
    int x, i=0, sum = 0;
    do
    {
        i++;
        printf("data ke-%d (kecuali 9999) ", i);scanf("%d", &x);
        sum = sum + x;    
    } while (x != 9999);
    sum = sum - 9999;
    i--;
    *n = (float) sum/i;
}
*/

// NO 3

/*
void terkecil(int *);

int main()
{
    int nilai;
    terkecil(&nilai);
    printf("Nilai terkecil adalah %d\n", nilai);
}

void terkecil(int *min)
{
    int i = 1, y;
    printf("Data ke-%d (kecuali 9999) ", i);scanf("%d", &y);
    *min = y;

    while (y != 9999)
    {
        i++;
        printf("Data ke-%d (kecuali 9999) ", i);scanf("%d", &y);

        if (y <= *min) *min = y;
        else *min = *min;
    }
}
*/


// NO 4

#include <math.h>

void tabungan(float, float, float, float*);

void anakAyakm();

int main()
{
    // float a,b,c,d;
    // tabungan(a, b, c, &d);
    // printf("Jumlah tabungan : Rp %f\n", d);

    anakAyakm();
}

void tabungan(float A, float i, float n, float *F)
{
    float x = 0, y = 0, z;
    
    printf("Modal anda (Rp) : ");scanf("%f", &A);
    printf("jumlah bunga (persen) : ");scanf("%f", &i);
    printf("Berapa tahun : ");scanf("%f", &n);
    z = 1 + i/100;
    for (int j=1;j<=n;j++)
    {
        for (int k=1;k<=j;k++)
        {
            y = pow(z, k);
        }
        x = x + y;  
    }
    *F = A * x;
}

void anakAyakm() {
    int a;
    printf("a : "); scanf("%d", &a);

    for (int i = a; i > 0; i--) {
        printf("Anak ayam turun %d, mati satu tinggal %d\n", i, i - 1);
        // statement
    }
}



/*
12345
12345
12345
12345
12345
12345
12345
12345
 */

/* 
for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("%d", j);
    }
    printf("\n");
}
 */


























































