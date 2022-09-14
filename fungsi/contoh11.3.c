// contoh 11.3

#include <stdio.h>
#include <stdbool.h>

bool genap(int);

int main()
{
    int n;
    bool m;
    scanf("%d", &n);
    m = genap(n);
    printf("\n%d", m);    
    return 0;
}

bool genap(int a)
{
    //bool value = false;
    if (a%2==0) return true;
    else return false;
}