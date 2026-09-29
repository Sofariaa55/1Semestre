#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\n1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        resultado = soma(num1, num2);
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 2) {
        resultado = subtracao(num1, num2);
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 3) {
        resultado = multiplicacao(num1, num2);
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 4) {
        resultado = divisao(num1, num2);
        printf("Resultado: %.2f", resultado);
    }
    else {
        printf("Opcao invalida");
    }

    return 0;
}