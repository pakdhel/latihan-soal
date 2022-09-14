// 12.5.7 MENYALIN ARRAY

#include <stdio.h>

int copy(int [],int);

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int hasil = copy(array,size);
    printf("Copy %d\n", hasil); 
    return 0;    
}

int copy(int arr[],int size)
{
    int *array2;
   
    for(int i=0;i<size;i++)
    {
        array2[i] = arr[i];
    }
    return *array2;
}


