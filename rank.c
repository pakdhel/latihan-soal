#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *arr, num, len;
    scanf("%d", &num);
    arr = (int*) malloc(num*(sizeof(int)));
    for (int i=0;i<num;i++)
    {
        scanf("%d", arr + i);
    }
    
    for (int i=0;i<num;i++)
    {
        printf("%d", *(arr + i));
    }
    int leng = strlen(*arr);
    len = sizeof(arr)/sizeof(arr[0]);
    printf("\nlen : %d\nleng : %d", len, leng);
    return 0;
}