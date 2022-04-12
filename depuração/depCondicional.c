#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    printf("\nDigite o numero 1: \n");
    char c;
    c = getchar();//função para ler so um caractere

    if(c=='1'){
        printf("\nO caractere digitado está correto.\n");
    }else{
        printf("\nO valor digitado é inválido.\n");
        printf("Você digitou o caracter >%c<.\n", c);
    }


    return 0;
}