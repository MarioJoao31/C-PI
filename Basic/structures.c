#include <stdio.h>
#include <string.h>

typedef struct MyStruct
{
    int numero;
    char nome[50];
    int idade;
    float media;
}Aluno;

int main(){
    //aluno um e dois 
    Aluno a1, a2;
    // um array de alunos 
    Aluno Turma[20];
    
    //inicializar o aluno pelo o terminal 
    printf("Escreve o numero do aluno:");
    scanf("%d", &a1.numero);

    // inicilizar o aluno pelo o codigo;   
    a1.numero=1234;
    strcpy(a1.nome,"Mário");
    a1.idade= 20;
    a1.media = 9.50;

    Turma[0].numero=4444;
    strcpy(Turma[0].nome,"Gustavo");
    Turma[0].idade=23;
    Turma[0].media=18.45;

    Turma[1].numero=2;
    strcpy(Turma[1].nome,"Renato");
    Turma[1].idade=23;
    Turma[1].media=18.45;
    
    printf("Numero do aluno a1:%d", a1.numero);

}