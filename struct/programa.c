#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(void){

    void receberHorarios(struct horario lista[5]);
    void printHorarios(struct horario lista[5]);
    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printHorarios(listaHorarios);


    system("pause");
    return 0;
};

void receberHorarios(struct horario lista[5]){

    int i;
    for(i = 0; i < 5; i++){
        printf("\n\tDigite o %i° horario (hh:mm:ss): \n", i + 1);
        scanf("%i:%i:%i", &lista[i].hora,
                          &lista[i].minuto,
                          &lista[i].segundo);
    }
};

void printHorarios(struct horario lista[5]){

    int i;
    for(i = 0; i < 5; i++){
        printf("\n\tO %i° horario é: %i:%i:%i\n", i + 1,                     
                          lista[i].hora,
                          lista[i].minuto,
                          lista[i].segundo);
    }    
};





