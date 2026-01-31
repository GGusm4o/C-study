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
*/
int main() {
    // Declaração e inicialização de variáveis
    int i = 1;

    // Estrutura de repetição while:
    // Imprime os números de 1 a 10
    while(i <= 10) { // Enquanto i for menor ou igual a 10
        printf("%d\n", i); // Imprime o valor de i
        i++; // Incrementa i em 1
    }

    return 0;
}