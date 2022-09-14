// MENCARI NILAI MINIMUM DALAM ARRAY

#include  <stdio.h>

void minimum(int, int*);

int main()
{
    int data, hasil;
    printf("Masukkan banyaknya data : ");scanf("%d", &data);
    minimum(data, &hasil);
  
    printf("Nilai minimum dari sejumlah data yang dimasukkan adalah %d\n", hasil);
    return 0;
}

void minimum(int n, int*min)
{
    int array[n], i = 0;

    printf("Masukkan nilai data ke-%d : ",i);scanf("%d", &array[i]);
    *min = array[i];

    for(i=1;i<n;i++)
    {
        printf("Masukkan nilai data ke-%d : ",i);scanf("%d", &array[i]);
        if (array[i] <= *min)
        {
	    *min = array[i];
        } 
    }
}  