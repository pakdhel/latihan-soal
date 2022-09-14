#include <iostream>
using namespace std;

void hitung_elemen(int a[], int n, int countA[]) {

    for (int i = 0; i < n; i++) {
        int frek = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) {
                frek++;
            }
        }
        countA[i] = frek;
    }
}

void hitung_frek(int a[], int n, int countA[]) {
    for (int i = 0; i < n; i++) {
        countA[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        countA[a[i]]++;
    }
}

int main(int argc, char const *argv[])
{
    int a[12] = {4,2,4,3,6,3,3,2,6,3,1,1};
    int countA[10];
    
    // hitung_elemen(a, 12, countA);
    hitung_frek(a, 12, countA);
    printf("Kemunculan tiap elemen : \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", countA[i]);
    }
    return 0;
}
