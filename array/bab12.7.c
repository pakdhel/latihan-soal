// SOAL LATIHAN BAB 12
// NO 7

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100

float rerata(float [],int);
void random(float [],int);
float deviasi(float [],int,float);
void cetak(float [],int);

int i;

int main(){
    int n;
    float m;
    float standar_d;
    float data[MAX];   
    printf("N buah data : \n");
    printf("N : ");scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        printf("data ke %d ", i + 1); scanf("%f", &data[i]);
    }

    // random(data,n);

    cetak(data,n);

    m = rerata(data,n);

    standar_d = deviasi(data,n,m);

    printf("Standar deviasi dari data array yang diberikan\n");
    printf("d = %g\n",standar_d);

    return 0;
}

void random(float a[],int n){
    for(i=0;i<n;i++){
        a[i] = (float)(rand() % 100); 
    }
}


void cetak(float a[],int n){
    for(i=0;i<n;i++){
        printf("Array[%d]: %.2f\n",i,a[i]);
    }
}


float rerata(float a[],int n){
    int sum = 0;
    float mean;
    for(i=1;i<=n;i++){
        sum = sum + a[i];
    }

    mean = (float) sum/n;
    return mean;
}

float deviasi(float a[],int n,float m){
    double total = 0.0;
    double kuadrat,hasil,d;
    for(i=0;i<n;i++){
        a[i] = a[i] - m;
        kuadrat = pow(a[i],2);
        total = total + kuadrat;
    }

    hasil = total/(float)(n-1);
 
    d = sqrt(hasil);
    return d;
}
