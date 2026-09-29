#include<stdio.h>
#include<windows.h>

// Função para verificar se o número é primo
int primo(int n){
	
	if(n <= 1){
		return 0;
	}
	
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	
	return 1;
}

void main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	if(primo(num)){
		printf("O número [%d] é primo.", num);
	}else{
		printf("O número [%d] não é primo.", num);
	}
	
	getch();
}