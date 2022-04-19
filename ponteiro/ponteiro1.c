#include <stdio.h>

int main(void){

    int x = 10;//declação do valor da variavel
    double y = 20.50;
    char z = 'a';

    int *pX = &x;//declação do ponteiro da variavel
    double *pY = &y;
    char *pZ = &z;

    //double soma = *pX + *pY;//a soma do valor da variavel que o ponteiro está apontando
    //double soma1 = &x + &y; Está errada porque não se deve somar os endereços das variaveis
    //double soma1 = pX + pY; Está errada porque não se deve somar os endereços das variaveis

    int *resultado;
    //resultado = &x;vai dar o endereço da memoria que x está armazendo
    resultado = 11833440;

    //printf("\nEndereço x = %i - Valor de x = %i\n", pX, *pX);//sem o * eu quero saber o endereço na memoria, com o * é o valor da variavel.
    //printf("\nEndereço y = %i - Valor de y = %f\n", pY, *pY);
    //printf("\nEndereço z = %i - Valor de z = %c\n", pZ, *pZ);

    //printf("\nA resposta variavel soma é: %f\n", soma);//vai dar o valor da soma das variaveis para dentro da variavelsoma
    //printf("\nValor de x = %i\n", resultado);vai dar o endereço da memoria que x está armazendo
    printf("\nValor de x é: %i\n", *resultado);

    getchar();
    return 0;
}






