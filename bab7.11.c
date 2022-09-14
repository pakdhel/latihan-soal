#include <stdio.h>
#include <math.h>
int main()
{
    float x,y;
    printf("\nEnter the cartesian coordinate (x,y) : ");scanf("%f,%f",&x,&y );

// CARA 1
    // if (x>0)
    // {
    //     if (y>0)
    //     {
    //         printf("point (%g,%g) is in the first quadrant\n", x,y);
    //     }
    //     else
    //     {
    //         printf("point (%g,%g) is in the fourth quadrant\n",x,y);
    //     }
        
    // }
    // else
    // {
    //     if (y>0)
    //     {
    //         printf("point (%g,%g) is in the second quadrant\n", x,y);
    //     }
    //     else
    //     {
    //         printf("point (%g,%g) is in the third quadrant\n", x,y);
    //     }
    // }

// CARA 2
    // if (x>0 && y>0)
    // {
    //     printf("point (%g,%g) is in the first quadrant\n", x,y);
    // }
    // else if (x<0 && y>0)
    // {
    //     printf("point (%g,%g) is in the second quadrant\n", x,y);
    // }
    // else if (x>0 && y<0)
    // {
    //     printf("point (%g,%g) is in the fourth quadrant\n",x,y);
    // }
    // else
    // {
    //     printf("point (%g,%g) is in the third quadrant\n", x,y);
    // }
    

    return 0;
}