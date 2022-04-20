#include <stdio.h>

int main(void){

    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    printf("\n\t --> %i <-- \n", teste);

    getchar();
    return 0;
};

void testeVariavel(int x){//aqui recebe de uma variavel//não retorna nada (void)
    ++x;
};
void testePonteiro(int *pX){//aqui recebe de um endereço da memoria //não retorna nada (void)
    ++*pX;
};

