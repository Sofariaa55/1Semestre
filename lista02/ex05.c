#include <stdio.h>
void main(){
	float salario, novoSalario;
	printf("Informe o salario do funcionario: \n");
	scanf("%f", &salario);
	if ( salario <= 1800) {
	    novoSalario = salario * 15 / 100 + salario;
	}else {
		novoSalario = salario * 10 / 100 + salario;
	}
	printf("Seu novo salário é %.2f",novoSalario);
	getch();
}
