#include <stdio.h>

void mahasiswa(int);

struct MHS
{
    char nim[50];   
    char nama[50];
}mhs[50];

struct MK
{
    char kode[50];
    char namaMK[50];
    float nilai;
}mk[4];

int main(){

    int data;
    printf("Jumlah data mahasiswa : ");scanf("%d",&data);fflush(stdin);
    mahasiswa(data);    
}

void mahasiswa(int a){

    for(int i=0;i<a;i++){
	fflush(stdin);
        printf("NIM        : ");gets(mhs[i].nim);fflush(stdin);
        printf("NAMA       : ");gets(mhs[i].nama);fflush(stdin);
        for(int j=0;j<4;j++){
            printf("Kode MK ke-%d      : ",j+1);gets(mk[j].kode);fflush(stdin);
            printf("Nama MK ke-%d      : ",j+1);gets(mk[j].namaMK);fflush(stdin);
	    printf("Nilai MK ke-%d     : ",j+1);scanf("%f",&mk[j].nilai);fflush(stdin);
        }
    }

    for(int i=0;i<a;i++){
        printf("NIM        : %s\n",mhs[i].nim);        
        printf("NAMA       : %s\n",mhs[i].nama);
        for(int j=0;j<4;j++){
            printf("Kode MK ke-%d      : %s\n",j+1,mk[j].kode);
            printf("Nama MK ke-%d      : %c\n",j+1,mk[j].namaMK);
	    printf("Nilai MK ke-%d     : %g\n",j+1,mk[j].nilai);
        }
    }
    
}







