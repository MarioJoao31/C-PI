#include <stdio.h>

int main() {
  int i, tempD, tempM, tempMax, tempDc = 0;

  do {
    //Volta para o inicio 
    inicio: 

    printf("Temperatura media do dia:");
    scanf("%d", & tempD);

    if (tempD< 100 && tempD > -100) {
      printf("Temperatura aceite!\n");
      tempDc += tempD;

      if (tempD > tempMax) {
        tempMax = tempD;
      };
    };

    /*if((tempD>-100) && (tempD<100) ){
      printf("Não podes meter temperaturas demasiado altas ou baixas!\n");
    // goto serve para voltar para uma parte do programa 
    goto inicio;

    }*/
    
    i++;
  }
  while (i <= 4);

  tempM = tempDc / 5;

  printf("Temperatura media e':%d\n", tempM);
  printf("Temperatura Máxima e':%d\n", tempMax);

}