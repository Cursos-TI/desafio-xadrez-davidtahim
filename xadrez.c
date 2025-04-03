#include <stdio.h>

// Definição das constantes para movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função recursiva para movimentação do Bispo
typedef struct {
    int x, y;
} Posicao;

void moverBispo(int x, int y, int mov) {
    if (mov == 0) return;
    printf("Bispo para (%d, %d)\n", x, y);
    moverBispo(x + 1, y + 1, mov - 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int x, int mov) {
    if (mov == 0) return;
    printf("Torre para (%d)\n", x);
    moverTorre(x + 1, mov - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int x, int mov) {
    if (mov == 0) return;
    printf("Rainha para (%d)\n", x);
    moverRainha(x - 1, mov - 1);
}

// Movimentação do Cavalo usando loops aninhados e múltiplas variáveis
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == 1 && j == 1) continue;
            printf("Cavalo move para (%d, %d)\n", -2 + i, -1 + j);
        }
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(0, 0, BISPO_MOV);
    
    printf("\nMovimentação da Torre:\n");
    moverTorre(0, TORRE_MOV);
    
    printf("\nMovimentação da Rainha:\n");
    moverRainha(0, RAINHA_MOV);
    
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
