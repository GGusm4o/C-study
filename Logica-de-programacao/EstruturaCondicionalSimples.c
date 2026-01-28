#include <stdio.h>
/*
Definição e aplicação do if:
Essa estrutura permite que um programa execute um bloco de código apenas
se uma condição específica for verdadeira.

Principais pontos sobre if
- A estrutura if avalia uma condição; se for verdadeira, executa o bloco de código associado.
- Essas estruturas são fundamentais para implementar lógica condicional em programas.
*/
int main() {
    // Declaração e inicialização de variáveis
    int num_comparacao = 10, resultado;

    // Se o resto da divisão de num_comparacao por 2 for igual a 0
    // então o número é par.
    resultado = num_comparacao % 2;
    // Se for 0, numero e par.
    printf("A variavel resultado e: %d\n", resultado);

    // Estrutura condicional simples (if)
    if (resultado == 0) {
        //Bloco de código a ser executado se a condição for verdadeira
        printf("O numero e par\n");
    } 
    return 0;
}