#include <stdio.h>
#include <windows.h>

struct Produto {
    char nome[50];
    float preco;
    int quant;
    float vt;
};
void main() {
    SetConsoleOutputCP(65001);
    struct Produto prod;

    printf("Digite o nome do produto: ");
    scanf("%s", prod.nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &prod.preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &prod.quant);
    prod.vt = prod.preco * prod.quant;

    printf("\nDados do Produto:\n");
    printf("Nome: %s, preço: R$ %.2f, quantidade: %d\n", prod.nome, prod.preco, prod.quant);
    printf("Valor total em estoque: R$ %.2f\n", prod.vt);

    getch();
}