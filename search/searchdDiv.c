#include <stdio.h>

void search(int [], int, int, int*);

int main(int argc, char const *argv[])
{
    int x,index,size;
    int larik[10] = {10,9,8,7,6,5,4,3,2,1};
    size = sizeof(larik)/sizeof(larik[0]);

    printf("Searched value : ");scanf("%d", &x);
    
    search(larik,size,x,&index);
    
    if(index != -1)
        printf("nilai yang dicari ada pada index %d\n",index);
    else 
        printf("nilai yang dicari tidak terdapat dalam array\n");
    return 0;
}

void search(int larik[], int length, int x, int *index){
    int i,j,k;
    i = 0;
    j = length-1; // 7-1 = 6
    k = (i+j)/2; // (0 + 6) / 2 = 3

    printf("L[i] : %d\nL[k] : %d\nL[j] : %d\n", larik[i], larik[k], larik[j]);
    printf("=====================\n");

    //                 0 1 2 3 4 5 6
    // int larik[7] = {9,8,7,6,5,4,3};


    while (larik[k] != x && i < j)
    {
        if(larik[k] < x)
        {
            i = i;
            //length = length/2;
            j = j - k;
            k = (i+j)/2;
            printf("L[i] : %d\nL[k] : %d\nL[j] : %d\n", larik[i], larik[k], larik[j]);
            printf("=====================\n");
        }
        else
        {
            i = k + 1; // 4
            j = length - 1; // 6
            k = (i+j)/2; // 5
            printf("L[i] : %d\nL[k] : %d\nL[j] : %d\n", larik[i], larik[k], larik[j]);
            printf("=====================\n");
        }
    }
    
    if (larik[k] == x) *index = k;
    else *index = -1;   
}