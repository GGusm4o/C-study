# include <stdio.h>
/*
Eles são fundamentais na programação, pois permitem a comparação entre variáveis. 
Usados para estabelecer relações entre valores, os operadores relacionais retornam
valores booleanos (1 para verdadeiro e 0 para falso). Eles são essenciais para a
tomada de decisões em programas, mas, aqui, vamos focar o uso dos operadores
relacionais sem o emprego de estruturas de controle como if ou while.

Principais operadores relacionais:
Operadores de comparação (relacionais)
OP      Significado         Exemplo (True)
>       maior               2 > 1
>=      maior ou igual      2 >= 2
<       menor               1 < 2
<=      menor ou igual      2 <= 2
==      igual               'a' == 'a'
!=      diferente           'a' != 'b'
*/
int main() {
    // Declaração e inicialização de variáveis
    int a = 10;
    int b = 20;
    
    printf("a > b: %d\n", a > b); // > (maior que)
    printf("a < b: %d\n", a < b); // < (menor que)
    printf("a == b: %d\n", a == b); // == (igual a)
    printf("a >= b: %d\n", a >= b); // >= (maior ou igual a)
    printf("a <= b: %d\n", a <= b); // <= (menor ou igual a)
    printf("a != b: %d\n", a != b); // != (diferente)

    return 0;
}