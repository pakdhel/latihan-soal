#include <stdio.h>
int leap(int x);
int main()
{
    // Jika angka tahun itu habis dibagi 400, maka tahun itu sudah pasti tahun kabisat.
    // Jika angka tahun itu tidak habis dibagi 400 tetapi habis dibagi 100, maka tahun itu sudah pasti bukan merupakan tahun kabisat.
    // Jika angka tahun itu tidak habis dibagi 400, tidak habis dibagi 100 akan tetapi habis dibagi 4, maka tahun itu merupakan tahun kabisat.
    // Jika angka tahun tidak habis dibagi 400, tidak habis dibagi 100, dan tidak habis dibagi 4, maka tahun tersebut bukan merupakan tahun kabisat.

    int tahun;
    printf("Enter the leap year: ");scanf("%d", &tahun);

    int kabisat;
    kabisat = leap(tahun);


    return 0;
}

int leap(int x)
{
    if (x % 400 == 0)
    {
        printf("%d adalah tahun kabisat\n", x);
    }
    else
    {
        if (x % 100 == 0)
        {
            printf("%d bukan tahun kabisat\n", x);
        }
        else
        {
            if (x % 4 == 0)
            {
                printf("%d adalah tahun kabisat\n", x);
            }
            else
            {
                printf("%d bukan tahun kabisat", x);
            }
        }
    }
    return x;
}