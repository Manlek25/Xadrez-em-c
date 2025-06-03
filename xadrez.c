#include <stdio.h>

// ====================
// Movimento Recursivo da Torre
// ====================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ====================
// Movimento Recursivo e com Loops Aninhados do Bispo
// ====================
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {  
            printf("Cima Direita\n");
        }
    }
    printf("(Recursivo):\n");
    moverBispoRecursivo(casas);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ====================
// Movimento Recursivo da Rainha
// ====================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ====================
// Movimento Complexo do Cavalo com loops aninhados
// ====================
void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            if (i == 1) {
                printf("Direita\n");
                break; // interrompe quando fizer o L
            } else {
                continue;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(5);

    moverCavalo();

    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    return 0;
}
