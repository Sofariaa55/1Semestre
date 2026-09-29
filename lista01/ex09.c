#include <stdio.h>
void main(){
	//Variáveis
	char nome[50];
	float preco, novoPreco;
	//Entrada
	printf("Digite o nome da mercadoria:\n");
	scanf("%s", nome);
	printf("Digite o preço da mercadoria:\n");
	scanf("%f", &preco);
	//Processamento
	novoPreco = preco + (preco * 0.05);
	//Saída
	printf("Mercadoria: %s\n", nome);
	printf("Novo preço com aumento de 5%%: %.2f", novoPreco);
	getch();
}


