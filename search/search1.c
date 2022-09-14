#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define max 100


void search(bool* ,int,int,int []);

int main(){
    int arr[max];
    int cek;
    int elemen;
    bool ada;
    printf("Jumlah elemen array : ");scanf("%d",&elemen);
    for(int i=0;i<elemen;i++) arr[i] = rand() % 100;

    printf("Nilai yang ingin dicek dalam array : ");scanf("%d",&cek);
    
    search(&ada,cek,elemen,arr);
    
    printf("Array[%d] : ",elemen);
    for(int i=0;i<elemen;i++) printf("%d ", arr[i]);
    printf("\n");
    if(ada) printf("%d ada dalam array\n",cek);
    else printf("%d tidak terdapat dalam array\n", cek);
    return 0;
}

void search(bool *hasil, int cek, int length, int arr[]){
    int i = 0;
    while (arr[i] != cek && i < length)
        i++;
    if(arr[i] == cek) *hasil = true;
    else *hasil = false;
}