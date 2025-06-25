#include <stdio.h>

// Movimento das peças TORRE, BISPO E RAINHA


 // Movimento da TORRE - 5 casas para a direita usando FOR
int main() {
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita usando WHILE
    printf("Movimento do BISPO:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da RAINHA - 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da RAINHA:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}