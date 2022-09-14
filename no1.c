#define MAX 100
#include <stdio.h>

void tambahKontak();
void daftarKontak();

struct data
{
    char nama[MAX], alamat[MAX]; 
    char* email[MAX];
    int notelpon;
};

int main()
{
    int menu;
    do {
       printf("MENU\n");
       printf("1. Menambah kontak baru\n");
       printf("2. Menampilkan kontak\n");
       printf("3. Keluar program\n");
       printf("Silakan memasukkan menu (1/2/3) ");scanf("%d", &menu);fflush(stdin);

       switch (menu)
       {
            case 1: tambahKontak();break;
            case 2: daftarKontak();break;
            default: printf("PROGRAM SELESAI\n");break;
       }

       
    } while (menu != 3);
    return 0;
}

void tambahKontak()
{
    struct data data1;
    int i = 0;
    char y;
    do {
        printf("Nama : ");gets(data1.nama);fflush(stdin);
        printf("Alamat : ");gets(data1.alamat);fflush(stdin);
        printf("No Telpon : ");scanf("%d", &data1.notelpon);fflush(stdin);
        printf("Alamat Email : ");scanf("%s", &data1.email);fflush(stdin);
        i++;
        printf("Tambahkan kontak lagi?(y/t) ");scanf("%c", &y);fflush(stdin);
    } while (y == 'y' || y == 'Y' || i == 100);     
}

void daftarKontak()
{


}