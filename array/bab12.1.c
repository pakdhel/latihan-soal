// SOAL LATIHAN BAB 12

// NO 1

#include <stdio.h>
#include <stdlib.h>
#define Nmaks 100



void isi(int [],int);
void cetak(int [],int);
void cari(int [],int,int,int*);

int main(){
    int arr[Nmaks];
    int n; 
    int x;
    int idx;
    printf("Jumlah elemen array : ");scanf("%d",&n);
    isi(arr,n);    
    
    printf("Isi dalam array random\n");
    cetak(arr,n);

    printf("Mencari nilai X dalam array random\n");
    printf("x : ");scanf("%d",&x);
    cari(arr,n,x,&idx);

    printf("Indeks %d\n",idx);
    
    return 0;
}

void isi(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        arr[i] = rand() % 50;
    }
}

void cetak(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Array[%d] : %d\n",i,arr[i]);
    }
}

void cari(int arr[],int n,int x,int *index){
    *index = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == x) *index = i;
    }
}

















