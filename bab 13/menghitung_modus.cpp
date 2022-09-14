#include <iostream>
#define N 100

using namespace std;

typedef int LarikInt[N];

void modus(int n, LarikInt a, int &mo) {
    int frekuensiModus = 1; int temp = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            frekuensiModus++;
            if (frekuensiModus > temp) 
                mo = a[i];
        } else {
            if (temp < frekuensiModus) 
                temp = frekuensiModus;
            frekuensiModus = 1;
        }
    }
}


void hitung_modus(int n, LarikInt a, int &frekModus, int &Modus) {
    frekModus = 0; int kandidatModus; int frekKandidatModus;
    bool sama;
    int i = 0;
    while (i < n) {
        kandidatModus = a[i];
        frekKandidatModus = 1;
        i++;
        sama = true;
        while (sama && i < n) {
            if (a[i] == kandidatModus) {
                frekKandidatModus++;
                i++;
            } else {
                sama = false;
            }
        }

        if (frekKandidatModus >= frekModus) {
            Modus = kandidatModus;
            frekModus = frekKandidatModus;
        }
    }
}

int main(int argc, char const *argv[])
{
    int mo; int n; int frekModus;
    LarikInt a;
    printf("Banyak data : "); cin >> n;

    for (int i = 0; i < n; i++) {
        printf("Data ke %d : ", i+1); cin >> a[i];
    }
    // modus(n, a, mo);
    // printf("Modus : %d\n", mo);

    hitung_modus(n, a, frekModus, mo);
    if (frekModus == 1) {
        printf("Modus tidak ada\n");
    } else {
        printf("Modus : %d\n", mo);
    }
    
    return 0;
}
