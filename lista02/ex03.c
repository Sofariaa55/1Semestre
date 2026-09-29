#include <stdio.h>
void main(){
	
	float nota1, nota2, media; 
	printf("Informe a primeira nota : ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota : ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	if ( media >= 7 ) {
		printf("Aprovado\n");
	}else {
		printf("Reprovado\n");
	}
}