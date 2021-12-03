#include <stdio.h>

void falar(){
    printf("Estou a falar, esta frase veio da função falar!!! \n");
}

int somar( int a, int b){
    int soma=0;
    soma = a + b;
    return soma;
}

void cona (){
    printf("O gil é gay!!!\n");
}

int main(){
    int numeroA,numeroB;
    int resSoma;
    printf("Vou agora fazer uma soma noutra função!\n");
    printf("Insere numero A:");
    scanf("%d", &numeroA);
    printf("\nInsere numero B:");
    scanf("%d", &numeroB);

    // um procedimento nao usa return 
    // faz tudo o que tem dentro da procedimento 
    cona();
    
    // A função somar é uma função porque usa o return para retornar um valor 
    // Dá ao resSoma o valor de soma, que veio da funcao de somar 
    resSoma=somar(numeroA,numeroB);


    // Amostra o resultado da função
    printf("%d", resSoma);

}