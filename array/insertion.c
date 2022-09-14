#include <stdio.h>

int main()
{
    int a[10] = {4,2,6,9,3,5,7,0,1,8};
    int temp;
    int length = sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<length;i++){
        printf("%d,",a[i]);
    }
    
    for(int i=1;i<length;i++){
        temp = a[length-1];
        a[length-1] = a[length-1-i];
        a[length-1-i] = temp;
    }

    printf("\n");
    for(int i=0;i<length;i++){
        printf("%d,",a[i]);
    }

    for(int i=length-1;i>=0;i--){
        temp = a[length-1];
        a[length-1] = a[length-1-i];
        a[length-1-i] = temp;
    }

    printf("\n");
    for(int i=0;i<length;i++){
        printf("%d,",a[i]);
    }

    for(int i=0;i<length-1;i++){
        temp = a[0];
        a[0] = a[i+1];
        a[i+1] = temp;
    }

    printf("\n");
    for(int i=0;i<length;i++){
        printf("%d,",a[i]);
    }
    return 0;
}
