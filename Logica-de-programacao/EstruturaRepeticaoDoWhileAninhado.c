# include <stdio.h>
/*
A estrutura de repetição do-while é uma variante do loop while, com uma característica
distintiva: garante que o bloco de código dentro do loop seja executado pelo menos uma
vez, independentemente da condição. Essa diferença torna o do-while útil em situações
em que a ação deve ser executada antes de a condição ser testada.

A sintaxe básica do do-while é bastante simples. Consiste na palavra-chave do, seguida
por um bloco de código entre chaves e, em seguida, a palavra-chave while com a condição
entre parênteses. Isso é escrito da seguinte forma:

do {
    // bloco de código a ser executado
} while (condição);

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
    // Declaração e inicialização de variáveis
    int i = 1;

    // Estrutura de repetição do-while aninhada:
    // Imprime os números de 1 a 10 dez vezes

    // Loop externo
    do { // Loop externo: enquanto i for menor ou igual a 10
        printf("Rodada Externa %d: \n", i); // Indica a rodada externa atual

        int j = 1; // Inicializa j para o loop interno
        
        // Loop interno
        do { // Loop interno: enquanto j for menor ou igual a 10
            printf("%d \n", j); // Imprime o valor de j
            j++; // Incrementa j em 1
        } while (j <= 10); { // Fim do loop interno
            printf("\n"); // Linha em branco para separar as iterações de i
            i++; // Incrementa i em 1
        }
    } while (i <= 10); // Fim do loop externo
    
    return 0;
}