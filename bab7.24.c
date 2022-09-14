#include <stdio.h>

int main()
{
    int number_month, year, days;
    char *name_of_month;
    printf("Enter number of month : ");scanf("%d", &number_month);
    printf("Enter year : ");scanf("%d", &year);

    switch (number_month)
    {
        case 1:days = 31;name_of_month = "JANUARY";break;
        case 2:
            if ((year % 400 == 0 && year % 100 != 0) || (year % 4 == 0))
                days = 29;
            else
                days = 28;
            name_of_month = "FEBRUARY";
            break;
        case 3:days = 31;name_of_month = "MARCH";break;
        case 4:days = 30;name_of_month = "APRIL";break;
        case 5:days = 31;name_of_month = "MEI";break;
        case 6:days = 30;name_of_month = "JUNY";break;
        case 7:days = 31;name_of_month = "JULY";break;
        case 8:days = 31;name_of_month = "AUGUST";break;
        case 9:days = 30;name_of_month = "SEPTEMBER";break;
        case 10:days = 31;name_of_month = "OTCOBER";break;
        case 11:days = 30;name_of_month = "NOVEMBER";break;
        case 12:days = 31;name_of_month = "DESEMBER";break;
    }

    printf("\nNumber of days in %s is %d\n", name_of_month,days);
    return 0;
}