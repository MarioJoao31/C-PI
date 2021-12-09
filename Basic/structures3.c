#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TAMANHO 100 //tamanho defenido de 100

typedef struct 
{int numero;
 char nome[50];
 int ano;
 float media;
} Aluno;


int menu();
int consultar(Aluno T[TAMANHO], int qt, int num);
int inserir(Aluno T[TAMANHO], int qt, int num, char nm[50], int a, float md);

int menu()
{int opcao;
 do
 {printf("M E N U\n");
  printf("1 - Inserir aluno\n");
  printf("2 - Consultar aluno\n");
  printf("3 - Listar alunos\n");
  printf("4 - Remover aluno\n");
  printf("5 - Media da turma\n");
  printf("6 - Nota mais elevada\n");
  printf("0 - Sair\n");
  printf("Opcao?");
  scanf("%d",&opcao);
 } while ((opcao>6)||(opcao<0));
 return(opcao);
}

// Consulta de um aluno a partir do seu número
// Se existir então apresentar na consola todos os seus dados
// senão informar o utilizador que o mesmo não consta no array
int consultar(Aluno T[TAMANHO], int qt, int num){

    int i;
    for(i=0;i<qt;i++)
	    if (T[i].numero == num) {
            printf("Nome: %s\n", T[i].nome);
            printf("Ano: %d\n", T[i].ano);
            printf("Media: %.2f\n", T[i].media);
		    return(1);
     }
 return(0);
}

// Função de inserção de um novo aluno na primeira célula livre do array Turma
// Recebe por parâmetro o endereço de memória do array 'Turma',
// a quantidade de alunos inseridos, o número, o nome, o ano, e a média do novo 
// aluno.
// Devolve como resultado 0 (em caso de insucesso) ou 1 (em caso de sucesso)
int inserir(Aluno T[TAMANHO], int qt, int num, char nm[50], int a, float md)
{
 if (qt<TAMANHO)
 {T[qt].numero = num;
  strcpy(T[qt].nome,nm);
  T[qt].ano = a;
  T[qt].media = md;
  return(1);
 }
 else return(0);
}

int main()
{ Aluno Turma[TAMANHO];
  int quantidade = 0; // Quantidade de alunos existentes no array
  int resultado, numero, ano, opcao;
  float media;
  char nome[50];

 do{
 opcao = menu();
 switch (opcao)
 {case 1:   printf("Numero?");
            scanf("%d",&numero);
            printf("Nome?");
            scanf("%s",nome);
            printf("Ano?");
            scanf("%d",&ano);
            printf("Media?");
            scanf("%f",&media);

            resultado = inserir(Turma, quantidade, numero, nome, ano, media);
            if (resultado == 1) {printf("Inserido!\n");
	                         quantidade++;
	                        }
            else printf("Não inserido!\n");
	    break;
  case 2: break;
  case 3: break;
  case 4: break;
  case 5: break;
  case 6: break;
 }
 } while (opcao != 0);

 return(0);
}