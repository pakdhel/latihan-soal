#include <stdio.h>
#include <string.h>
int main()
{
    fflush(stdin);
    char city[30];
    printf("Enter a name of city: ");gets(city);

    if (strcmp(city,"Padang") == 0)
        printf("Postal Code:\t25000\n");
    else if (strcmp(city, "Bandung") == 0)
        printf("Postal Code:\t40100\n");
    else if (strcmp(city, "Solo") == 0)
        printf("Postal Code:\t51000\n");
    else if (strcmp(city, "Denpasar") == 0)
        printf("Postal Code:\t72000\n");
    else if (strcmp(city, "Palu") == 0)
        printf("Postal Code:\t92300\n");
    else
        printf("\n\tThe name of the city entered is not in the list\n");
    return 0;

}