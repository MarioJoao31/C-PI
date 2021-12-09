#include <stdio.h>
#include <string.h>

#define TAMANHO 100

typedef struct MyStruct
{
    int numero;
    char nome[50];
    int idade;
    float media;
}Aluno;

//Função de inserção de um novo aluno na primeira celula livre do array Turma
//Recebe por parâmetro o endereço de memória do array Turma,
//a quantidade de alunos inseridos,
//o numero ,o nome , o ano, e a média
//Devolve como resultado 0 (caso de insucesso) ou 1(sucesso)
int inserir(Aluno T[TAMANHO],int num, char nm[50], int a, float md){
    
    T[0].numero=num;
    return(1);
    return(0);
}


int main(){
    Aluno Turma[TAMANHO];
    int quantidade=0;//quantidade de alunos existentnes no array
    int resultado,numero, ano;
    float media;
    char nome[50];

    printf("Numero?");
    scanf("%d", &numero);
    printf("nome?");
    scanf("%s", &nome);
    printf("Ano?");
    scanf("%d", &ano);
    printf("Media??");
    scanf("%f", &Media);

    resultado=inserir(Turma,1234,"joao",1,15.6);

    if(resultado ==1 ){
        quantidade++;
        printf("Inserido!");
    }else 
    {
        printf("Não inserido! Funciona porra");
    }


    return 0; 
}