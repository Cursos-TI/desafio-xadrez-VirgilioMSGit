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

    // Simulação do Cavalo
    // O cavalo se move 2 casas para baixo e 1 para a esquerda (em "L")
    printf("\nMovimento do Cavalo:\n");

    // Definindo o número de movimentos que o cavalo fará
    int movimentosCavalo = 3; // Número total de movimentos em "L"
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    // Loop externo for: repete o movimento completo em "L"
    for (int i = 0; i < movimentosCavalo; i++) {
        // Loop interno for: move duas casas para baixo
        for (int j = 0; j < casasParaBaixo; j++) {
            printf("Baixo\n");
        }

        // Loop interno while: move uma casa para a esquerda
        int esquerda = 0;
        while (esquerda < casasParaEsquerda) {
            printf("Esquerda\n");
            esquerda++;
        }
    }

    return 0;
}
