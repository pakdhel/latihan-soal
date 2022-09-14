// MENGHITUNG NILAI RATA-RATA DARI SEBUAH ARRAY

#include <stdio.h>

float rerata();

int main()
{
    float mean;
    printf("MENGHITUNG NILAI RATA-RATA DARI SEBUAH ARRAY\n");

    mean = rerata();
    printf("Rata-rata = %g\n", mean);
    return 0;
}

float rerata()
{
    float array[20];
    int i = 0, sum = 0;
    char ch;    

    do 
    {
        fflush(stdin);
        printf("Masukkan elemen array : ");scanf("%f", &array[i]);fflush(stdin); 
        sum = sum  + array[i];
        i++;
        printf("Baca elemen lagi?(y/t) ");scanf("%c", &ch);fflush(stdin);
    } while (ch == 'y' || ch == 'Y');

    return (float) sum/i;    
}