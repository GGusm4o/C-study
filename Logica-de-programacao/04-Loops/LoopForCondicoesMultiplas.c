#include <stdio.h>
/*
Loops com condições múltiplas Utilizam mais de uma condição para determinar
quando devem continuar ou parar. Isso é frequentemente realizado com o loop for,
m que a expressão de condição pode incluir múltiplas condições combinadas usando
operadores lógicos (“&&” para E lógico e “||” para OU lógico).

Loops com condições múltiplas são úteis para situações em que o controle
do loop depende de várias variáveis ou condições que precisam ser verificadas
simultaneamente.
*/
int main() {
    // Loop For com múltiplas variáveis e condições múltiplas
    // Imprime valores de i e j enquanto i é menor que 5 e j é maior que 5
    // Inicializa i e j, testa as condições i < 5 e j > 5, atualiza i e j
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) { // Inicializa i e j, testa as condições i < 5 e j > 5, atualiza i e j
        printf("i = %d, j = %d\n", i, j); // Imprime os valores atuais de i e j
    }

    return 0;
}