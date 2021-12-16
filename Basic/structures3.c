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

//assinaturas 
int menu();
int consultar(Aluno T[TAMANHO], int qt, int num);
int inserir(Aluno T[TAMANHO], int qt, int num, char nm[50], int a, float md);
void listar(Aluno T[TAMANHO],int qt);
int eliminar(Aluno T[TAMANHO], int qt, int num);
float mediaf(Aluno T[TAMANHO], int qt);


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
 } 
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


void listar(Aluno T[TAMANHO], int qt){
  int k=0;
 for(k=0; k<qt;k++){
   printf("#############\n");
    printf("Nome:%s\n", T[k].nome);
    printf("Numero:%d\n", T[k].numero);
    printf("Ano:%d\n", T[k].ano);
    printf("Media:%.2f\n", T[k].media);
  } ;
}


int eliminar(Aluno T[TAMANHO], int qt, int num){
  
  for(int k=0; k<qt;k++){
    if(T[k].numero == num){
       
      T[k].numero = 0;
      strcpy(T[k].nome,"Eliminado");
      T[k].ano = 0;
      T[k].media = 0.00; 
      return(1);
    };
  }; 
  return (0);
}

float mediaf(Aluno T[TAMANHO], int qt){
  int k=0;
  float total = 0.00;
  for(k=0; k<qt;k++){
    total += T[k].media;
  };

  total = total/qt;

  return total;
}




int main()
{ Aluno Turma[TAMANHO]; // variavel turma é o array
  int quantidade = 0; // Quantidade de alunos existentes no array
  int resultado, numero, ano, opcao;
  float media;
  int eli = 0;
  int res= 0;
  float res2 = 0.00;
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
  case 2: 
        printf("Numero do aluno?");
        scanf("%d", &numero);
        consultar(Turma,quantidade,numero);

  
  break;
  case 3: 
    printf("##Listar todos os alunos##\n");
    listar(Turma,quantidade);
  break;
  case 4: 
        printf("Numero de aluno que quer eliminar:");
        scanf("%d", &eli );

        res = eliminar(Turma,quantidade, eli);
        if (res == 1){
          quantidade--;
          printf("Aluno eliminado com sucesso!\n");
        }else{
          printf("Aluno eliminado não eliminado!\n");
        }

  break;
  case 5: 
        printf("##Media de todos os alunos##\n");
        res2 = mediaf(Turma,quantidade);
        printf(" Media da turma :%.2f", res2);
  break;
  case 6: break;
 }
 } while (opcao != 0);

 return(0);

 
}