# include <stdio.h>
/*
Substituição condicional de elementos:
Substituir elementos de uma matriz com base em condições
específicas é útil os elementos múltiplos de 3 são
substituídos por -1.
*/
int main() {
    // A matriz matriz é declarada e inicializada com valores predefinidos:
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Substituição condicional de elementos
    // Loop externo para as linhas
    for (int i = 0; i < 3; i++) { // itera sobre as linhas da matriz
        // Loop interno para as colunas
        for (int j = 0; j < 3; j++) { // itera sobre as colunas
            // // condicional para verificar se o valor do elemento atual é múltiplo de 3
            if (matriz[i][j] % 3 == 0) {
                // Se a condição for verdadeira, substituímos o valor do elemento por -1
                matriz[i][j] = -1;

            }
        }
    }

    // Impressão da matriz modificada
    // Loop externo para imprimir cada linha
    for (int i = 0; i < 3; i++) {
        // Loop interno para imprimir cada elemento da linha
        for (int j = 0; j < 3; j++) {
            // exibir o valor do elemento atual, seguido de um espaço.
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // ular para a próxima linha, garantindo que a matriz seja exibida de forma organizada.
    }
    return 0;
}