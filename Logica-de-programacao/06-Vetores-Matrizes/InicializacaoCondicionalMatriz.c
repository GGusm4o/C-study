#include <stdio.h>
/*
Inicialização condicional de uma matriz:
Inicializar uma matriz com valores baseados em condições específicas é uma tarefa comum.
Criamos uma matriz 3x3 em que os elementos são definidos como 1 ou 0, dependendo se o
índice da coluna é par ou ímpar.
*/
int main() {
    // Inicialização condicional da matriz
    // int matriz[3][3]; declara uma matriz de inteiros com 3 linhas e 3 colunas.
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros

    // Utilizamos dois loops for aninhados para percorrer todas as posiçōes da matriz.
    // Inicialização da matriz com base em condições simples
    // Loop externo para as itera sobre as linhas da matriz
    for (int i = 0; i < 3; i++){
        // Loop interno para as itera sobre as colunas.
        for (int j = 0; j < 3; j++){
            //Se a condição for verdadeira, atribuímos o valor 1 ao elemento atual
            //da matriz (matriz[ [1[j]=1;). Caso contrário, atribuímos o valor 0 (matriz[ [i[j]=0;).
            if (j % 2 == 0){ // Condicional para verificar se o índice da coluna é par.
                matriz[i][j] = 1; // Se a coluna for par, atribui 1
            } else {
                matriz[i][j] = 0; // Se a coluna for ímpar, atribui 0
            }
        }
    }

    // Impressão da matriz
    // Loops for aninhados para percorrer a matriz novamente e imprimir seus valores.
    // No loop For externo impressäo, para cada linha, iteramos sobre suas colunas
    for (int i = 0; i < 3; i++){ // Loop para imprimir cada linha
        // For interno exibir o valor do elemento atual, seguido de um espaço.
        for (int j = 0; j < 3; j++){ // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        // Aqui pular para a próxima linha, garantindo que a matriz seja exibida de forma organizada.
        printf("\n");
    }

    return 0;
}