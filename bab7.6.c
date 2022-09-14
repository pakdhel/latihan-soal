#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Bandingkan tiga buah bilangan\n");
    printf("A:\t");scanf("%d", &a);
    printf("B:\t");scanf("%d", &b);    
    printf("C:\t");scanf("%d", &c);    
    if (a>b && a>c)
    {
        printf("%d adalah maks\n", a);
    }
    else
    {
        if(b>c)
        {
            printf("%d adalah maks\n", b);
        }
        else
        {
            printf("%d adalah maks\n", c);
        }
    }
    
    return 0;
}