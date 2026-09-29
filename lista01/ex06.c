#include <stdio.h>
void main(){
	float v, t, d;
	printf("Digite a distancia em km que um aviao 747-300 deverar percorrer \n");
	scanf(" %f", &d);
	v = 900;
	t = d / v; 
	printf("O tempo que o aviao ira demorar para percorrer e igual a %.2f horas", t);
	getch();
}