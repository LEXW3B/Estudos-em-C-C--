#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#include <curses.h> nao funciona no linux =-=-=  op=getche();

int main(){
    float num1, num2, resultado;
    char op = '0';

    printf("\n========== CALCULADORA 2.0 ==========\n");
    do{
        num1=num2=resultado=0;//resetar as variaveis

        //imprimir as opções da calculadora
        printf("\n(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(0) sair do programa\n");

        printf("\nInforme a operação >>> \n");
        printf("\n>>> ");

        scanf("%c", &op);
        printf("\n\n");

        if(op!='0'){
            printf("Digite o primeiro número:\n\t");
            scanf("%f", &num1);

            printf("Digite o segundo número:\n\t");
            scanf("%f", &num2);

            if(op=='1'){
                resultado=num1+num2;
            }else{
                if(op=='2'){
                    resultado=num1-num2;   
                }else{
                    if(op=='3'){
                        resultado=num1*num2;
                    }else{
                        if(op=='4'){
                            resultado=num1/num2;
                        }
                    }
                }
            }
        
        }
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printf("\nO resultado e: %f\n", resultado); 
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");   
    }while(op!='0');

    return 0;
}