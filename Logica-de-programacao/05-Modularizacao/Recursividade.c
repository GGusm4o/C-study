#include <stdio.h>
/*
É um conceito importante em programação, em que uma função chama a si
mesma para resolver problemas de forma mais simples e eficiente.

Recursividade é uma técnica que pode ser usada para substituir loops, dividir
problemas complexos em partes menores e simplificar a lógica de muitos algoritmos.
*/
void recursiveLoop(int n) { // Função recursiva para contagem regressiva
    if (n > 0) { // Condição de parada da recursão
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
int main() {
    // Declaração e inicializaçao de variáveis
    int numero = 5;

    // Chamada da função recursiva
    // Inicia a contagem regressiva a partir do número definido
    printf("Contagem regressiva:\n");
    recursiveLoop(numero);  // Exemplo de chamada da função recursiva
    return 0;
}