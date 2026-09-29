#include <stdio.h>
#include <Windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	float peso, excesso, multa;
	printf("Informe, em kilos, a quantidade de peixe\n");
	scanf("%f", &peso);
	if(peso > 50){
		excesso = peso - 50;
		multa = excesso * 4;
		printf("O peso %.2f Kg excede o limite em %.2f Kg \nA multa a ser paga sera : R$%.2f", peso, excesso, multa);
	}else{
		printf("O peso %.1f Kg nao excede o limite", peso);
    }
	getch();
}
