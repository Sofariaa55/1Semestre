#include <stdio.h>

void main(){
	int num1, num2;
	printf("Digite um numero inteiro :");
	scanf("%d", &num1);
	printf("Digite outro numero inteiro :");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("%d", num1);
		
	}else if(num1 < num2){
	    printf("%d", num2);	
	    
	}else {
		printf("numero iguais");	
	}
	
	
	getch();
}
