#include <stdio.h>
void main(){
    int num;

    // Laço que continua até o usuário digitar 4
    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
    }while(num != 4);

    printf("Voce digitou 4, programa encerrado!\n");
}