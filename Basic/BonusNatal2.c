#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int idade, nfilhos, aservico, total;

    printf("Idade do trabalhador:");
    scanf("%d", &idade);

    printf("Numero de filhos do trabalhador:");
    scanf("%d", &nfilhos);

    printf("Anos de servico:");
    scanf("%d", &aservico);

    int r,valorIdade;
    if(idade >= 45){
        r=idade-45;
        valorIdade=r*5;
    };

    int valorServico;
    
    if(aservico <= 10){
        valorServico=aservico*10;
    }else {
        valorServico=aservico*20;

    }

    int dfilhos;

    switch(nfilhos){
        case 1 || 2: dfilhos=25.00; break;
        case 2: dfilhos=50.00; break;
        case 3: dfilhos=75.00; break;
        default: dfilhos=0; break;
    }
    
    total = dfilhos + valorServico + valorIdade;

    printf("O bonus total é de %d",total);
}