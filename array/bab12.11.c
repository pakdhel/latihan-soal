// SOAL LATIHAN BAB 12
// NO 11

#include <stdio.h>
#include <stdbool.h>

bool sama(int [],int);

int main(){
    int a[3] = {1,1,1};
    int size = sizeof(a)/sizeof(a[0]);
    bool x;
    x = sama(a,size);
    
    printf("Value : %d\n",x); // jika semua elemen dalam array sama, x = 1, jika tidak, x = 0
    
    return 0;
}
       
bool sama(int a[],int size){
    int count = 0;
    bool nilai = false;
    for(int i=0;i<size;i++){
        int j = 0;
        for(j=j+i+1;j<size;j++){
            if(a[i]==a[j]){ 
                count++;
            }
        }
    }
    if(count == 3) return !nilai;
    else return nilai;
}