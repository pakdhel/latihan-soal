#include <stdio.h>

typedef struct time
{
    int jj,mm,ss;
}date;

int main()
{
    int total,add;
    date time1,time2;
    printf("Enter time (jj:mm:dd) = ");scanf("%d:%d:%d",&time1.jj, &time1.mm, &time1.ss);
   
    time1.ss = time1.ss + 1;

    // PERUBAHAN DETIK
    if (time1.ss >= 60)
    {
        time1.ss = time1.ss - 60;
        time1.mm = time1.mm + 1;
    }
    // PERUBAHAN MENIT
    if (time1.mm >= 60)
    {
        time1.mm = time1.mm - 60;
        time1.jj = time1.jj + 1;
    }

    // PERUBAHAN JAM
    if (time1.jj >= 24)
    {
        time1.jj -= 24;
    }

    printf("\n=====================\n");
    printf("New time = %d:%d:%d\n", time1.jj,time1.mm,time1.ss);
    

    return 0;
}