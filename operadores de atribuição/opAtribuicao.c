#include <stdio.h>
#include <stdlib.h>

int main(){
/*     OPERADORES DE ATRIBUIÇÃO  
x = x + 1  ou  x += 1  ou  x++;

1) +=  -> ATRIBUIÇÃO DE SOMA
2) -=  -> ATRIBUIÇÃO DE SUBTRAÇÃO
3) *=  -> ATRIBUIÇÃO DE MULTIPLICAÇÃO
4) /=  -> ATRIBUIÇÃO DE DIVISÃO
5) %=  -> ATRIBUIÇÃO DE RESTO DA DIVISÃO
*/

    int x =0;

    while(x<11){
        printf("msg\n");
        x++;
    }

    int i = 50;
    printf("soma: %i\n", i += 100);
    printf("subtração: %i\n", i -= 50);
    printf("multiplicação: %i\n", i *= 3);
    printf("divisão: %i\n", i /= 3);
    printf("resto da divisão: %i\n", i %= 3);

    return 0;
}

