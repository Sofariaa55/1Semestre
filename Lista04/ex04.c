#include <stdio.h>
#include <Windows.h>
void main (){
		SetConsoleOutputCP(CP_UTF8);
	float salhora, horas;
	float salBruto, ir, inss, sindicato, salLiquido;
	printf("Digite quanto você ganha por hora:\n");
	scanf("%f", &salHora);
	printf("Digite quantas horas trabalhadas:\n");
	scanf("%f", &horas);
	salBruto = salBruto * horas;
	ir = salBruto * 11 / 100;
	inss = salBruto * 8 / 100;
	sindicato = salBruto * 5 / 100;
	salLiquido = salBruto - ir - inss - sinddicato;
	printf("+ Salário Bruto : R$ %.2f\n", salBruto);
	printf("- IR : R$ %.2f\n", ir);	
	printf(" INSS (8%) : R$ %.2f\n", inss);
	printf("- Sindicato ( 5%) : R$ %.2f\n", sindicato);
	printf("= Salário Liquido : R$ %.2f\n", silLiquido);
	getch();
}