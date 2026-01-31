# include <stdio.h>
/*
É uma das mais utilizadas na programação devido à sua capacidade de simplificar a
execução de loops com um número específico de iterações. Diferentemente dos loops while
e do-while, que se baseiam exclusivamente em uma condição, o for é especialmente útil
quando se sabe de antemão quantas vezes o loop deve ser executado.

A sintaxe do for é compacta e eficiente, permitindo que todas as partes
essenciais de um loop (inicialização, condição e incremento) sejam 
definidas em uma única linha.

for (inicialização; condição; incremento) {
    // bloco de código a ser executado repetidamente
}
*/
int main() {
    // Declaração e inicialização de variaveis
    int i;

    // Estrutura de repetição for:
    // Imprime os números de 1 a 9
    for (int i = 1; i < 10; i++) { // Enquanto i for menor que 10, incrementa i em 1
        printf("%d\n", i); // Imprime o valor de i
    }

    return 0;
}