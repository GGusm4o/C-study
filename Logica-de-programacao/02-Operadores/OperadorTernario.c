#include <stdio.h>
/*
O operador ternário é uma forma compacta de escrever uma instrução if-else.
Ele é chamado de ternário porque envolve três partes. 
- Uma condição
- Um valor se a condição for verdadeira
- Um valor se a condição for falsa

sintaxe do operador ternário:
condicao ? valor_se_verdadeiro : valor_se_falso;

O operador ternário é utilizado quando queremos tomar uma decisão rápida baseada em
uma única condição. É uma maneira elegante de simplificar o código, especialmente
quando a lógica é simples.
*/
int main() {
    // Declaração e inicialização de variáveis
    int idade = 18;
    int resultado;

    resultado = idade >= 18 ? 1 : 0 ;

    if(resultado == 1) {
    printf("Voce e maior de idade!\n");
    } else {
    printf("Voce e menor de idade!\n");
    }
    
    return 0;
}