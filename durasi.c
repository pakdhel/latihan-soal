#include <stdio.h>

struct waktu
{
	int ss,mm,jj;
};

int main()
{
	struct waktu time1,time2;
	scanf("%d %d %d", &time1.ss,&time1.mm,&time1.jj);
	scanf("%d %d %d", &time2.ss,&time2.mm,&time2.jj);

	int total1,total2;
	total1 = time1.jj*365 + time1.mm*30 + time1.ss;	
	total2 = time2.jj*365 + time2.mm*30 + time2.ss;	

	printf("%d\n", total1);
	printf("%d\n", total2);

return 0;
}