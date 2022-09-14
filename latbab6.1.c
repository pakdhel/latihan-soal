#include <stdio.h>

int main()
{
	int seconds, minutes, hours,day, remainDay, total;
	printf("Seconds = ");scanf("%d", &seconds);
	
	day = seconds/(3600*24);  
	remainDay = seconds % (3600*24);
	hours = remainDay/3600;
	remainDay = remainDay % 3600;
	minutes = remainDay/60;
	remainDay = remainDay % 60;
	seconds = remainDay;

	printf("new time = %d days %d hours %d minute %d seconds", day,hours,minutes,seconds); 

return 0;
}