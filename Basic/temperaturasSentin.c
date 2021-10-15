#include <stdio.h>

int main(){
    int i,tempD,tempM,tempMax,tempDc = 0;

    do{
        inicio:
        printf("Temperatura media do dia:");
        scanf("%d",&tempD);
    
    if(tempD>100){
        printf("Não podes meter temperaturas demasiado altas!\n");
        goto inicio;

    };
    printf("Temperatura aceite!\n");
    tempDc=tempDc+tempD;

    if(tempD>=tempMax){tempMax=tempD;};

    i++;
    }
    while(i<=4);

    tempM=tempDc/5;

    printf("Temperatura media e':%d\n",tempM);
    printf("Temperatura Máxima e':%d\n",tempMax);


}