#include <stdio.h>

int main(){
    int i,s,nota = 0;
    int notaincre=0;
    int notafinal = 0;
    //ciclo for 
    for(i=0; i<=19;i++){
        printf("Aluno n-%d\n",i);
        nota=0;
        //ciclo para ler as notas do aluno
        for(s=0; s<=2;s++){

            printf("\nIntroduzir nota N-%d:",s);
            scanf("%d",&notaincre);
            //total das notas
            nota = nota + notaincre;
        };

        printf("As notas do aluno foram adicionadas!\n");

        //nota ja dividida 
        nota=nota/3; 

        // soma das notas divididas     
        notafinal=notafinal+nota;
        printf("Nota final sem media:%d\n",notafinal);
        
        
    };

// Media da nota final 
        notafinal=notafinal/20  ; 
        printf("Media da nota final:%d",notafinal) ;
}
