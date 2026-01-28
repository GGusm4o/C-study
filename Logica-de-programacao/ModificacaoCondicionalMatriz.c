#include <stdio.h>
/* 
Modificação condicional de uma matriz:
Modificar elementos de uma matriz com base em condições
específicas é útil transformar em negativos os elementos
maiores que 5.
*/
int main() {
    // Inicialização condicional da matriz
    // declara e inicializa uma matriz de inteiros com 3 linhas e 3 colunas.
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 

    // Modificação condicional dos elementos da matriz
    // Loop externo para as linhas da matriz
    for (int i = 0; i < 3; i++) { // itera sobre as linhas da matriz
        // Loop interno para as colunas da matriz
        for (int j = 0; j <  3; j++) { // itera sobre as colunas.
            // condicional verificar se o valor do elemento atual é maior que 5. 
            if (matriz[i][j] > 5) { 
                // Se a condição for verdadeira, transformamos o valor do elemento em seu valor negativo
                matriz[i][j] = -matriz[i][j]; // Se o elemento for maior que 5, torna-o negativo
            }
        }
    }

    // Impressão da matriz modificada
    // Loop para imprimir cada linha da matriz
    for (int i = 0; i < 3; i++) {
        // Loop para imprimir cada coluna da matriz
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}