# include <stdio.h>
/*
Nos loops for, continue e break são usados para controlar o fluxo de execução.

Continue: Faz com que o loop pule a iteração atual
e prossiga com a próxima iteração, verificando a
condição do loop novamente.

Break: Interrompe o loop imediatamente, saindo
dele antes que todas as iterações sejam concluídas.

Os comandos continue e break são úteis para evitar 
certas condições ou para terminar o loop com base
em critérios específicos.
*/
int main() {
    // Loop For com uso de continue e break
    // Imprime números de 0 a 9, mas pula o número 5 e para o loop ao chegar em 8
    // Inicializa i, testa a condição i < 10, incrementa i a cada iteração
    for (int i = 0; i < 10; i++) { // Inicializa i, testa a condição i < 10, incrementa i a cada iteração
        if (i == 5) // Quando i é 5
        continue; // Pula a iteração quando i é 5
        if (i == 8) // Quando i é 8
        break;    // Sai do loop quando i é 8
        printf("%d ", i); // Imprime o valor atual de i
    }
    return 0;
}