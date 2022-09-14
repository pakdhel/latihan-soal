#include <stdio.h>

int main()
{
    int a[10] = {4,2,6,9,3,5,7,0,1,8}; 
    
    int length = sizeof(a)/sizeof(*a);
    int temp;
    
    
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }

    int i;
    for(i=1;i<length;i++){
        temp = a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(a[j] > temp){
                a[j+1] = a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = temp;
    }

    printf("\n");
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
