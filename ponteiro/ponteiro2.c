#include <stdio.h>

int main(void){

    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora, *depois;
    depois = &agora;

    depois->horas = 20;
    depois->minutos = 80;
    depois->segundos = 50;

    int somatorio = 100;

    struct horario antes;
    antes.horas = somatorio + depois->segundos;
    antes.minutos = agora.horas + depois->minutos;
    antes.segundos = depois->minutos + depois->segundos;

    printf("\n\t-->  %i:%i:%i  <--\n\n", agora.horas, agora.minutos, agora.segundos);
    printf("\n\t-->  %i:%i:%i  <--\n\n", antes.horas, antes.minutos, antes.segundos);

    getchar();
    return 0;
};




