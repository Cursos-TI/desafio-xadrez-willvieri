#include <stdio.h>

int main() {
    // Simulacao do movimento da TORRE: 5 casas para a direita
    printf("Movimento da Torre (5 casas para a Direita):\n");

    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Separador visual

    // Simulacao do movimento do BISPO: 5 casas na diagonal cima, direita
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    printf("\n");

    // Simulacao do movimento da RAINHA: 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    printf("\n");

    // Simulacao do movimento do CAVALO: em "L" - 2 para baixo, 1 para a esquerda
    printf("Movimento do Cavalo (2 casas para Baixo, 1 para a Esquerda):\n");

    int movimentosL = 1; // Realiza 1 movimento em L
    for (int l = 0; l < movimentosL; l++) {
        // Movimento para baixo (2 vezes)
        int passoBaixo = 0;
        while (passoBaixo < 2) {
            printf("Baixo\n");
            passoBaixo++;
        }

        // Movimento para a esquerda (1 vez)
        printf("Esquerda\n");
    }

    return 0;
}
