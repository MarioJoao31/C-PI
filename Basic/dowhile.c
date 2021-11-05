#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {

  /* local variable definition */
  float nota1, nota2, nota3, submedia = 0, mnota= 0;
  int a = 1;
  float total = 0;

  /* do loop execution */
  do {
    printf("Insere a nota1 do aluno %d:", a);
    scanf("%f", & nota1);
    printf("Insere a nota2 do aluno %d:", a);
    scanf("%f", & nota2);
    printf("Insere a nota3 do aluno %d:", a);
    scanf("%f", & nota3);

    //if (nota > mnota) mnota = nota;

    submedia += nota1 + nota2 + nota3; //  total = total + nota !!
    submedia /= 3; 

    printf("Submedia de cada aluno:%.2f ", submedia );
    a++;

    
  } while (a <= 10);

  total = submedia / 20;

  printf("Melhor nota total:%f \n", mnota);
  printf("Media total:%.2f", total);

  return 0;
}