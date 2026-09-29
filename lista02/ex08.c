#include <stdio.h>
void main(){
	float v, d10, d15;
	printf("Digite o valor da compra: ");
	scanf("%f", &v);
	if(v > 500) {
		d10 = v / 10 * 9;
		printf("o valor final da compra e: %.2f", d10);
	}else if (v > 200 && v <= 500) { 
	d15 = v / 100 * 95;
	printf("o valor final da compra e: %.2f", d15);
	}else {
	printf("o valor final da compra e: %.2f", v);	
	}
	getch();
}