#include <stdio.h>
void main(){
    int soma = 0;

    // Laço para somar de 0 até 100
    for(int i = 0; i <= 100; i++){
        soma += i;
    }

    printf("Soma = %d\n", soma);
}