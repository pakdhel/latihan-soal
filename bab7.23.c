#include <stdio.h>

int main()
{
    char op;
    float op1,op2;

    printf("\n\tCALCULATOR\n");
    printf("number1,operator,number2\n");scanf("%f %c %f", &op1,&op,&op2);

    switch (op)
    {
    case '+':printf("= %g", op1+op2);break;
    case '-':printf("= %g", op1-op2);break;
    case '*':printf("= %g", op1*op2);break;
    case '/':
        if (op2 != 0)
            printf("= %g", op1/op2);
        else
            printf("\nINVALID");
        break;
    default:
        break;
    }
}