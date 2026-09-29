#include <stdio.h>
void main(){
	int a, b, c, d;
	printf("Digite três números inteiros:\n");
	scanf("%d %d %d", &a, &b, &c); 
	d = (a + b) / c;
	printf("(a + b) / c = %d", d);
	getch();
}