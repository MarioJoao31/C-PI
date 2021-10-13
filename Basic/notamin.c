#include <stdio.h>

int main(){
    int i,nota,notaincre,notamax = 0;
    int notamin = 0;
    //ciclo for 
    for(i=0; i<=4;i++){
     
        printf("introduza o nota do aluno:");
        scanf("%d",&notaincre);

        //maximo 
        if(notamax <= notaincre) {
            notamax=notaincre;
            printf("Nota maxima:%d\n",notamax);
        };

        //minimo
        if(notaincre <= notamin){
            notamin=notaincre;
            printf("nota min:%d\n",notamin);
        }

        nota=nota+notaincre;    
        
    };

    nota=nota/5;
    
    printf("media:%d\n",nota);
    printf("Nota maxima:%d\n",notamax);
    printf("nota min:%d\n",notamin);

}