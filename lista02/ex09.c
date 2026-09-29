#include <stdio.h>
void main(){
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	if (numero > 100) {
		printf("Maior que 100");
	}else {
		printf("Menor ou igual a 100");
		getch();
	}
}
	
