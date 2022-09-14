#include <iostream>
#include <cmath>

using namespace std;


const int Nmaks = 100;

struct Polinom{
    
    int n;
    float koef;

};


void scan_koefisien(struct Polinom koefPolinom[], int n) {
    for (int i = 0; i <= n; i++) {
        printf("Derajat %d : ", i); cin >> koefPolinom[i].koef;
    }
}

float nilai_polinom(struct Polinom koefPolinom[], int n, int x) {
    float y = 0;
    for (int i = 0; i <= n; i++) {
        y = y + koefPolinom[i].koef * pow(x, i);
    }
    return y;
}

void tampilkan_polinom(struct Polinom koefPolinom[], int n) {
    printf("f(x) = \n");
    for (int i = 0; i <= n; i++) {
        printf("%gx^%d \n", koefPolinom[i].koef, i);
    }
}


int main(int argc, char const *argv[])
{
    struct Polinom koefPolinom[Nmaks];
    scan_koefisien(koefPolinom, 2);

    tampilkan_polinom(koefPolinom, 2);

    float nilaiPolinom = nilai_polinom(koefPolinom, 2, 2);
    
    printf("Nilai polinom : %g\n", nilaiPolinom);


    return 0;
}
