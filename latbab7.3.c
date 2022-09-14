#include <stdio.h>

int main()
{
    int a,b,c,first,second,third;
    printf("Enter number (a,b,c) : ");scanf("%d,%d,%d", &a,&b,&c);

    if (a>b)
    {
        if (b>c)
        {
            first = a;
            second = b;
            third = c;
        }
        else
        {
            if (a>c)
            {
                first = a;
                second = c;
                third = b;    
            }
            else
            {
                first = c;
                second = a;
                third = b;
            }
        }
    }

    else if (b>c)
    {
        if (c>a)
        {
            first = b;
            second = c;
            third = a;
        }
        else
        {
            first = b;
            second = a;
            third = c;
        } 
    }

    else
    {
        first = c;
        second = b;
        third = a;
    }
    printf("smallest to largest order : %d, %d, %d\n", third,second,first);
    return 0;
}