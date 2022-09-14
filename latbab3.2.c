#include <stdio.h>
struct mahasiswa
{
	int nim;
	char *namaMahasiswa;
};

struct mataKuliah
{
	char kodeMatkul;
	char *namaMatkul;
	int nilaiMatkul;
	struct mahasiswa mhs1;
};
int main()
{
	struct mataKuliah mk;
	mk.mhs1.namaMahasiswa = "MUHAMMAD FADHEL H";
	mk.mhs1.nim = 1211211009;

	printf("NIM Mahasiswa : %d\n", mk.mhs1.nim);
	printf("nama Mahasiswa : %s\n", mk.mhs1.namaMahasiswa);
return 0;
}