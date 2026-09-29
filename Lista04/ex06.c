#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int area, galoes, latas;
	int difLatas, difGaloes;
	int areaGalao = 18, areaLata = 108;
	float precoGaloes, precoLatas;
	//Galão 3.6 litros, Lata 18 litros
	//1 litro pinta 6m2
		printf("Informe a área em m2 a ser pintada:\n");
	scanf("%d", &area);	
	//resolvendo matematicamente	
	latas = area / latas;
	difLatas = area % areaLata;
	precoLatas = latas * 80.0;	
	printf("%d latas de 18 litros R$ 80.00 cada\n", latas, precoLatas);
	galoes = difLatas / areaGalao;	
	if(difLatas % areaGalao != 0){
		galoes = galoes + 1;
	}
	if(galoes > 3){
		galoes = 0;
		latas = latas + 1;
	}
	precoGaloes = galoes * 25.0;
	precoLatas = latas * 80.0;
	printf("%d galões de 3.6 litros a R$ 25.00\n", galoes), precoGaloes;
	printf("Total do orçamento R$ %.2f\n", precoLatas + precoGaloes);	
	getch();
}

	
	
	

	
	
	