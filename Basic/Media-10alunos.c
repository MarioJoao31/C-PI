#include <stdio.h>

int main(){
    int i,nota,notaincre = 0;
    
    
    while(i <=9){
        printf("introduza o nota do aluno:");
        scanf("%d",&notaincre);
        nota=nota+notaincre;
        i++;
    };

    nota=nota/10;
    printf("media:%d",nota);

}