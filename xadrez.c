#include <stdio.h>

int main() {
    // Movimentação da Torre - 5 casas para a direita (usando for)
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo - 5 casas na diagonal superior direita (usando while)
    printf("Movimentação do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimentação da Rainha - 8 casas para a esquerda (usando do-while)
    printf("Movimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    
    return 0;
}
