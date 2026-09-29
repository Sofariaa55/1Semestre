#include <stdio.h>
void main(){
	for (int i = 1; i <= 10; i++){ // número da tabuada
		printf("Tabuada do %d:\n", i);
		
		for (int j = 1; j <= 10; j++){ // multiplicador
			printf("%d x %d = %d\n", i, j, i * j);
		}
		
		printf("\n"); // pular linha entre tabuadas
	}
}