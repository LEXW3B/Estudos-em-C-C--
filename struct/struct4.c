#include <stdio.h>

int main(void){

    struct horario {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario teste[5] = {
        {10,20,30},{30,40,50},{60,70,80},{90,80,70},{00,00,00}
    };

// Este é um jeito mais inteligente de ser feito o mesmo codigo lá de baixo
    
    int i;
    for(i = 0; i < 5; i++){
        printf("\n\t-->  %i:%i:%i  <--\n\n", teste[i].horas,
                                             teste[i].minutos,
                                             teste[i].segundos);
    };

    // esse e um jeito de ser feito

    // struct horario teste[5];
    // teste[0].horas = 10;
    // teste[0].minutos = 20;
    // teste[0].segundos = 30;

    // printf("\n\t-->  %i:%i:%i  <--\n\n", teste[0].horas,
    //                                      teste[0].minutos,
    //                                      teste[0].segundos);


    system("pause");
    return 0;
};






