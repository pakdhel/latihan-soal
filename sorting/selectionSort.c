#include <stdio.h>
#include <stdlib.h>
#define max 100

void random(int [], int);
void sel_sort(int [], int);
void display(int [], int);

int main()
{
    int larik[max];
    int n;
    printf("Banyak data : ");scanf("%d",&n);
    random(larik,n);
    display(larik,n);
    sel_sort(larik,n);
    display(larik,n);

    return 0;
}

void random(int array[], int n)
{
    for(int i=0;i<n;i++)
        array[i] = rand() % 100;
}

void sel_sort(int array[], int n)
{
    int temp, index;
    for(int min=0;min<n-1;min++){
        index = min;
        for(int i=min;i<n;i++){
            if (array[i] < array[index])
            {
                index = i; // mengambil index dari nilai minimum
            }
        }
        temp = array[min];
        array[min] = array[index];
        array[index] = temp;
    }
}

void display(int array[], int n)
{
    printf("\nArray : ");
    for(int i=0;i<n;i++) printf("%d ",array[i]);
}