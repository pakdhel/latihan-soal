#include <stdio.h>

int main()
{
	int x,years,months,days,remainDay;
printf("\n=========================================\n\n");
	printf("a project is completed in x days. Calculate how many\nyears, months, days the project was worked on\n");
	printf("x (days) : ");scanf("%d", &x);
	
	years = x/365;
	remainDay = x % 365;
	months = remainDay/30;
	remainDay = remainDay % 30;
	days = remainDay;
	
	printf("the project was completed in %d years %d months %d days", years,months,days);


return 0;
}