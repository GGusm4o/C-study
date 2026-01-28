# include <stdio.h>
/*
Os operadores lógicos possibilitam a criação de condições complexas e
permitem avaliar múltiplas condições de maneira eficiente. Eles são
amplamente utilizados em laços de repetição, estruturas condicionais e
na verificação de estados em programas de qualquer complexidade.

A partir disso, vamos conhecer os principais operadores lógicos em C.
operadores lógicos principais são usados para combinar ou negar condições, 
retornando 1 (verdadeiro) ou 0 (falso).

! (NÃO ou NOT lógico): o operador ! inverte o valor lógico de uma expressão.
Se a expressão for verdadeira, ele retorna falso, e se a expressão for falsa,
ele retorna verdadeiro.

Sintaxe: !expressao
*/
int main() {
    /*
    a condição ! (a > 0) é verdadeira porque a > 0 é falsa, e o operador !
    inverte isso para verdadeiro. O resultado do programa será a impressão
    de "a não é um número positivo".
    */
    // Declaração e inicialização de variáveis
    int a = -5;

    if (!(a > 0)) {
        printf("a não é um número positivo\n");
    }

    return 0;
}