#include <stdio.h>

int main()
{
    int angka,number;
    printf("\nEnter a number between 1 to 4 : ");scanf("%d", &angka);

    switch (angka)
    {
    case 1:
        printf("ONE\n");
        break;
    case 2:
        printf("TWO\n");
        break;
    case 3:
        printf("THREE\n");
        break;
    case 4:
        printf("FOUR\n");
        break;
    default:
        printf("!Wrong Number Entered!\n");
        break;
    }

    printf("Enter a number: ");scanf("%d", &number);
    switch (number % 2)
    {
    case 0:
        printf("The entered number is even\n");
        break;
    case 1:
        printf("The entered number is odd\n");
        break;
    
    default:
        break;
    }
    return 0;
}