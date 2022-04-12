#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int valDigitado = 0;

    printf("\nInforme a quantidade de vezes que deseja a repetição:\n");
    scanf("%i", &valDigitado);

    while(x<=valDigitado){
        printf("%i\n", x*10);
        x++;
    }
    return 0;
}