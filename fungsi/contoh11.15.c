// VALIDASI PASSWORD
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//#define PASSWORD abcdef
bool validasi(char*);
const char val[30] = "abcdef";

int main(){
    char pass[30];
    char ya;
    int a = 0;
    bool status;
    do {  
        fflush(stdin);
        a++;
            printf("\tValidasi Password\n");
            printf("Password : \t\t");scanf("%[^\n]", pass);fflush(stdin);
            

            status = validasi(pass);
            if(status){
                printf("\t\tBERHASIL\n");break;
            }else{
                
                printf("\tPassword salah\n");
                //printf("Ulangi? (y/t) ");scanf("%c", &ya);fflush(stdin);
            }
        /*do {
            
        }while(ya == 'y');*/
        //break;
    } while(a<3);

    return 0;
}

bool validasi(char *pass){
    int len = strcmp(pass, val);
    if (len == 0)
    {
        return true;
    }
    else{
        return false;
    }
    
/*    
    len = strlen(pass);

    for(int i=0;i<len;i++){
        if((pass[i] != val[i]) && ((pass[i] != '\0' || val[i] != '\0'))){
            return false;
    
        }else{
            return true;
        }
    }*/
}