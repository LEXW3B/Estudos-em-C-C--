#include <stdio.h>//para entrada e saida de dados
#include <stdlib.h>//para manipulações matemáticas
#include <ctype.h>//para manipulação de caracteres

int main(){
    char c;
    printf("\nDigite um caractere em letra minuscula:\n");
    scanf("%c", &c);

    if(c >= 'a'){
        printf("\nSegue a letra que você digitou em maiuscula: > %c <\n", toupper(c));
    }else{printf("\nNão e letra!!!\n");}


    return 0;
}
