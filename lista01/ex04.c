#include <stdio.h>
void main(){
	char t[30];
	int v, e, p;
	printf("Informe o nome do time \n");
	scanf("%s", &t);
	printf("Informe o numero de vitorias e de empates \n");
	scanf("%d %d", &v, &e);
	p = 3 * v + e;
	printf("O time %s tem %d pontos", t, p);
	getch();
}