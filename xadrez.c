// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// ** Nível Novato - Movimentação das Peças **
// Declarar variáveis constantes para representar o número de casas que cada peça pode se mover.
/* Implementação de Movimentação do Bispo - Utilizar uma estrutura de repetição para simular a movimentação do Bispo 
em diagonal.*/
/* Implementação de Movimentação da Torre - Utilizar uma estrutura de repetição para simular a movimentação da Torre
para a direita.*/
/* Implementação de Movimentação da Rainha - Utilizar uma estrutura de repetição para simular a movimentação da Rainha 
para a esquerda.*/

#include <stdio.h>

int main() {
    // Definição das constantes para número de casas
    const int CASAS_TORRE = 5;   // Torre move 5 casas para direita
    const int CASAS_BISPO = 5;   // Bispo move 5 casas na diagonal (cima/direita)
    const int CASAS_RAINHA = 8;  // Rainha move 8 casas para esquerda
    
    // Variáveis para contagem
    int i;
    
    printf("\n*** MOVIMENTO DA TORRE ***\n");
    printf("A Torre move-se 5 casas para a direita\n\n");
    // Usando FOR para simular o movimento da Torre
    for (i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    
    printf("\n*** MOVIMENTO DO BISPO ***\n");
    printf("O Bispo move-se 5 casas na diagonal para cima e à direita\n\n");
    // Usando WHILE para simular o movimento do Bispo
    i = 1;
    while (i <= CASAS_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }
    
    printf("\n*** MOVIMENTO DA RAINHA ***\n");
    printf("A Rainha move-se 8 casas para a esquerda\n\n");
    // Usando DO-WHILE para simular o movimento da Rainha
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= CASAS_RAINHA);
    
    return 0;
}