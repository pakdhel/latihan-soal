#include <stdio.h>

struct tanggal
	{
		int dd,mm,yy;
	};
int main()
{
	struct tanggal date1,date2,date3;
	printf("\nEnter the date provided that date1 is closer to today than date2\n");
	printf("Date1 (dd mm yy) : ");scanf("%d %d %d", &date1.dd, &date1.mm, &date1.yy);
	printf("Date2 (dd mm yy) : ");scanf("%d %d %d", &date2.dd, &date2.mm, &date2.yy);

	int totalTanggal1, totalTanggal2,selisih;
	totalTanggal1 = date1.yy*365 + date1.mm*30 + date1.dd;
	totalTanggal2 = date2.yy*365 + date2.mm*30 + date2.dd;
	
	selisih = totalTanggal1 - totalTanggal2;
	date3.yy = selisih/365;
	selisih = selisih % 365;
	date3.mm = selisih/30;
	selisih = selisih % 30;
	date3.dd = selisih;
	
	printf("\nThe day distance from date1 to date2 is %d years %d months %d days\n\n", date3.yy,date3.mm,date3.dd);

return 0;
}