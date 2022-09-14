// MENGUJI KESAMAAN LARIK //

#include <stdio.h>
#include <stdbool.h>

bool sama(int [], int []);


int main(){
    int arr1[10] = {1,2,3,4,5,6,7,8,9,0};
    int arr2[10] = {1,2,3,4,5,6,7,8,9,1};
    bool value = sama(arr1,arr2);
   
    if (value == true)printf("SAME\n");
    else printf("NOT SAME\n");
    
    return 0;
}

bool sama(int a[],int b[]){
    bool value = true;
    int i=0;
    while(i<10 && value){
        if(a[i]==b[i]) i++;
        else value = false;
    }
    return value;
}
/*
bool sama(int a[],int b[]){
    bool value = true;
    for(int i=0;i<10;i++){
        if(a[i] != b[i]){
            value = false;break;
        }
    }
    printf("%d\n", value);
    return value;
}
*/