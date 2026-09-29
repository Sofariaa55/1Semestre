#include <stdio.h>
void main(){
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    // Laço para mostrar de 0 até o número digitado de 2 em 2
    for(int i = 0; i <= num; i += 2){
        printf("%d\n", i);
    }
}