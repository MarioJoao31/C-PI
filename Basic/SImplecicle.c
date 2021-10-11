#include <stdio.h>

int main()
{
    int bola = 0;
    int i = 0;
    char x[4] = "CONAPUTA";
    for (i = 0; i <= 2; i = i + 1)
    {
        printf("%s", x);
        printf("Relembrar coisas que dei no 1%i ano!\n", bola);
        bola++;
    };
    return 0;
}