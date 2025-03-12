#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0}; // Inicializa o tabuleiro com zeros

    // Posicionamento dos navios

    // Navios de posicionamento inicial
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;

    // Navios adicionais
    for (int i = 0; i < 3; i++) tabuleiro[1][6 + i] = 3; // Navio horizontal
    for (int i = 0; i < 4; i++) tabuleiro[6 + i][1] = 3; // Navio vertical
    for (int i = 0; i < 3; i++) tabuleiro[6 + i][6 + i] = 3; // Navio diagonal (baixo-direita)
    for (int i = 0; i < 2; i++) tabuleiro[9 + i][3 - i] = 3; // Navio diagonal (baixo-esquerda)

    // Exibe o tabuleiro
    printf("Tabuleiro Completo:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}