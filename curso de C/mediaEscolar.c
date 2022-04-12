#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, nota4, media;
    nota1=nota2=nota3=nota4=media=0;

    printf("========== Media Escolar 1.0 ==========\n\n");
    printf("\nDigite sua primeira nota bimestral: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota bimestral: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota bimestral: ");
    scanf("%f", &nota3);
    printf("Digite sua quarta nota bimestral: ");
    scanf("%f", &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("\nSua media neste semetre foi: %f", media);

    if(media>=7){
        printf("\nPrabens você foi APROVADO!!!");
    }else if(media>=3){
        printf("\nREPROVADO, vai para a recuperação.");
    }else{
        printf("\nParabéns você vai repitir de ano direto kkkkk.");
    }

    return 0;
}






