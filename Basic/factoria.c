#include <stdio.h>

//fazer o factorial 
int factorial(int n){
    int i, resultado =1;
    if(n>=0){
    for(int i=1;i<=n; i++){
        resultado *= i;
     }
    return(resultado);
   }
     else return(-1);
};


//isto é um procedimento porque nao tem return
void exemplo(){
    printf("Hello world");
    printf("\n");
}

//le o input do utilizador.... ISTO é uma função porque tem return!!
int ler(char texto[]){
    int n;
    printf("%s", texto);
    scanf(" %d", &n);
    return(n);

};

//obter o n-esimo elemento da serie de fibonacci
int fibonacci(int n){
    int n1=0,n2=1,soma;
    if(n<=0) return(-1);
    else if(n==1) return (n1);
    else if (n==2) return(n2);
    else {
        while(n>2){
            soma= n1+n2;
            n1= n2;
            n2= soma;
            n--;
        }
        return(n2);
    }
}


int main(){
    int n,res;
    exemplo();
    n= ler("Valor?");
    res= factorial(n);
    if(res == -1) 
        printf("valor invalido\n");
    else 
        printf(" %d! = %d\n",n,res);

    res = fibonacci(n);
    printf("fib(%d)= %d",n,res);
    return 0;
}


