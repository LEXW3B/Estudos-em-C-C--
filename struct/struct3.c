#include <stdio.h>

int main(void){

    struct horario{
        int horas;
        int minutos;
        int segundos;
    }agora = {10,20,30};// esse é o melhor jeito

    //struct horario agora = {.segundo = 10, .minutos = 17, .horas = 01}; tambem poderia ser assim

    printf("\n\t-->  %i:%i:%i  <--\n\n", agora.horas, agora.minutos, agora.segundos);

    getchar();
    return 0;
}