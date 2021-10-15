#include <stdio.h>

int main(){
    int i,tempD,tempM,tempMax,tempDc = 0;

    do{

    printf("Temperatura media do dia:");
    scanf("%d",&tempD);

    tempDc=tempDc+tempD;

    if(tempD>=tempMax){tempMax=tempD;};

    i++;
    }
    while(i<=4);

    tempM=tempDc/5;

    printf("Temperatura media e':%d\n",tempM);
    printf("Temperatura Máxima e':%d\n",tempMax);


}