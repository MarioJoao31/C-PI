#include <stdio.h>

int main(){
    int numero=5;

    //usar dois == para comprar uma variavel a outra, 
    //se usar so um = esta a dizer que o numero é igual a 5 e não a comparar o numero a 5
    if(numero == 5)
        printf("Se a condição for verdadeira o alex é gay!\n");
    else 
        printf("Se a condição for falsa o mário é gay!\n");

    if (numero == 2)
        printf("isto nunca vai acontecer");
    else if( numero == 3)
            printf("Isto tambem nunca vai acontecer!");
    else
        printf("isto vai acontecer porque as duas de cima não aconteceram\n");
    

    return 0 ;
}