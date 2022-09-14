// e^x = x^0/0! + x^1/1! + x^2/2! + ... + x^n/n!

#include <stdio.h>

int fakktorial(int);
double e(int);
int main(){
    int n, fak;
    printf("Menghitung pendekatan dari e^x dengan n buah suku \n");
    printf("n = ");scanf("%d", &n);

    fak = fakktorial(n);

}

int faktorial(int N){
    int hasil = 1;
    if(N!=0){
        for(int i=N;i>0;i--){
            hasil = hasil*i; 
        }
    }
    return hasil;
}

double e(int nn){
    double s = 0;
    
}