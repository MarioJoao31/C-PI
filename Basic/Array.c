#include <stdio.h>

//introduz os valores recebidos e muda lhes o nome 
int somatorio(int v[], int tam){
    int i, soma=0;
    //soma a soma anterior com a proxima 
    for(i=0;i<tam;i++){
        soma += v[i];
    }

    //retorna a soma 
    return (soma);
}


int main(){
    int array[100];
    int i,res;

    for(i=0;i<100;i++){
        array[i]=i;
    };

    // passa os valores para a outra funcao 
    res=somatorio(array,100);
        
    printf("%d",res);
    return 0;
}