#include <stdio.h>

int main(void){

    struct horario{//definir o tipo da estrutura e pode ser qualquer tipo dentro deste esqueleto
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };
    
    struct horario agora;     //toda a estrutura horario esta contida na variavel ->AGORA<-

    agora.horas = 15;//declação de valores
    agora.minutos = 17;
    agora.segundos = 30;
//            FIM

    struct horario depois;
    depois.horas = agora.horas + 15;
    depois.minutos = agora.minutos;
    depois.segundos = agora.segundos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';//tem que ser aspas simples
//            FIM

    printf("\n\t-->  %i:%i:%i  <--\n\n", agora.horas, agora.minutos, agora.segundos);

    printf("\n\t-->  %i:%i:%i  <--\n\n", depois.horas, depois.minutos, depois.segundos);
    printf("\n%f\n", depois.teste);
    printf("\n%c\n", depois.letra);


    system("pause");
    return 0;
}