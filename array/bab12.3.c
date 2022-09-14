// SOAL LATIHAN BAB 12
// NO 3

#include <stdio.h>
#include <stdlib.h>
#define Nmaks 100

void urutan_maks(int [],int,int*,int*);
void random(int [], int);
void tampil(int [],int);

int main(){
   int arr[Nmaks];
   int n;
   int max1,max2;
   printf("Jumlah N elemen larik\n");
   printf("N : ");scanf("%d",&n);

   random(arr,n);

   printf("Array\n");
   tampil(arr,n);

   urutan_maks(arr,n,&max1,&max2);

   printf("Nilai maksimum pertama : %d\n",max1);
   printf("Nilai maksimum kedua   : %d\n",max2);   
         
   return 0;
}

void random(int arr[],int n){
   for(int i=0;i<n;i++){
      arr[i] = rand() % 100;
   }
}

void tampil(int arr[],int n){
   for(int i=0;i<n;i++){
      printf("Array[%d] : %d\n",i,arr[i]);
   }
}

void urutan_maks(int arr[],int n,int *maks1,int *maks2){
   int idx;
   *maks1 = arr[0];
   for(int i=1;i<n;i++){
      if(arr[i] > *maks1){
         *maks1 = arr[i];
         idx = i;
      } 
   }

   *maks2 = arr[0];
   for(int i=1;i<n;i++){
      if(i == idx){
         continue;
      }

      if(arr[i] > *maks2){
         *maks2 = arr[i];
      }
   }
}



















