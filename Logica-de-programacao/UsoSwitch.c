#include <stdio.h>
/*
A estrutura switch em C é usada para simplificar o processo de 
seleção de uma entre várias opções possíveis. O switch é especialmente
útil quando você tem muitas condições para verificar e deseja evitar uma
longa sequência de instruções if-else-if.
A sintaxe básica do switch é a seguinte:
switch (variavel) {
  case valor1:
    // Código a ser executado se variavel == valor1
    break;
  case valor2:
    // Código a ser executado se variavel == valor2
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    // Código a ser executado se nenhum dos casos acima for verdadeiro
}

O switch torna o código mais organizado e fácil de entender.
Cada valor da variável dia é tratado em um case separado,
deixando claro o que acontece para cada valor possível.
*/
int main() {
    // Declaração e inicialização de variáveis
    int dia;
    
    // Avalia a variável 'dia'
    printf("Dias da Semana\n");
    printf("1. Domingo\n");
    printf("2. Segunda-feira\n");
    printf("3. Terca-feira\n");
    printf("4. Quarta-feira\n");
    printf("5. Quinta-feira\n");
    printf("6. Sexta-feira\n");
    printf("7. Sabado\n");
    printf("\n");

    printf("Digite o valor do dia: ");
    scanf("%d", &dia);

    // Estrutura condicional (Switch-case):
    // Imprime o nome do dia da semana correspondente ao número

    switch (dia) {
    case 1:
        printf("Domingo\n");
            break;
    case 2:
        printf("Segunda-feira\n");
            break;
    case 3:
        printf("Terça-feira\n");
            break;
    case 4:
        printf("Quarta-feira\n");
            break;
    case 5:
        printf("Quinta-feira\n");
            break;
    case 6:
        printf("Sexta-feira\n");
            break;
    case 7:
        printf("Sábado\n");
            break;
    default:
        printf("Dia invalido\n");
}
    
    return 0;
}