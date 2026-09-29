#include <stdio.h>
void main(){
	char t[30];
	int pontos; 
	printf("Informe os pontos do time ");
	scanf("%d", &pontos );
	if (pontos >= 20){
		printf ("Classificado");
	} else if(pontos >= 10 && pontos < 20) {
	printf("Em disputa ");	 
	}else {
		printf("Eliminado");
	}
}