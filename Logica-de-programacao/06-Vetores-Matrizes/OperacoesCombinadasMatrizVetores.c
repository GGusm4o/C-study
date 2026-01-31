#include <stdio.h>
/*
Operações combinadas:
Podemos realizar operações mais complexas com
vetores e matrizes usando estruturas de repetição.

Soma de matrizes:
É uma operação fundamental em programação, especialmente em álgebra linear
e computação científica. Consiste em somar os elementos correspondentes de
duas matrizes para formar uma nova matriz.
*/
int main() {
    // Declaração e inicialização de duas matrizes 2x2
    int Matriz1[2][2] = {{1, 2}, {3, 4}};
    int Matriz2[2][2] = {{5, 6}, {7, 8}};
    int SomaMatriz[2][2]; // Matriz para armazenar o resultado da soma

    // Somando as duas matrizes
    // For externo para percorrer as linhas
    for (int i = 0; i < 2; i++){ // Loop para percorrer as linhas
        // For interno para percorrer as colunas
        for (int j = 0; j < 2; j++){ // Loop para percorrer as colunas
            SomaMatriz[i][j] =
            Matriz1[i][j] +
            Matriz2[i][j]; // Somando os elementos correspondentes
        }   
    }

    // Exibindo a matriz resultante
    for (int i = 0; i < 2; i++){ // Loop para percorrer as linhas
        // For interno para percorrer as colunas
        for (int j = 0; j < 2; j++) { // Loop para percorrer as colunas
            printf("matrizSoma[%d][%d] = %d\n", i, j, SomaMatriz[i][j]); // Imprimindo os valores da matriz soma
        }
    }

    return 0;
}