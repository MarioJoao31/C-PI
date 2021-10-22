#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    char caracter;
    char seq[100];

    printf("introduz o caracter:");
    scanf("%c", &caracter);

    printf("Introduzir uma string:");
    scanf("%s", seq);

    printf("caracter--%c\n",caracter);
    printf("String--%s\n",seq);
}