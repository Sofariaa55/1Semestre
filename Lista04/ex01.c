#include <stdio.h>
void main(){
	SetConsoleOutputCp(CP_UTF8);
	float altura, peso, imc;
	char nome[50];
	
	printf("Informe seu primeiro nome : ");
	scanf("%s", &nome);
	printf("Informe seu peso : ");
	scanf("%f", &peso);
	printf("Informe sua altura : ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if(imc <= 18.5){
		printf(" %s\n %.2f = Abaixo do peso", nome, imc);

	}else if(imc >= 18.6 && imc <= 24.9){
	    printf(" %s\n %.2f = Peso normal", nome, imc);
	}else if(imc >= 25 && imc <= 29.9){
		printf(" %s\n %.2f = Sobrepeso", nome, imc);
	
	}else if(imc >= 30 && imc <= 34.9){
		printf(" %s\n %.2f = Obesidade Grau I", nome, imc);

    }else if(imc >= 35 && imc <= 39.9){
    	printf(" %s\n %.2f = Obesidade Grau II", nome, imc);
    	
	}else{
		printf(" %s\n %.2f = Obesidade Grau III", nome, imc);
	}
	getch();
}