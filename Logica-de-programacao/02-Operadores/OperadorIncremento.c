# include <stdio.h>
/*
Operadores de incremento:
São usados para aumentar o valor de uma variável em 1.
aumenta o valor de uma variável em 1. Esse operador é muito
utilizado em loops e outras situações em que é necessário
incrementar o valor de uma variável repetidamente.
O operador incremento pode ser utilizado de duas formas:
prefixada: ++variavel (Pré-incremento)
posfixada: variavel++ (Pós-incremento)
*/
int main () {
    // Declaração e inicializaçao de variáveis
    int i =1;
    i++; // i terá o valor 2
    printf("Valor inicial: %d\n", i); // Exibe 1

    // O operador incremento pode ser utilizado de duas formas:
    // pré-incremento
    int pre = 5;
    int b = ++pre; // pre será 6, b será 6
    /*
    Poderíamos escrever o código anterior do seguinte modo:
    int pre = 5;
    int b;
    pre++; // pre incrementa o valor e vale 6
    b = pre // b recebe o valor de pre e assume o valor 6
    */
    printf("Antes %d apos pre-incremento o vale: %d\n", pre, b); 

    // pós-incremento
    int pos = 5;
    int p = pos++; // pos será 6, p será 5
    /*
    Poderíamos escrever o código anterior da seguinte forma:
    int a = 5;
    int b;
    b = pos // b recebe o valor de pos e assume o valor 5
    pos++; // pos incrementa o valor e vale 6
    */
    printf("Antes %d e apos pos-incremento vale: %d\n", pos, p );

    return 0;
}