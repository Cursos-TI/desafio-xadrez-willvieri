#include <stdio.h>

//
// ======== Funcoes Recursivas ========
//

// Torre (move-se para a direita recursivamente)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha (move-se para a esquerda recursivamente)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo (move-se em diagonal superior-direita recursivamente)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

//
//Movimento do Bispo com loops aninhados
//

void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

//
// Movimento Complexo do Cavalo 
// Movimento: 2 casas para cima, 1 para a direita ("L")
//

void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    int movimentosFeitos = 0;
    int limiteMovimentos = 1;  // Executa o movimento em "L" 1 vez

    for (int i = 0; i < 5; i++) {  // Controle geral do loop
        if (movimentosFeitos >= limiteMovimentos) {
            break;
        }

        int passosCima = 0;
        while (passosCima < 2) {  // 2 passos para cima
            printf("Cima\n");
            passosCima++;

            if (passosCima == 2) {
                for (int j = 0; j < 1; j++) {  // 1 passo para direita
                    printf("Direita\n");
                    movimentosFeitos++;
                    break;
                }
            }
        }
    }
}

//
// Funcao Principal 
//

int main() {
    // Torre
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);
    printf("\n");

    // Bispo (recursivo)
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita - Recursivo):\n");
    moverBispo(5);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);
    printf("\n");

    // Cavalo (com loops aninhados)
    moverCavalo();
    printf("\n");

    // Bispo com loops aninhados (bonus)
    moverBispoComLoops(5);
    printf("\n");

    return 0;
}
