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

         // Navio Vertical
    int linha_vertical = 5, coluna_vertical = 6;
    for (int i = 0; i < 3; i++) {
        if (linha_vertical + i < TAM_TABULEIRO) {
            tabuleiro[linha_vertical + i][coluna_vertical] = 3; // Marca a posição do navio
        }
    }

     // Exibe o tabuleiro
     printf("Tabuleiro de Batalha Naval:\n");
     printf("  "); // Espaço para alinhamento
     for (char j = 'A'; j <= 'J'; j++) { 
         printf("%c ", j);
     }
     printf("\n");
     for (int i = 1; i <= TAM_TABULEIRO; i++) {
         printf("%d ", i);
         for (int j = 0; j < TAM_TABULEIRO; j++) {
             printf("%d ", tabuleiro[i - 1][j]); 
         }
         printf("\n");
     }
 
     return 0;
 }