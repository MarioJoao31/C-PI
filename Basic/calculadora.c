#include <stdio.h>

int main(){
    float num1, num2, resultado;

    char op;

    printf("Introduza o primeiro numero:");
    scanf(" %f", &num1);
    
    printf("Introduza o segundo numero:");
    scanf(" %f", &num2);

    printf("----OPERADOR----\n");
    Middlemen:
    printf("Que operador que usar (+,-,*,/)?");
    scanf(" %c", &op);

    if(op == '+')
    {
        resultado = num1 + num2;
    }
    else if ( op == '-')
    {
        resultado = num1 - num2; 
    }
    else if ( op == '*')
    {
        resultado = num1 * num2;
    }
    else if ( op == '/')
    {
        resultado = num1 / num2;
    }
    else {
        printf("Operador incorreto !\n");
        goto Middlemen;
    }

    printf("Resultado : %.2f", resultado);

return 0;
}