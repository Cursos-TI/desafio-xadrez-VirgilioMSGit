#include <stdio.h>

/*  PARTE ANTES DO DESAFIO MESTRE

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
    FIM ANTES DO DESAFIO MESTRE */


// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (diagonal cima-direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

int main() {
    // ---------- Movimento da Torre ----------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre); // Recursivo
    printf("\n");

    // ---------- Movimento do Bispo (recursivo + aninhado) ----------
    int casasBispo = 3;
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    int movimentosVerticais = 3;
    int movimentosHorizontais = 3;

    // Loop externo: vertical (subindo)
    for (int i = 0; i < movimentosVerticais; i++) {
        // Loop interno: horizontal (direita)
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (i == j) {
                printf("Cima Direita\n"); // Simula movimento diagonal
            }
        }
    }
    printf("\n");

    // ---------- Movimento da Rainha ----------
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha); // Recursivo
    printf("\n");

    // ---------- Movimento do Cavalo ----------
    /*
        Movimento do cavalo em "L":
        - 2 casas para cima
        - 1 casa para direita
        Repetido para número definido de movimentos
    */
    printf("Movimento do Cavalo:\n");

    int movimentosCavalo = 3;
    int casasParaCima = 2;
    int casasParaDireita = 1;

    // Loop externo controla o número total de movimentos "L"
    for (int i = 0; i < movimentosCavalo; i++) {
        // Move duas casas para cima
        for (int j = 0; j < casasParaCima; j++) {
            if (j == 1 && i == 1) continue; // Exemplo de uso de continue
            printf("Cima\n");
        }

        // Move uma casa para direita
        int direita = 0;
        while (direita < casasParaDireita) {
            if (i == 2 && direita == 0) break; // Exemplo de uso de break
            printf("Direita\n");
            direita++;
        }
    }

    return 0;
}