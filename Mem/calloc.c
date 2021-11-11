#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char *argv[]){
    //cria um apontador chamado p, malloc(sizeof(int)) faz a leitura 
    int* p = (int*) calloc(3, sizeof(int));

    p[1] = 3;
    p[2] = 67;
    

    printf("P0-%d, P1-%d, P2-%d", p[3],p[1], p[2]);
    free(p);
    return 0; 
}