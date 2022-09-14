#include <stdio.h>

struct time
{
	int hours,minute,second;
};

int main()
{
	struct time time1;
	time1.hours = 1;
	time1.minute = 20;
	time1.second = 5;

	printf("\nPrevious time = %d:%d:%d\n", time1.hours,time1.minute,time1.second);
	
	int totalInSecond,newTime,remainSecond,remainMinute;
	totalInSecond = time1.hours*3600 + time1.minute*60 + time1.second;

	newTime = totalInSecond + 1;

	time1.hours = newTime/3600;
	remainSecond = newTime % 3600;
	time1.minute = remainSecond/60;
	remainMinute = remainSecond % 60;
	time1.second = remainMinute;		
	
	printf("Next time = %d:%d:%d\n\n", time1.hours,time1.minute,time1.second);

return 0;
}