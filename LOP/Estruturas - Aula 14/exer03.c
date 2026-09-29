#include<stdio.h>
#include<windows.h>
struct Produto{
	char nome[50];
	float preco;
	int quant;
	float vt;
};
void main(){
	SetConsoleOutputCP(65001);
	struct Produto prods[5];
 
	strcpy(prods[0].nome, "Produto de banheiro");
	strcpy(prods[1].nome, "Produto de cozinha");
	strcpy(prods[2].nome, "Produto de cabelo");
	strcpy(prods[3].nome, "Produto de limpeza");
	strcpy(prods[4].nome, "Produto de desenho");
	prods[0].preco = 80;
	prods[1].preco = 70;
	prods[2].preco = 200;
	prods[3].preco = 40;	
	prods[4].preco = 30;
	prods[0].quant = 3;
	prods[1].quant = 5;
	prods[2].quant = 2;
	prods[3].quant = 3;
	prods[4].quant = 8;
	prods[0].vt = (prods[0].preco * prods[0].quant);
	prods[1].vt = (prods[1].preco * prods[1].quant);
	prods[2].vt = (prods[2].preco * prods[2].quant);
	prods[3].vt = (prods[3].preco * prods[3].quant);
	prods[4].vt = (prods[4].preco * prods[4].quant);
      
      printf("%s, R$ %.2f, %d\n", prods[0].nome, prods[0].preco, prods[0].quant);
      printf("Valor total em estoque: %.2f\n\n", prods[0].vt);
      printf("%s, R$ %.2f, %d\n", prods[1].nome, prods[1].preco, prods[1].quant);
      printf("Valor total em estoque: %.2f\n\n", prods[1].vt);
      printf("%s, R$ %.2f, %d\n", prods[2].nome, prods[2].preco, prods[2].quant);
      printf("Valor total em estoque: %.2f\n\n", prods[2].vt);
      printf("%s, R$ %.2f, %d\n", prods[3].nome, prods[3].preco, prods[3].quant);
      printf("Valor total em estoque: %.2f\n\n", prods[3].vt);
      printf("%s, R$ %.2f, %d\n", prods[4].nome, prods[4].preco, prods[4].quant);
      printf("Valor total em estoque: %.2f\n\n", prods[4].vt);
      
      getch();
}
