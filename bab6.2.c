#include <stdio.h>

int main()
{
	int totalTime, newTotalTime, remainHours,remainMinute,remainSecond,add;
	struct time
	{
		int hours, minute,second;
	};	

	struct time time1;

	printf("Hours = ");scanf("%d", &time1.hours);
	printf("Minutes = ");scanf("%d", &time1.minute);
	printf("Seconds = ");scanf("%d", &time1.second);
	printf("Addition minutes = ");scanf("%d", &add);

	totalTime = time1.hours*3600 + time1.minute*60 + time1.second; //dalam detik
	newTotalTime = totalTime + add*60; // totalTime ditambah 60detik

	time1.hours = newTotalTime/3600;
	remainHours = newTotalTime % 3600;
	time1.minute = remainHours/60;
	remainMinute = remainHours % 60;
	time1.second = remainMinute;

	printf("Time = %d:%d:%d\n", time1.hours,time1.minute,time1.second);
return 0;	
}