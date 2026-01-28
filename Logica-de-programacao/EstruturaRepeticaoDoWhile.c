# include <stdio.h>
/*
A estrutura de repetição do-while é uma variante do loop while, com uma característica
distintiva: garante que o bloco de código dentro do loop seja executado pelo menos uma
vez, independentemente da condição. Essa diferença torna o do-while útil em situações
em que a ação deve ser executada antes de a condição ser testada.

A sintaxe básica do do-while é bastante simples. Consiste na palavra-chave do, seguida
por um bloco de código entre chaves e, em seguida, a palavra-chave while com a condição
entre parênteses. Isso é escrito da seguinte forma:

do {
    // bloco de código a ser executado
} while (condição);

*/
int main() {
    // Declaração e inicialização de variáveis
    int i = 1;

    // Estrutura de repetição do-while:
    // Imprime o número 1 pelo menos uma vez
    do {    // Executa o bloco de código
        printf("%d\n", i); // Imprime o valor de i
        i++; // Incrementa i em 1
    } while (i == 5); // Repete enquanto i for igual a 5

    // Menu Interativo com o do-while
    int option; // Variável para armazenar a opção do usuário
    do { // Executa o menu pelo menos uma vez
        printf("Menu:\n");
        printf("1. Opcao 1\n");
        printf("2. Opcao 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch(option) { // Verifica a opção escolhida
            case 1: // Se a opção for 1
                printf("Voce escolheu a Opcao 1\n");
                break;
            case 2: // Se a opção for 2
                printf("Voce escolheu a Opcao 2\n");
                break;
            case 3: // Se a opção for 3
                printf("Saindo do menu...\n");
                break;
            default: // Se a opção for inválida
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (option != 3); // Repete enquanto a opção for diferente de 3 (Sair)
    
    return 0;
}