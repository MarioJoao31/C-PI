#include <stdio.h>

int main(){

    double notaResultado = 0.00;

    int notaEscrita, notaPratica = 0;

    printf("*****Notas do Aluno*****\n");
    printf("Introduz as notas do teste escrito:\n");

    for(int i = 0; i<=1 ; i++){
        printf("Nota %d:",i+1);
        scanf("%d", &notaEscrita);
        notaEscrita=notaEscrita+notaEscrita;
    }

    printf("Introduz as notas do teste prático:\n");

    for(int i = 0; i<=1; i++){
        printf("Nota %d:",i+1);
        scanf("%d", &notaPratica);
        notaPratica=notaPratica+notaPratica;
    }
    

    notaResultado=(notaPratica*0.3)+(notaEscrita*0.7);

    printf("Nota final é %.3lf",notaResultado);


    return(0);
}