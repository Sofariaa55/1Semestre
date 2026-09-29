#include <conio.h>
void main(){
    char nome[20];
    float salario, reajuste, novoSalario;
    printf("Digite seu nome:\n");
    scanf(" %s" , &nome);
    printf("Digite o salario:\n");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste:\n");
    scanf("%f", &reajuste);
    
    novoSalario = salario + salario * reajuste / 100;
    
    printf( "%s seu novo salario é R$ %.2f", nome, novoSalario);
    getch();
}