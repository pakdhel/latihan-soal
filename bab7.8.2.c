#include <stdio.h>
int main()
{
    int tahun;
    printf("Enter the leap year: ");scanf("%d", &tahun);

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
    {
        printf("%d adalah tahun kabisat\n", tahun);
    }
    else
    {
        printf("%d bukan tahun kabisat\n", tahun);
    }
    
    return 0;
}