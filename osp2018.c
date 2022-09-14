#include <stdio.h>

int main()
{
    int x,n,m;
    m = 3;
    printf("\nDigit terakhir dari 3 pangkat ");scanf("%d", &x);
    
    while (n = x/4 != 0)
    {
        n = x/4;
        x = x % 4;
    }

    if (x != 0)
    {
        for (int i=1;i<=x-1;i++)
        {
            m = m * 3;
        }  
    }
    else
    {
        m = 1;
    }
    
    m = m % 10;
    
    printf("adalah %d\n", m);
    
    return 0;
}