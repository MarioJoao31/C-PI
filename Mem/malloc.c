#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char *argv[]){
    //cria um apontador chamado p, malloc(sizeof(int)) faz a leitura 
    int* p = (int*) malloc(sizeof(int));
    //vai buscar apontador e adiciona 5 no sitio do apontador 
    *p = 5;
    printf("%d", *p);
    free(p);
    return 0; 
}