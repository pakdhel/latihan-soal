#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define max 100


void search(int* ,int,int,int []);

int main(){
    int arr[max];
    int cek;
    int elemen;
    int index;
    printf("Jumlah elemen array : ");scanf("%d",&elemen);
    for(int i=0;i<elemen;i++) arr[i] = rand() % 100;

    printf("Nilai yang ingin dicek dalam array : ");scanf("%d",&cek);
    
    search(&index,cek,elemen,arr);
    
    // printf("Array[%d] : ",elemen);
    // for(int i=0;i<elemen;i++) printf("%d ", arr[i]);
    printf("\n");
    if(index != -1) printf("%d sama dengan array index : %d\n",cek, index);
    else printf("tidak terdapat dalam array : %d\n", -1);
    return 0;
}

void search(int *index, int cek, int length, int arr[]){
    int i = 0;
    while (arr[i] != cek && i < length)
        i++;
    if(arr[i] == cek) *index = i;
    else *index = -1;
}