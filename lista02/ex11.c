#include <stdio.h>
void main (){
	char turno;
	printf("Informe o turno que voce estuda : \n(m para matutino, v para vespertino, n para noturno)\n");
	scanf("%s", &turno);
	
	if(turno == 'm') {
		printf("Bom dia");
		
	}else if(turno == 'v') {
		printf("Boa tarde");
		
	}else if(turno == 'n') {
		printf("Boa noite");
		
	}else {
		printf("Turno invalido");
	}
	getch();
}