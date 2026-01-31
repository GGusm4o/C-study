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

Loops aninhados, ou nested loops em inglês, são uma construção fundamental em
programação que envolve a colocação de um loop dentro de outro. Eles são usados
em diversos contextos para percorrer múltiplas dimensões de dados ou realizar
operações repetitivas de forma eficiente.

O que são loops aninhados?
Em termos simples, um loop aninhado é um loop dentro de outro loop.

Para cada iteração do loop externo, o loop interno é executado completamente.

Os loops aninhados são frequentemente usados quando precisamos trabalhar com estruturas
de dados que possuem múltiplos níveis ou quando a operação que estamos realizando requer
múltiplas camadas de repetição.
*/
int main() {
    // Estrutura de repetição for aninhada:
    // Imprime os números de 1 a 9 dez vezes

    // Loop externo
    for (int i = 1; i < 10; i++) { // Enquanto i for menor que 10, incrementa i em 1
        // Loop interno
        for(int j = 1; j <= 10; j++) { // Enquanto j for menor ou igual a 10, incrementa j em 1
            printf("%d \n", j); // Imprime o valor de j
        }
        printf("\n"); // Linha em branco para separar as iterações de i
    }

    return 0;
}