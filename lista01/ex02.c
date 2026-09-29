#include <stdio.h>
void main(){
	float v, d , t; 
	
	printf("Digite a velocidade em km/h:\n");
	scanf("%f", &v);
	printf("Digite a distancia a ser percorrida em km\n");
	scanf("%f", &d);
	
	t = v / d;
	
	printf("Você levará %.1f horas para percorrer.", t);
	getch();
}