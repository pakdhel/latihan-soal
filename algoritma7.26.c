#include <stdio.h>
#include <math.h>
int main()
{
    int option;
    float length,width;
    printf("\tMENU OF SQUARE\n");
    printf("1. AREA\n");
    printf("2. AROUND\n");
    printf("3. DIAGONAL\n");
    printf("4. OUT\n");

    printf("\nEnter option: ");scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nLength: ");scanf("%f", &length);
        printf("Width: ");scanf("%f", &width);
        float area;
        area = length*width;
        printf("\nArea of Square %g\n", area);
        break;
    
    case 2:
        printf("\nLength: ");scanf("%f", &length);
        printf("Width: ");scanf("%f", &width);
        float around;
        around = 2 * (length + width);
        printf("\nAround of Square %g\n", around);
        break;
    
    case 3:
        printf("\nLength: ");scanf("%f", &length);
        printf("Width: ");scanf("%f", &width);
        float diagonal;
        diagonal = sqrt(length*length + width*width);
        printf("\nDiagonal of Square %g\n", diagonal);
        break;
    
    default:
        printf("\nExit Program\n");
        break;
    }
    return 0;
}