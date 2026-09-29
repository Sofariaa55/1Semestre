#include <stdio.h>
void main(){
	//Gerar números aleatorios 
	float numeros[10];
	//Pega o tempo atual
	srand (time(NULL));
	//Gerar 10 números  a partir do tempo
	for(int i = 0; i < 10; i++){
		float x = rand();
		printf("%f\n", x);
	}
	getch();
}