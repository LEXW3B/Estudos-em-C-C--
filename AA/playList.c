#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int linha = 0;
	int j = 0;
	int a = 0;
	int soma=0;
	int segundos; 
	int segundo;
	int minutos;
	int minuto;
	int hora;
	int maior=0;
	
	printf("quantas musicas tem essa playlist:");
	scanf("%d", &n);
	
	printf("quantos generos musicais tem essa playlist:");
	scanf("%d", &a);
	
	char genero[a][30];
	int duracao[a];
	char mus[n][50];
	
	char playlist[n];

	for(i=0;i<n;i++){
		
		printf("qual o nome da musica [%i]:\n", i + 1);
		scanf("%s", &mus[i]);			
		printf("qual genero:", i);
		scanf("%s", &genero[i]);
		printf("o tempo da musica: ");
		scanf("%d", &duracao[i]);
		soma= soma+duracao[i];
	
	}
	 segundos = soma; 
	 segundo = segundos % 60;
	 minutos = segundos / 60;
	 minuto = minutos % 60;
	 hora = minutos / 60;
	
	printf("\n\n--MUSICAS CADASTRADAS E SUA ORDEM--\n\n");
	
	for(i = 0; i < n; i++){
	
		printf("musica: %s com genero: %s\n", mus[i], genero[i]);
				
	}
	
	printf("\n\n--MINHA PLAYLIST-- \n\n");
	
	for(i = 0; i < n; i++){
		
		printf("Minhas musicas da %d posicao da playlist: %s com %i segundos\n", i+1, mus[i], duracao[i]);								
	}
	printf("\n\n");
	printf(" a soma do tempo de duracao da playlist e: %02d:%02d:%02d", hora, minuto, segundo);
	
		for(i = 0; i < n; i++){
		if(mus[i]>=maior)
		maior = mus[i];	
		}
	
		printf("\n\n musica de maior duracao e: %s", maior);
		
	if(maior == maior){
		printf("%s", mus[i]);
	}

	return 0;
}










