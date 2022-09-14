#include <iostream>
#define N 100

using namespace std;

// typedef Barang LarikBarang[N];

void isi_barang(struct Barang HargaJual[], int n);
void diskon_barang( struct Barang HargaJual[], float p, int n);
void tampilkan_barang(struct Barang HargaJual[], int n);


struct Barang{
    int kodeB;
    float hargaB;
};


int main(int argc, char const *argv[])
{
    struct Barang HargaJual[N];
    float p; int n;
    printf("Banyak data : "); cin >> n;
    printf("Diskon barang : "); cin >> p;
    isi_barang(HargaJual, n);


    diskon_barang(HargaJual, p, n);


    tampilkan_barang(HargaJual, n);
    return 0;
}

void isi_barang(struct Barang HargaJual[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Harga barang ke %d : ", i+1); cin >> HargaJual[i].hargaB;
    }
}


void diskon_barang( struct Barang HargaJual[], float p, int n) {
    for (int i = 0; i < n; i++) {
        HargaJual[i].hargaB = HargaJual[i].hargaB - (HargaJual[i].hargaB * p/100.0);
    }
}

void tampilkan_barang(struct Barang HargaJual[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Harga Barang ke %d : %g\n", i+1, HargaJual[i].hargaB);
    }

}
