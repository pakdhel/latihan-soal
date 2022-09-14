#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int num[9] =  {8,7,6,5,4,3,2,1,0};
    int size = sizeof(num)/sizeof(num[0]);
    int i,j,k,search,idx;
    bool found = false;

    printf("Search : ");scanf("%d",&search);
    i = 0;
    j = size-1;
    while(!found && i <= j){
        k = (i+j)/2;
        if (search == num[k]){
            found = true;
        }
        else if(search > num[k]){
            j = k - 1;
        }
        else{
            i = k + 1;
        }
    }

    if (found){
        idx = k;
    }
    else{
        idx = -1;
    }
    
    printf("index : %d\n",idx);

    return 0;
}
