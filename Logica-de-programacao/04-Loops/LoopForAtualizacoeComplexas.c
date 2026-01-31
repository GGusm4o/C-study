#include <stdio.h>
/*
São loops em que a variável de controle é modificada de maneiras mais sofisticadas
que simples incrementos ou decrementos. Esses loops frequentemente utilizam expressões
condicionais, cálculos matemáticos ou funções para alterar a variável de controle a
cada iteração. Isso permite uma maior flexibilidade e controle sobre o fluxo do loop,
adaptando-se a requisitos específicos ou padrões de iteração não lineares.
*/
int main() {
    // Loop For com atualizações complexas
    // Imprime números de 0 a 99, incrementando de 1 se o número for par e de 2 se for ímpar
    // Inicializa i, testa a condição i < 100, atualiza i com uma expressão condicional
    // A expressão condicional (i % 2 == 0) ? 1 : 2 verifica se i é par ou ímpar e incrementa i de acordo
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) { // Inicializa i, testa a condição i < 100, atualiza i com uma expressão condicional
            printf("%d ", i); // Imprime o valor atual de i
        }

    return 0;
}