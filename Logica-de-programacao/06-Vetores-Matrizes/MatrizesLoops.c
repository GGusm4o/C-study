#include <stdio.h>
/*
Matrizes com estruturas de repetição:
Uma matriz é uma coleção bidimensional (ou multidimensional)
de elementos do mesmo tipo. As estruturas de repetição são
essenciais para percorrer e manipular matrizes.
*/
int main() {
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros

    // Inicialização da matriz usando estruturas de repetição for aninhadas
    // For externo para percorrer as linhas da matriz
    for (int i = 0; i < 3; i++){ // Loop para percorrer as linhas da matriz
        // For interno para percorrer as colunas da matriz
        for (int j = 0; j < 3; j++){ // Loop para percorrer as colunas da matriz
            matriz[i][j] = i + j; // Atribuindo valores à matriz
        }
    }

    // Exibindo os elementos da matriz usando estruturas de repetição for aninhadas
    // For externo para percorrer as linhas da matriz
    for (int i = 0; i < 3; i++){ // Loop para percorrer as linhas da matriz
        // For interno para percorrer as colunas da matriz
        for (int j = 0; j < 3 ; j++){ // Loop para percorrer as colunas da matriz
            printf("Matriz[%d][%d] = %d\n", i,  j, matriz[i][j]); // Imprimindo os valores da matriz
        }
    }
    
    return 0;
}