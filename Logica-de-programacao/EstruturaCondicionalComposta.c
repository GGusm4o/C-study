#include <stdio.h>
/*
Definição e aplicação do if-else:
Essa estrutura permite ao programa escolher entre dois blocos de código
diferentes, dependendo se a condição é verdadeira ou falsa. Pense nisso
como uma bifurcação em uma estrada: se a condição for verdadeira, o
programa segue por um caminho; se for falsa, ele segue por outro.
Principais pontos sobre if-else:
- A estrutura if avalia uma condição; se for verdadeira, executa o bloco de código associado.
- A estrutura else fornece um bloco de código alternativo que é executado se a condição do
if for falsa.
- Essas estruturas são fundamentais para implementar lógica condicional em programas.
*/
int main() {
    // Declaração e inicialização de variáveis
    int num_comparacao = 5, resultado;

    // Se o resto da divisão de num_comparacao por 2 for igual a 0
    // então o número é par, caso contrário, é ímpar
    resultado = num_comparacao % 2;
    // Se for 0, numero e par caso contrario e impar
    printf("A variavel resultado e: %d\n", resultado);

    // Estrutura condicional compostas (if-else)
    if (resultado == 0) {
        //Bloco de código a ser executado se a condição for verdadeira
        printf("O numero e par\n");
    } else {
        //Bloco de codigo a ser executado se a condição for falsa
        printf("O numero e impar\n");
    }

    return 0;
}