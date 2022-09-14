// MENYALIN ARRAY

#include <stdio.h>

int *copy(int [], int);

int main()
{
    int array1[10] = {1,2,3,4,5,6,7,8,9,0};

    int size = sizeof(array1)/sizeof(array1[0]);
    int *hasil = copy(array1,size);
    for (int i=0;i<size;i++)
    {
        printf("Array[%d] = %d\n",i,hasil[i]);
    }
    return 0;
}

int *copy(int array1[], int a)
{
    int array2[10];
    for(int i=0;i<a;i++)
    {
        array2[i] = array1[i];   
    }
        return array2;
}