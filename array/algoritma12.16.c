// MENCARI INDEX ARRAY YANG BERISI NILAI MAKSIMUM

#include <stdio.h>

int index_max(int, int*);

int main()
{
    int data, hasil;
    printf("Masukkan banyaknya data : ");scanf("%d",&data);
    index_max(data, &hasil);

    printf("Index yang memiliki nilai maksimum dari array adalah %d\n", hasil);    
    return 0;
}

int index_max(int n, int *imax)
{
    *imax = 0;
    int array[n];
    printf("Masukkan data ke-%d : ",*imax);scanf("%d", &array[*imax]);

    for(int i=1;i<n;i++)
    {
        printf("Masukkan data ke-%d : ",i);scanf("%d", &array[i]);
        if (array[i] >= array[*imax])
        {
            *imax = i;
        } 
    }
    return *imax;
}