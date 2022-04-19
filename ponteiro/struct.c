#include <stdio.h>

int main(void){

    struct horario{
        int hora;
        int minuto;
        int segundo;

    };

    struct horario agora, *depois;
    depois = &agora;

/*  (*depois).hora = 20;
    (*depois).minuto = 02;
    (*depois).segundo = 22;
        OU   */

    depois->hora = 20;//DA NO MESMO, MAS ASSIM E MAIS UTILIZADO
    depois->minuto = 02;
    depois->segundo = 22;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    getchar();
    return 0;
}








