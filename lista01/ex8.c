#include <stdio.h>
void main(){
	float r, h, a, v;
	printf(" Digite o raio (cm) do cilindro:\n");
	scanf("%f", &r);
	printf(" Digite a altura (cm) do cilindro :\n");
	scanf("%f" , &h);
	a = 2 * 3.14 * r * (r + h);
	v = 3.14 * r * r * h;
    printf("A área do cilindro é: %.2f cm2\n", a);
    printf("O volume do cilindro é: %.2f cm3\n", v);
    getch();
}
