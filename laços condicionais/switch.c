#include <stdio.h>
#include <stdlib.h>

int main(){ 
       
    printf("Digite um valor entre 0 e 9:\n");  
    int i;       
    scanf("\n%i", &i);

    switch(i){
        case 0:
        printf("\nA opção digitada foi 'zero'.\n");
        break;
        case 1:
        printf("\nA opção digitada foi 'um'.\n");
        break;
        case 2:
        printf("\nA opção digitada foi 'dois'.\n");
        break;
        case 3:
        printf("\nA opção digitada foi 'tres'.\n");
        break;
        case 4:
        printf("\nA opção digitada foi 'quatro'.\n");
        break;
        case 5:
        printf("\nA opção digitada foi 'cinco'.\n");
        break;
        case 6:
        printf("\nA opção digitada foi 'seis'.\n");
        break;
        case 7:
        printf("\nA opção digitada foi 'sete'.\n");
        break;
        case 8:
        printf("\nA opção digitada foi 'oito'.\n");
        break;
        case 9:
        printf("\nA opção digitada foi 'nove'.\n");
        break;
        default:
        printf("\nA opção digitada foi default.\n");
    }
    return 0;
}



