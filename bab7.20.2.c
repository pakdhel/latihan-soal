#include <stdio.h>

typedef struct waktu
{
    int hh,mm,ss;
}time;
int main()
{
    time time1,time2, time3;
    printf("\n\tCALL DURATION CALCULATION\n");
    printf("Call Started (hh:mm:ss) : ");scanf("%d:%d:%d", &time1.hh,&time1.mm,&time1.ss);
    printf("Call Ended (hh:mm:ss) : ");scanf("%d:%d:%d", &time2.hh,&time2.mm,&time2.ss);

    // pengurangan detik
    if (time2.ss >= time1.ss)
        time3.ss = time2.ss - time1.ss;
    else
    {
        time2.mm -= 1;
        time2.ss += 60;
        time3.ss = time2.ss - time1.ss;
    }

    // pengurangan menit
    if (time2.mm >= time1.mm)
        time3.mm = time2.mm - time1.mm;
    else
    {
        time2.hh -= 1;
        time2.mm += 60;
        time3.mm = time2.mm - time1.mm;
    }

    // pengurangan jam
    if (time2.hh >= time1.hh)
        time3.hh = time2.hh - time1.hh;
    else
    {
        time2.hh += 24;
        time3.hh = time2.hh - time1.hh;
    }

    printf("Call Duration %d:%d:%d\n", time3.hh,time3.mm,time3.ss);

    return 0;
}