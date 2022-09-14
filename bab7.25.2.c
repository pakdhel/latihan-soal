#include <stdio.h>


typedef struct tanggal
{
    int dd,mm,yy;
}date;

int main()
{
    date date1,date2;
    printf("\nToday's Date (dd-mm-yy) : ");scanf("%d-%d-%d",&date1.dd,&date1.mm,&date1.yy);

    switch (date1.mm)
    {
    case 1:
        if (date1.dd < 31)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }    
            
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 3:
        if (date1.dd < 31)
        {   
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 5:
        if (date1.dd < 31)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 7:
        if (date1.dd < 31)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 8:
        if (date1.dd < 31)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 10:
        if (date1.dd < 31)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;

    case 4:
        if (date1.dd < 30)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 6:
        if (date1.dd < 30)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 9:
        if (date1.dd < 30)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    case 11:
        if (date1.dd < 30)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }
        else
        {
            date2.mm = date1.mm + 1;
            date2.dd = 1;
            date2.yy = date1.yy;
        }
        break;
    
    
    case 2:
        if ((date1.yy % 400 == 0 && date1.yy % 100 != 0) || (date1.yy % 4 == 0))
        {
            if (date1.dd < 29)
            {
                date2.dd = date1.dd + 1;
                date2.mm = date1.mm;
                date2.yy = date1.yy;
            }
            else
            {
                date2.dd = 1;
                date2.mm = date1.mm + 1;
                date2.yy = date1.yy;
            }
        }
        else
        {
            if (date1.dd < 28)
            {
                date2.dd = date1.dd + 1;
                date2.mm = date1.mm;
                date2.yy = date1.yy;
            }
            else
            {
                date2.dd = 1;
                date2.mm = date1.mm + 1;
                date2.yy = date1.yy;
            }
        }
        break;
    

    case 12:
        if (date1.dd < 31)
        {
            date2.dd = date1.dd + 1;
            date2.mm = date1.mm;
            date2.yy = date1.yy;
        }    
        else
        {
            date2.mm = 1;
            date2.dd = 1;
            date2.yy = date1.yy + 1;
        }
        break;
    
    default:
        break;
    }

    printf("Tomorrow's Date (dd-mm-yy) : %d-%d-%d\n", date2.dd,date2.mm,date2.yy);


    return 0;
}