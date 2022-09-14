// SOAL LATIHAN BAB 12
// NO 2	

#include<stdio.h>
#include<stdlib.h>
#define Nmaks 50

void acak(int [],int);
void cetak(int [],int);
void range(int [],int,int*);


int main(){
   int arr[Nmaks];
   int n;
   printf("Jumlah data di dalam array : ");scanf("%d",&n);
   acak(arr,n);

   printf("Elemen dalam array random\n");
   cetak(arr,n);
   
   return 0;
}


// mengisi array dengan nilai acak dan terurut
void acak(int arr[],int n){
   int min;
   int i=1;
   arr[0] = rand() % 100;
   min = arr[0]; // asumsi arr dengan index 0 adalah minimum
   for(i=1;i<n;i++){
      arr[i] = rand() % 100;
      if(arr[i] > min){
         min = arr[i];
      }
   }   
}


void cetak(int arr[],int n){
   for(int i=0;i<n;i++){
        printf("Array[%d] : %d\n",i,arr[i]);
    }
}

void range(int arr[],int n,int *r){
   
}












