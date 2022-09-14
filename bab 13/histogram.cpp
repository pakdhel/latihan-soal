#include <iostream>
using namespace std;

void hitung_frek(int a[], int n, int countA[]) {
    for (int i = 0; i < n; i++) {
        countA[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        countA[a[i]]++;
    }
}

void gambar_histogram(int countA[], int n) {
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < countA[i]) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(int argc, char const *argv[])
{
    int a[17] = {1,1,2,2,2,3,3,3,3,4,4,5,6,6,6,6,8};
    int countA[17];
    
    hitung_frek(a, 17, countA);
    gambar_histogram(countA, 17);
    return 0;
}
