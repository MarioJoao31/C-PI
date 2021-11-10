#include <stdio.h>

int main(){
    float saldo=0;
    float valor=0;
    float levantar=0;
    int opc=0;
    
    do 
    {
        printf("------ Escolha a opçao -----\n");
        printf("1-Consultar\n");
        printf("2-Levantar\n");
        printf("3-Depositar\n");
        printf("4-Consultar tentativas\n");
        printf("0-terminar\n");
        scanf(" %d", &opc);
    
        switch (opc)
        {
            case 1:
            printf("Saldo: %.3f\n", saldo);
                break;
            case 2:
            
                printf("Levantar quanto:");
                scanf(" %f", &levantar);
                saldo -= levantar;

                break;
            case 3: 

            printf("Quanto quer depositar:");
            scanf(" %f", &valor);
            saldo += valor;

                break;
            case 4:
                break;
        default:
        return 0;
            break;
        }

    }while (opc != 0);

    
}