#include <stdio.h>

int main(){
    int i,nota,notaincre,notamax = 0;
    
    
    for(i=0; i<=4;i++){
     
        printf("introduza o nota do aluno:");
        scanf("%d",&notaincre);

        if(notamax <= notaincre) {
            notamax=notaincre;
            printf("Nota maxima:%d\n",notamax);
        };

        if()

        nota=nota+notaincre;    
        
    };

    nota=nota/5;
    
    printf("media:%d\n",nota);
    printf("Nota maxima:%d\n",notamax);

}