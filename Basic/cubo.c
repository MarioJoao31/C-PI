#include <stdio.h>

int main() {

  float largura, altura, area, perimetro;
  int soma;
  Beggining:
    printf("Largura:");
  scanf("%f", & largura);
  printf("Altura:");
  scanf("%f", & altura);

  area = largura * altura;
  perimetro = (largura + altura) * 2;
  printf("Area: %f\n Perimetro %.2f \n", area, perimetro);
}