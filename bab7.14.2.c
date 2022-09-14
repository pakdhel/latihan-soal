#include <stdio.h>

typedef struct time
{
    int jj,mm,ss;
}time;
int main()
{
    time time1;
    printf("Time (hh:mm:ss) = ");scanf("%d:%d:%d", &time1.jj,&time1.mm,&time1.ss);

    if (time1.ss + 1 <60)
    {
        time1.ss += 1;
        printf("New Time = %d:%d:%d\n", time1.jj,time1.mm,time1.ss);
    }
    else
    {
        time1.ss = 0;
        if (time1.mm + 1 < 60)
        {
            time1.mm += 1;
            printf("New Time = %d:%d:%d\n", time1.jj,time1.mm,time1.ss);
        }
        else
        {
            time1.mm = 0;
            if (time1.jj + 1 < 24)
            {
                time1.jj += 1;
                printf("New Time = %d:%d:%d\n", time1.jj,time1.mm,time1.ss);
            }
            else
            {
                time1.jj = 0;
                printf("New Time = %d:%d:%d\n", time1.jj,time1.mm,time1.ss);
            }
            
        }
        
    }
    
    return 0;
}