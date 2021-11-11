#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char *argv[]){
    //cria um apontador chamado p, malloc(sizeof(int)) faz a leitura 
    int* p = (int*) malloc(2*sizeof(int));

    p[1] = 5;
    p[2] = 50;
    printf("P0-%d, P1-%d, P2-%d", p[0],p[1], p[2]);
    free(p);
    return 0; 
}