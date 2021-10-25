#include <stdio.h>

int main( int argc, char* argv[]){

    printf("Idiota: %i\n", argc);

    if (argc > 1){
        printf("Primeiro argumento: %s\n", argv[1]);
    };

    char second();
    char tone(second);

    
    
    return 0;
}
char tone(second){

        
        return(printf("Nome=%d",second));
    };

char second(){
    
    return("MArio");
}