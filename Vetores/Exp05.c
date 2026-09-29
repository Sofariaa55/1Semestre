#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main(){
	//Gerar 10 números aleatórios inteiros de 0 a 10
	int numeros[10];
	//Pega o tempo atual
	srand(time(NULL));
	//Gerar 10 números a partir do tempo
	for(int i = 0; i < 10; i++){
		int x = rand() % 11;
		numeros[i] = x;
	}
	//Mostrar os números gerados
	for(int i = 0; i< 10; i++){
		printf("%d\n",numeros[i]);
	}
	getch();
}