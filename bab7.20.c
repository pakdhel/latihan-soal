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

    if (time2.ss - time1.ss < 0)
    {
        time2.mm = time2.mm - 1;
        time2.ss = time2.ss + 60;
        if (time2.mm - time1.mm < 0)
        {
            time2.hh = time2.hh  - 1;
            time2.mm = time2.mm + 60;
        }
        
    }
    else
    {
        if (time2.mm - time1.mm < 0)
        {
            time2.hh = time2.hh  - 1;
            time2.mm = time2.mm + 60;
        }
    }

    if (time2.hh - time1.hh < 0)
    {
        time2.hh = time2.hh + 24;
    }
    
    
    time3.hh = time2.hh - time1.hh;
    time3.mm = time2.mm - time1.mm;
    time3.ss = time2.ss - time1.ss;

    printf("======================================\n");
    printf("Call Duration %d:%d:%d\n", time3.hh,time3.mm,time3.ss);

    return 0;
}