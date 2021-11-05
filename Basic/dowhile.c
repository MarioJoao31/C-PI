#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main () {

   /* local variable definition */
   int nota, mnota;
   int a=1;
   float total = 0;

   /* do loop execution */
   do {
        printf("Insere a nota do aluno %d:", a);
        scanf("%d", &nota);

        if(nota > mnota ) mnota= nota;

        total += nota;   //  total = total + nota !!
        a++;


        printf("Nota total:%.2f \n", total);
   }while( a <= 10 );

    total = total/10;

    printf("Melhor nota total:%d \n",mnota);
    printf("Media total:%.2f",total);

   return 0;
}