# include <stdio.h>
/*
A estrutura de repetição while é uma estrutura fundamental
para criação de loops na programação. Em sua essência, o while
executa repetidamente um bloco de código enquanto uma condição
especificada é verdadeira. Assim que a condição se torna falsa,
o loop termina e o controle do programa passa para a linha de código
imediatamente após o loop.

A sintaxe básica do while é bastante simples: consiste na
palavra-chave while, seguida por uma condição entre parênteses,
e um bloco de código entre chaves que será executado repetidamente
enquanto a condição for verdadeira. Isso é escrito da seguinte forma:

while (condição) {
    // bloco de código a ser executado repetidamente
}

A chave para entender e utilizar eficientemente o while é a condição que ele verifica. Essa
condição é uma expressão booleana, ou seja, uma expressão que avalia para verdadeiro
ou falso. O loop while continuará executando o bloco de código enquanto essa condição
for verdadeira.

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
*/
int main() {
    // Declaração e inicialização de variáveis
    int i = 1;

    // Estrutura de repetição while aninhada:
    // Imprime os números de 1 a 10 dez vezes
    // Loop externo
    while (i <= 10){ // Loop externo: enquanto i for menor ou igual a 10
        printf("Rodada Externa %d: \n", i); // Indica a rodada externa atual
        int j = 1; // Inicializa j para o loop interno
        // Loop interno
        while (j <= 10) { // Loop interno: enquanto j for menor ou igual a 10
           printf("%d \n", j); // Imprime o valor de j
            j++; // Incrementa j em 1
        }
        printf("\n"); // Linha em branco para separar as iterações de i
        i++; // Incrementa i em 1
    }
    

    return 0;
}