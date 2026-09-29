#include<stdio.h>
#include<windows.h>

struct Produto{
	char nome[50];
	float preco;
	int quant;
};

void main(){
	SetConsoleOutputCP(65001);
	struct Produto prod;
	
	strcpy(prod.nome, "Produto de cabelo");
	prod.preco = 200;
	prod.quant = 2;

	printf("%s, R$ %.2f, %d", prod.nome, prod.preco, prod.quant);
	getch();
}