# include <stdio.h>
/*
Os operadores lógicos possibilitam a criação de condições complexas e
permitem avaliar múltiplas condições de maneira eficiente. Eles são
amplamente utilizados em laços de repetição, estruturas condicionais e
na verificação de estados em programas de qualquer complexidade.

A partir disso, vamos conhecer os principais operadores lógicos em C.
operadores lógicos principais são usados para combinar ou negar condições, 
retornando 1 (verdadeiro) ou 0 (falso).

|| (OU ou OR lógico): o operador || retorna verdadeiro se pelo menos uma
das expressões que ele conecta for verdadeira. Se ambas as expressões
forem falsas, o resultado será falso.

Sintaxe: expressao1 || expressao2
 
*/
int main() {
    /*
    condição a > 0 || b > 0 é verdadeira porque a é maior que zero, mesmo que b não seja.
    Portanto, o programa irá imprimir "Pelo menos um dos números é positivo".
    */
   
    // Declaração e inicialização de variáveis
    int a = 5;
    int b = -10;

    if (a > 0 || b > 0) {
        printf("Pelo menos um dos números é positivo\n");
    }

    return 0;
}