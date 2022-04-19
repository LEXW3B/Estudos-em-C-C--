#include <stdio.h>

int main(){
    int x;
    x = 10;

    int *ponteiro;/*antes de criar um ponteiro tem que dizer o tipo que ele está apontando nesse caso e o int depois coloca o asterisco e o nome para o ponteiro.*/
    ponteiro = &x;/*o ponteiro tem que receber o endereço da memoria da variavel e não o valor dela.*/

    printf("%i\n", x);/*o valor posto na variavel x.*/
    printf("%i\n", &x);/*o endereço da memoria que está contendo a variavel x.*/

    printf("%i\n", *ponteiro);/*aqui ele vai imprimir o valor da variavel.*/
    printf("%i\n", ponteiro);/*aqui ele vai imprimir o endereço da variavel.*/
    
    getchar();
    return 0;
}







