# include <stdio.h>
/*
Os operadores lógicos possibilitam a criação de condições complexas e
permitem avaliar múltiplas condições de maneira eficiente. Eles são
amplamente utilizados em laços de repetição, estruturas condicionais e
na verificação de estados em programas de qualquer complexidade.

A partir disso, vamos conhecer os principais operadores lógicos em C.
operadores lógicos principais são usados para combinar ou negar condições, 
retornando 1 (verdadeiro) ou 0 (falso).

&& (E ou AND lógico): o operador && retorna verdadeiro se e somente se ambas as
expressões que ele conecta forem verdadeiras. Se qualquer uma das expressões for
falsa, o resultado será falso.

Sintaxe: expressao1 && expressao2
*/
int main() {
    /*
    a condição a > 0 && b > 0 é verdadeira porque tanto a quanto b são maiores que 
    ero, ou seja, a > 0 é verdadeiro e b > 0, também é verdadeiro. Se as duas são
    verdadeiras, o resultado é verdadeiro.
    */
   
    // Declaração e inicialização de variáveis
    int a = 5;
    int b = 10;

    if (a > 0 && b > 0) {
        printf("Ambos os números são positivos\n");
    }
    /*
    // Avaliação de curto circuito
    // Se o primeiro valor for falso, o C já sabe que toda a expressão será falsa
    // False = 0 e True = 1
    // 1. True and False and True
    printf("%d\n", 1 && 0 && 1); // False = 0
    // 2. True and 0 and True
    printf("%d\n", 1 && 0 && 1); // True = 1
    */
    return 0;
}