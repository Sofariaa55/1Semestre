13) #include <stdio.h>

void main(){
    int num;
    int fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    // Calcula o fatorial
    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }

    printf("Fatorial de %d = %d\n", num, fatorial);
}