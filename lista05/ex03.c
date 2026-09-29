#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];
    int maior, posicao;

    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    maior = vetor[0];
    posicao = 0;

    for (int i = 1; i < 25; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Vetor:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n\nMaior valor: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}