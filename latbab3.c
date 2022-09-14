#include <stdio.h>


typedef struct kumpulanData
{
int day, month, year, hour, minute, secon;
char *name, *department, *nim;  
}tanggal, data;


int main()
{
	tanggal date,date2,time;

	date.day = 17;
	date.month = 4;
	date.year = 2003;

	date2.day = 19;
	date2.month = 12;
	date2.year = 2000;

	time.hour = 1;
	time.minute = 30;
	time.secon = 25;

	data student;
	student.nim = "D121211009";
	student.name = "MUHAMMAD FADHEL H";
	student.department = "Informatics Engineering";


	printf("I was born on %d %d, %d ", date.day,date.month,date.year);
	printf("at %d:%d:%d pm\n\n", time.hour,time.minute,time.secon);
	
	printf("Student Data:\n");
	printf("NIM: %s\nNAMA: %s\nDEPARTEMEN: %s\n\n", student.nim,student.name,student.department);
	
	
}
	