#include <stdio.h>
/*
A estrutura switch em C é usada para simplificar o processo de 
seleção de uma entre várias opções possíveis. O switch é especialmente
útil quando você tem muitas condições para verificar e deseja evitar uma
longa sequência de instruções if-else-if.

O switch torna o código mais organizado e fácil de entender. Cada valor da
variável dia é tratado em um case separado, deixando claro o que acontece
para cada valor possível.

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

break é utilizado para sair do switch após a execução do código
do case correspondente. Sem o break, o programa continuaria executando
os casos seguintes.

Default embora seja opcional, é uma boa prática incluir o default.
Ele fornece um caminho alternativo caso nenhum dos valores especificados
nos cases corresponda ao valor da variável de controle. É como um else em
uma estrutura if-else, garantindo que sempre haja um bloco de código a ser
executado, mesmo que todas as condições falhem.

*/
int main() {
    // Declaração e inicialização de variáveis
    int opcao;
    float nota1, nota2, media;

    // Menu de opções
    printf("Menu de Gerenciamento de Estudante\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Estrutura condicional (Switch-case)
    // Avalia a variável 'opcao'
    switch (opcao) // É utilizada como controle para o switch.
    {
    case 1: // Caso 1: Calcular Média
        printf("Calcular Media\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if ((nota1 >= 0 && nota1 <= 10)&&(nota2 >= 0 && nota2 <= 10)) {
            media = (nota1 + nota2) / 2;
            printf("Media: %.2f\n", media);
        } else {
            printf("Notas invalidas. Digite valores entre 0 e 10.\n");
        }
        break; 
    case 2: // Caso 2: Determinar Status
        printf("Determinar Status\n");
        printf("Digite a media: ");
        scanf("%f", &media);
        if (media >= 7){
            printf("Status: Aprovado\n");
        } else if (media >= 5){
            printf("Status: Recuperacao\n");
        } else {
            printf("Status: Reprovado\n");
        }
        break;
    case 3: // Caso 3: Sair
        printf("Saindo do programa.\n");
        break;
    default: // Caso padrão: Opção inválida
        printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        break;
    }
    
    return 0;
}