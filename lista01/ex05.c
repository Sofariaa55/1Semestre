#include <stdio.h>
void main(){
	int n, n1, n2;
	printf("Digite um número ”n” inteiro, positivo e diferente de zero: \n");
	scanf(" %d", &n);
	n1 = n + 1;
	n2 = n - 1;
	printf("%d+1 é %d \n%d-1 é %d", n, n1, n, n2 );
	getch();
}