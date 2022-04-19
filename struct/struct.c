#include <stdio.h>

int main(void){

    struct horario{//definir o tipo da estrutura
        int horas;
        int minutos;
        int segundos;
    };
    
    struct horario agora;     //toda a estrutura horario esta contida na variavel ->AGORA<-

    agora.horas = 15;//declação de valores
    agora.minutos = 17;
    agora.segundos = 30;

    printf("\n\t-->  %i:%i:%i  <--\n\n", agora.horas, agora.minutos, agora.segundos);


    system("pause");
    return 0;
}
