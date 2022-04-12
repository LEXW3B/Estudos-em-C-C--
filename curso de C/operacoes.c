#include <stdio.h>//biblioteca para entrada e saida de dados
#include <stdlib.h>//biblioteca para operações matemáticas

int main(){
    int num1, num2;
    num1 = 15;
    num2 = 20;
    int soma = num1 + num2;
    printf("O resultado da soma e %i", soma);

    int subtracao = num2-num1;
    printf("\nO resultado da subtracao e %i", subtracao);

    int mult = num1 * num2;
    printf("\nO resultado da multiplicacao e %i", mult);

    int div = num2/3;
    printf("\nO resultado da divisao e %i", div);

    return 0;
}






