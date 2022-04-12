#include <stdio.h>
#include <stdlib.h>

int main(){
    int iJ = 17;
    int iV = 60;
    int idade = 0;

    printf("\nQual a sua idade: ");
    scanf("%i", &idade);

    if(idade<=iJ){
        printf("\nVocê é jovem");
    }else{
        if((idade>iJ)&&(idade<iV)){
            printf("\nVocê e de meia-idade");
        }else{printf("\nVocê é velho");}
    }

    return 0;
}



