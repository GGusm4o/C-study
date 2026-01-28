# include <stdio.h>
/*
Os operadores aritméticos básicos para cálculos são + (adição), - (subtração), 
* (multiplicação), / (divisão) e % (módulo, para resto da divisão inteira).
*/

int main () {
    // Declaração e inicialização de variáveis
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao, modulo;

    //Entrada e leitura de dados
   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

    // Operações aritméticas
    // Operação Soma
    soma = num1 + num2;

    // Operação Subtração
    subtracao = num1 - num2;

    // Operação Multiplicação
    multiplicacao = num1 * num2;

    // Operação Divisão
    divisao = num1 / num2;
    
    modulo = num1 % num2;

    // Exibição dos resultados
    printf("Soma: %d + %d = %d\n", num1, num2, soma);
    printf("Subtracao: %d - %d = %d\n", num1, num2, subtracao);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("Divisao: %d / %d = %d\n", num1, num2, divisao);
    printf("Modulo: %d %% %d = %d\n", num1, num2, modulo);

    return 0;
}