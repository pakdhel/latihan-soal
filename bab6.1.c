#include <stdio.h>

struct time
{
	float hours,minute,second;
};

int main()
{
	struct time time1,time2;
	time1.hours = 14;
	time1.minute = 54;
	time1.second = 5;
	
	printf("Previous time : %d:%d:%d\n", (int)time1.hours,(int)time1.minute,(int)time1.second);
	
	float totalInSecond;
	totalInSecond = time1.hours*3600 + time1.minute*60 + time1.second;
	
	printf("Total in second : %f\n\n", totalInSecond);
	
	float newTime;
	newTime = totalInSecond + 1;
	printf("New time : %f\n\n", newTime);
	
	time2.hours = newTime / 3600;
	time2.minute = time2.hours - (int)time2.hours;

	time2.minute = time2.minute*60;
	printf("%.2f\n", time2.minute);


	time2.second = time2.minute - (int)time2.minute;
	time2.second = time2.second*60;

	printf("%.2f\n\n", time2.second);

printf("=====================================\n\n");
	printf("New time = %d:%d:%g", (int)time2.hours,(int)time2.minute,time2.second);
return 0;
}