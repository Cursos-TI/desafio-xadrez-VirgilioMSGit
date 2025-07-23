#include <stdio.h>

int main() {
    
    // Simulação da Torre
    
    int casasTorre = 5; // Número de casas a se mover
    printf("Movimento da Torre:\n");

    // Estrutura for: move 5 casas para a direita
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Simulação do Bispo
    int casasBispo = 5; // Número de casas a se mover
    printf("\nMovimento do Bispo:\n");

    // Estrutura while: move 5 casas na diagonal para cima e à direita
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Simulação da Rainha
    
    int casasRainha = 8; // Número de casas a se mover
    printf("\nMovimento da Rainha:\n");

    // Estrutura do-while: move 8 casas para a esquerda
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
