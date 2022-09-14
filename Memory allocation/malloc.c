#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int *arr;
    int n;
    bool val = false;
    int iMin;
    int min;
    int temp;
    int search;
    int iSearch;

    printf("Size : %d\n", sizeof(arr));
    
    printf("N elemen array : ");scanf("%d", &n);

    arr = (int *) malloc (n * sizeof(int));
    
    
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 100;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] : %d\n",i,*(arr + i));
    }

    for (int i = 0; i < n - 1; i++)
    {
        iMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[iMin]) iMin = j;
        }
        temp = arr[iMin];
        arr[iMin] = arr[i];
        arr[i] = temp;
    }

    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] : %d\n",i,arr[i]);
    }

    printf("Value Searched : ");scanf("%d", &search);

    int p,q,r;
    p = 0;
    q = n - 1;
    while (!val && p <= q)
    {
        r = (p + q)/2;
        if( arr[r] == search) {
            val = true;
        }
        else if( arr[r] > search) {
            q = r - 1;
        }
        else {
            p = r + 1; 
        }
    }

    if( val ) iSearch = r;
    else iSearch = -1;

    printf("\nIndex of value searched : %d\n", iSearch);
    
    free(arr);
    return 0;
}
