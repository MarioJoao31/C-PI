#include <stdio.h>

int main(){

    int npais, nfilhos = 0;
    // [linhas - numero de pais][colunas: 0-pai 1-n de filhos 2-anos de servico]
    
    printf("Insere o numero de pais:");
    scanf("%d", &npais);

    int matriz[npais][3];


    // ler o numero de filhos que cada pai tem 
    // escrever a matriz 
    for (int i=1;i <= npais;i++){
        printf("Pai numero:%d\n", i);

            
                printf("Insere o numero de filhos que o pai %d tem:",i);
                scanf("%d", &matriz[i][1]);

                printf("Insere o numero de anos de servico:");
                scanf("%d", &matriz[i][2]);
           
    };

    for(int j=1; j<=npais;j++){
        printf("O pai numero %d tem %d filhos\n",j, matriz[j][1]);
        printf("O pai numero %d tem %d anos de servico\n",j, matriz[j][2]);
        
    }

    return(0);
}