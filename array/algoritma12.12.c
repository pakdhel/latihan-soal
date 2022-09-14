// MENCARI NILAI MAKSIMUM ARRAY

#include <stdio.h>

int maks(int);

int main()
{
    int n;
    printf("Banyaknya data : ");scanf("%d", &n);
    int hasil = maks(n);    
    printf("Nilai maksimum dari array : %d\n", hasil);
    return 0;
}

int maks(int n)
{
    int data[n], max = -9999;
    for (int i=0;i<n;i++)
    {
        printf("Masukkan data ke-%d: ",i);scanf("%d", &data[i]);fflush(stdin);

        if (data[i] >= max)
        {
            max = data[i];
        }    
    }
                                   
    return max;
}