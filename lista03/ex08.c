#include <stdio.h>
void main(){
    int num;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("Quadrado: %d\n", num * num);

    }while(num != 4);

    printf("Voce digitou 4, programa encerrado!\n");
}