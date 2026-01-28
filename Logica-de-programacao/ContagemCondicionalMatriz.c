# include <stdio.h>
/*
Contagem condicional em uma matriz:
Contar elementos que atendem a determinadas condições dentro
de uma matriz é importante contamos quantos elementos são
pares e quantos são ímpares.
*/
int main() {
    // Inicialização condicional da matriz
    // declara e inicializa uma matriz de inteiros com 3 linhas e 3 colunas.
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // declara e inicializa dois contadores, um para os elementos pares e outro para os impares
    // ambos iniciados em 0.
    int evenCount = 0, oddCount = 0; // Variáveis para contar números pares e ímpares

    // Contagem de elementos pares e ímpares
    // Loop externo para as linhas
    for (int i = 0; i < 3; i++) { // itera sobre as linhas da matriz
        // Loop interno para as colunas
        for (int j = 0; j < 3; j++) { // itera sobre as colunas.
            // condiciona verificar se o elemento atual é par ou ímpar
            if (matriz[i][j] % 2 == 0) {
                // Se a condição for verdadeira, incrementamos o contador de elementos pares
                evenCount++; // Incrementa o contador de pares
            } else {
                // Caso contrário, incrementamos o contador de elementos ímpares
                oddCount++; // Incrementa o contador de ímpares
            }
        }
    }

    // Exibe os resultados
    // imprime o número total de elementos pares.
    printf("Quantidade de numeros pares: %d\n", evenCount);
    // imprime o número total de elementos ímpares.
    printf("Quantidade de numeros impares: %d\n", oddCount);

    return 0;
}