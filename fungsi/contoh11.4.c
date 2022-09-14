// contoh 11.4

#include <stdio.h>
#include <stdbool.h>

bool kabisat(int);

int main()
{
    int tahun;
    bool value;
    scanf("%d", &tahun);
    value = kabisat(tahun);
    printf("\n%d", value);
}

bool kabisat(int a)
{
    if ((a % 400 == 0 && a % 100 != 0) || (a % 4 == 0)) return true;
    else return false;    
}