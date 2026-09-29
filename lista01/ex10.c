#include <stdio.h>
void main(){
	//Variáveis
	char cidade[50];
	int eleitores, votos;
	float porcentagem;
	//Entrada
	printf("Digite o nome da cidade:\n");
	scanf("%s", cidade);
	printf("Digite o numero total de eleitores:\n");
	scanf("%d", &eleitores);
	printf("Digite o numero total de votos apurados:\n");
	scanf("%d", &votos);
	//Processamento
	porcentagem = (votos * 100.0) / eleitores;
	//Saída
	printf("Cidade: %s\n", cidade);
	printf("Porcentagem de participaçao dos eleitores: %.2f%%", porcentagem);
	getch();
}