#include<stdio.h>
#include<windows.h>
struct Cliente{
	char nome[50];
	int idade;
	char email[100];
};
void main(){
	SetConsoleOutputCP(65001);
	struct Cliente c1, c2;
	
	strcpy(c1.nome, "João da Silva");
	c1.idade = 18;
	strcpy(c1.email, "joao@email.com");
	
	strcpy(c2.nome, "Maria Aparecida");
	c2.idade = 13;
	strcpy(c2.email, "Maria1A@email.com");
	
	printf("%s, %d, %s", c1.nome, c1.idade, c1.email);
	printf("%s, %d, %s", c2.nome, c2.idade, c2.email);
	getch();
}