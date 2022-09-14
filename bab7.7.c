#include <stdio.h>
int main()
{
    // float jamKerja, gaji, batas = 48;
    // printf("\nJam kerja karyawan selama satu minggu (jam): ");scanf("%g", &jamKerja);

    // if (jamKerja>batas)
    // {
    //     gaji = batas*2000 + (jamKerja - batas)*3000;
    // }
    // else
    // {
    //     gaji = jamKerja*2000;
    // }

    // printf("Gaji karyawan selama %g jam dalam seminggu adalah Rp %g\n", jamKerja,gaji);
    

    // menggunakan constant agar suatu ketika ada perubahan ketetapan
    // dapat mempermudah pemrograman
    const int batas = 50;
    const int gajiPerjam = 2000;
    const int gajiLembur = 3000;

    float jamKerja, gaji;
    printf("\nJam kerja karyawan selama satu minggu (jam): ");scanf("%g", &jamKerja);

    if (jamKerja>batas)
    {
        gaji = batas*gajiPerjam + (jamKerja - batas)*gajiLembur;
    }
    else
    {
        gaji = jamKerja*2000;
    }

    printf("Gaji karyawan selama %g jam dalam seminggu adalah Rp %g\n", jamKerja,gaji);
    
    return 0;
}