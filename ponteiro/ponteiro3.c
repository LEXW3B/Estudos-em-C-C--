#include <stdio.h>

int main(void){

    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("\nHora --> %i\n", *hoje.pHora);
    printf("Minuto --> %i\n", *hoje.pMinuto);
    printf("Segundo --> %i\n", *hoje.pSegundo);

    *hoje.pSegundo = 1000;
    printf("Segundo --> %i\n", *hoje.pSegundo);

    getchar();
    return 0;
};




