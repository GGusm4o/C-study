#include <stdio.h>
/*
Loops com múltiplas variáveis são uma técnica em que muitas variáveis são 
inicializadas, testadas e atualizadas simultaneamente dentro de um único loop.

O método de loops com múltiplas variáveis é útil quando precisamos controlar
ou monitorar mais de um valor ao mesmo tempo.

No contexto de um loop (For), podemos inicializar diversas variáveis,
definir condições de continuidade para todas elas e atualizá-las a
cada iteração do loop. Isso é particularmente útil para problemas
que envolvem iterações dependentes de múltiplas variáveis ou para
manipulações complexas de dados.
*/
int main() {
    // Loop For com múltiplas variáveis
    // Imprime valores de i e j enquanto i é menor que j
    // Inicializa i e j, testa a condição i < j, atualiza i e j
    for (int i = 0, j = 10; i < j; i++, j--) { // Inicializa i e j, testa a condição i menor que j, atualiza i e j
        printf("i = %d, j = %d\n", i, j); // Imprime os valores atuais de i e j
    }

    return 0;
}