#include <iostream>
#define N 100

using namespace std;

typedef int LarikInt[N];


void hitung_satu_nol(int n, LarikInt a) {
    int satu = 0; int nol = 0;
    for (int i = 0; i < n; i++) {
        switch (a[i])
        {
        case 0: nol++; break;
        case 1: satu++; break;
        default:
            break;
        }
    }

    printf("Jumlah kemunculan angka satu (1) : %d\n", satu);
    printf("Jumlah kemunculan angka nol (0) : %d\n", nol);
}


int main(int argc, char const *argv[])
{
    LarikInt a = {1,0,0,1,3,4,1,6,8,9,0,0,11,1,0};
    hitung_satu_nol(15, a);
    return 0;
}
