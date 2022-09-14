// SOAL LATIHAN BAB 12
// NO 5

#include <stdio.h>

void tukar(int [],int []);
void cetak(int [],int []);
void sebelum(int [],int []);

int main(){
    int A[10] = {2,7,1,4,0,5,12,8,14,11};
    int B[10] = {21,17,9,6,10,13,34,19,23,29};

    printf("Sebelum ditukar\n");
    sebelum(A,B);

    tukar(A,B);

    printf("Setelah ditukar\n");
    cetak(A,B);
    return 0;
}

void tukar(int a[],int b[]){

    int temp[10];
    for(int i=0;i<10;i++){
        temp[i] = a[i];
    }
    for(int i=0;i<10;i++){
        a[i] = b[i];
    }
    for(int i=0;i<10;i++){
        b[i] = temp[i];  
    }
}

void cetak(int a[],int b[]){
    printf("\n=====================\n");
    for(int i=0;i<10;i++){
        printf("A[%d] : %d\n",i,a[i]);
    }
    printf("\n=====================\n");
    for(int i=0;i<10;i++){
        printf("B[%d] : %d\n",i,b[i]);   
    }
    printf("\n=====================\n");
}

void sebelum(int a[],int b[]){
    printf("\n=====================\n");
    for(int i=0;i<10;i++){
        printf("A[%d] : %d\n",i,a[i]);
    }
    printf("\n=====================\n");
    for(int i=0;i<10;i++){
        printf("B[%d] : %d\n",i,b[i]);   
    }
    printf("\n=====================\n");
}