# include <stdio.h>
/*
Operador decremento (--):
diminui o valor de uma variável em 1. Esse operador é
muito utilizado em loops e em outras situações em que é
necessário diminuir o valor de uma variável repetidamente.
O operador decremento pode ser utilizado de duas formas:
prefixada: --variavel (Pré-decremento)
posfixada: variavel-- (Pós-decremento)
*/
int main () {
    // Declaração e inicializaçao de variáveis
    int i =10;
    i--; // i terá o valor 9 
    // Decremento
    // num1 = num1 - 1;
    // num1 -= 1;

    printf("Valor inicial: %d\n", i); // Exibe 1
    // pré-decremento
    // Decrementa a variável antes de seu uso, como apresentado no código a seguir:
    int pre = 5;
    int b = --pre; // pre será 4, b será 4
    printf("Antes %d apos pre-decremento o vale: %d\n", pre, b); 

    // pós-decremento
    // Decrementa a variável após seu uso, conforme a seguir:
    int pos = 5;
    int p = pos--; // pos será 4, p será 5
    printf("Antes %d apos pos-decremento o vale: %d\n", pos, p); 
    
    return 0;
}