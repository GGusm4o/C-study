#include <stdio.h>
/*
Vetores com estruturas de repetição:
Um vetor é uma coleção ordenada de elementos do mesmo tipo.
Para manipular os elementos de um vetor, as estruturas de
repetição são extremamente úteis. 

*/
int main() {
    // Declaração e inicialização de um vetor usando estruturas de repetição
    int vetor[5]; // Declaração de um vetor de 5 inteiros

    // Inicialização do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++){ // Loop para percorrer os índices do vetor
        vetor[i] = i * 2; // Atribuindo valores ao vetor
    }
    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    for (int i = 0; i< 5; i++){ // Loop para percorrer os índices do vetor
        printf("Vetor[%d] = %d\n", i, vetor[i]); // Imprimindo os valores do vetor
    }
    return 0;
}