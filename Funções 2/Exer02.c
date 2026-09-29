#include <stdio.h>

int fatorial(int n) {
    int i, fat = 1;

    for(i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Fatorial: %d", fatorial(numero));

    return 0;
}