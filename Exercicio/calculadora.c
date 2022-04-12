#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    double num1, num2, resultado;
    char op = '0';

    printf("\n========== CALCULADORA 2.0 ==========\n");
    do{
        num1= num2=resultado=0;//resetar as variaveis
        //imprimir as opções da calculadora
        printf("(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(5) resto da divisão\n");

        printf("Informe a operação: \n");
        op = getchar();

        printf("Digite o primeiro número:\n\t");
        scanf("%f", &num1);

        printf("Digite o segundo número:\n\t");
        scanf("%f", &num2);

    }while(op!='0');

    return 0;
}