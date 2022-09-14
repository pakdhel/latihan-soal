#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");scanf("%d", &num);

    if (num % 4 == 0)
    {
        printf("%d is a multiple of four\n", num);
    }
    else
    {
        printf("%d is not a multiple of four\n", num);
    }
    

    return 0;
}