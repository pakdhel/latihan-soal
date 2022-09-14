#include <stdio.h>
#include <stdlib.h>
#define max 100

void search(int lenght,int array[],int exist, int *index){
    int i = 0;
    
    array[lenght+1] = exist;
    while (array[i] != exist)
    {
        i++;
    }
    if(i == lenght+1) *index = -1;
    else *index = i;
    for(int i=0;i<lenght+1;i++) printf("%d ",array[i]);
    printf("\n");
}

int main(){

    int larik[max];
    int elemen, exist, index;
    printf("Banyaknya data dalam larik : ");scanf("%d", &elemen);

    for(int i=0;i<elemen;i++) larik[i] = rand() % 100;

    printf("Searched value : ");scanf("%d",&exist);
    search(elemen,larik,exist, &index);

    if(index != -1) printf("%d sama dengan array index %d\n",exist,index);
    else {printf("TIDAK ADA DALAM ARRAY\n");}

    return 0;
}