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
   int r;
   printf("Jumlah data di dalam array : ");scanf("%d",&n);
   acak(arr,n);

   printf("Elemen dalam array random\n");
   cetak(arr,n);

   range(arr,n,&r);   
   printf("Nilai range dalam array : %d\n",r);

   return 0;
}


// mengisi array dengan nilai acak dan terurut
void acak(int arr[],int n){
   int cacah = 5;
   for(int i=0;i<n;i++){
      arr[i] = cacah;
      cacah = cacah*2; 
   }
}


void cetak(int arr[],int n){
   for(int i=0;i<n;i++){
        printf("Array[%d] : %d\n",i,arr[i]);
    }
}

void range(int arr[],int n,int *r){
   *r = arr[n-1] - arr[0];
}












