#include <stdio.h>

int main() {
    // Movimento da TORRE 
    // Move-se 5 casas para a direita
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do BISPO 
    // Move-se 5 casas na diagonal: cima + direita
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    printf("\n");

    // Movimento da RAINHA
    // Move-se 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}
