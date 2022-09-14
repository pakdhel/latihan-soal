#include <stdio.h>

void search(int [], int, int, int*);

int main(int argc, char const *argv[])
{
    int x,index,size;
    int larik[7] = {10,9,8,7,6,5,4};
    size = sizeof(larik)/sizeof(larik[0]);

    printf("Searched value : ");scanf("%d", &x);
    
    int i,j,k;
    i = 0;
    j = size - 1;

    while (larik[k] != x && i <=j)
    {
        k = (i+j)/2;
        if(x > larik[k]){
            j = k - 1;
        }else if(x < larik[k]){
            i = k + 1;
        }
    }
    if(larik[k] == x)
        printf("nilai yang dicari ada pada index %d\n",k);
    else printf("%d", -1);

    /*
    search(larik,size,x,&index);
    
    if(index != -1)
        printf("nilai yang dicari ada pada index %d\n",index);
    else 
        printf("nilai yang dicari tidak terdapat dalam array\n");
        */
    return 0;
}

void search(int larik[], int length, int x, int *index){
    int i,j,k;
    i = 0;
    j = length-1;
    while (larik[k] != x && i < j)
    {
        k = (i+j)/2;
        if(x < larik[k])
        {
            j = k - 1;
        }
        else if(x > larik[k])
        {
            i = k + 1; 
        }
    }
    
    if (larik[k] == x) *index = k;
    else *index = -1;   
}