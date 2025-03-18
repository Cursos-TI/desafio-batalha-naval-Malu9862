#include <stdio.h>

#define TAM_TABULEIRO 10

int main() {
    // Posicionamento dos Navios
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0}; // Inicializa o tabuleiro com 0 (água)

        // Navio Horizontal
        int linha_horizontal = 2, coluna_horizontal = 3; 
        for (int i = 0; i < 3; i++) { 
            if (coluna_horizontal + i < TAM_TABULEIRO) {
                tabuleiro[linha_horizontal][coluna_horizontal + i] = 3; // Marca a posição do navio
            }
        }