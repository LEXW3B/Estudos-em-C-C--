#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
//do while -> faça...enquando() a instrução for verdadeira.
//essa instrução faz o código executar ao menos uma vez.
    int contador = 0;
    char c;

    do{
        contador += 1;
        printf("Digite zero(0) para sair do looping:\n");
        printf("%i quantidade de vezes\n", contador);
        c = getchar();
    }while(c!='0');


    return 0;
}