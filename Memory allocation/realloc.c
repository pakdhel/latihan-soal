#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n,n2;

    printf("N elemen of array : ");scanf("%d", &n);
    arr = (int*) malloc (n * (sizeof(int)));

    if(arr == NULL){
        printf("Error! Memory not alocated\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 100;
    }
    
    printf("Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Address [%d] : %d, Arr[%d] : %d\n", i, arr + i, i, *(arr + i));
    }
    
    int temp;
    int j; 
    for (int i = 1; i < n; i++)
    {
        temp = *(arr + i);
        for (j = i - 1; j >= 0; j--)
        {
            if(temp < *(arr + j)) {
                *(arr + j + 1) = *(arr + j) ;
            }
            else {
                break;
            }
        }
        *(arr + j + 1) = temp;
    }
    
    printf("\nArray : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Address [%d] : %d, Arr[%d] : %d\n", i, arr + i, i, arr[i]);
    }
    
    printf("tambah data : ");scanf("%d", &n2);

    
    arr = realloc(arr, 10000);
    for (int i = n; i < n2 + n; i++)
    {
        *(arr + i) = rand() % 1000;
    }

    printf("\nArray : \n");
    for (int i = 0; i < n2 + n; i++)
    {
        printf("Address [%d] : %d, Arr[%d] : %d\n", i, arr + i, i, arr[i]);
    }

    free(arr);

    getchar();
    return 0;
}
