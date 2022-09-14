// SOAL LATIHAN BAB 12
// NO 6

#include <stdio.h>
#include <string.h>

#define Nmaks 50

void swap(char*);
void swap2(char*);

int main(){
    char A[Nmaks] = "marah";
    printf("Before Swap : %s\n",A);
    swap(A);   

    printf("After Swap : ");
    printf("%s\n",A);
    
    swap2(A);
    printf("Swapping Again : ");
    printf("%s\n",A);

    return 0;
}

void swap(char *A){
    int lenA = strlen(A);
    char temp;

    for(int i=0;i<lenA/2;i++){
	temp = A[i];
        A[i] = A[lenA-i-1];
        A[lenA-i-1] = temp;        
    }
}

void swap2(char *A){
    int lenA = strlen(A);
    int ptr1 = 0;
    int ptr2 = lenA - 1;
    
    char blank;
 
    while(ptr1 < ptr2){
        blank = A[ptr1];
        A[ptr1] = A[ptr2];
        A[ptr2] = blank;
        ptr1++;
        ptr2--;
    }
}