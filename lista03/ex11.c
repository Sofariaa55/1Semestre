#include <stdio.h>
void main(){
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    // Começa em 1 e vai de 2 em 2 (apenas ímpares)
    for(int i = 1; i <= num; i += 2){
        printf("%d\n", i);
    }
}