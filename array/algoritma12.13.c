// MENCARI NILAI MAKSIMUM ARRAY DENGAN ARRAY[0] ADALAH MAKS SEMENTARA

#include <stdio.h>

int maks(int);

int main()
{
    int hasil, n;
    printf("Masukkan banyaknya data : ");scanf("%d", &n);
    hasil = maks(n);
    printf("Nilai maksimum dari sejumlah data yang dimasukkan : %d", hasil);
    return 0;
}

int maks(int n)
{
    int array[n], max, i = 0;
    printf("Masukkan data ke-%d : ", i);scanf("%d", &array[0]);fflush(stdin);
    max = array[0];
    for (i=1;i<n;i++)
    { 
        printf("Masukkan data ke-%d : ", i);scanf("%d", &array[i]);fflush(stdin);
        if(array[i] >= max)
        {
            max = array[i];  
        }
    }
    return max;
}