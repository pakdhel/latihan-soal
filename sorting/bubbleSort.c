#include <stdio.h>
#include <stdlib.h>
#define max 100
void sorting(int [], int);
void random(int [], int);
void print(int [], int);

int main()
{
    int larik[max];
    int elemen;
    printf("Banyaknya data : ");scanf("%d",&elemen);
    random(larik,elemen);
    print(larik,elemen);
    sorting(larik,elemen);
    print(larik,elemen);
    return 0;
}

void random(int arr[], int n)
{
    for(int i=0;i<n;i++)
        arr[i] = rand() % 100;
}

void sorting(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    
    /* for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } */
}

void print(int arr[], int n)
{
    printf("\nArray : ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}