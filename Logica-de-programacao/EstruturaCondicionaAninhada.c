#include <stdio.h>
/*
as estruturas de decisão condicionais permitem que o programa 
execute blocos de código diferentes com base no resultado de uma 
condição (verdadeiro/falso), controlando o fluxo do programa.
- A estrutura (if) avalia uma condição; se for verdadeira, executa o bloco de código associado.
- A estrutura (else) fornece um bloco de código alternativo que é executado se a condição do if for falsa.
- A estrutura (else if) permite verificar múltiplas condições sequencialmente, 
executando o bloco de código do primeiro if ou else if cuja condição seja verdadeira.
- Essas estruturas são fundamentais para implementar lógica condicional em programas.

Aninhada: Uma instrução if ou if-else é colocada
dentro do bloco if ou else de outra instrução.
*/
int main() {
    // Declaração e inicialização de variáveis
    int idade;
    float renda;

    // Solicita ao usuário que insira sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    // Estrutura condicional aninhada (if-else)
    if(idade >= 18 && idade < 65) {
        //Bloco de código a ser executado se a condição for verdadeira
        printf("Voce e um Adulto\n");
        if(idade <= 18 || idade >= 65){ //Verifica se a idade está entre 60 e 80 anos
            //Bloco de código a ser executado se a condição for verdadeira
            if( renda < 2000){
                //Bloco de código a ser executado se a condição for verdadeira
                printf("Voce esta qualificado para o desconto!");
            } else {
                //Bloco de codigo a ser executado se a condição for falsa
                printf("Voce nao esta qualificado para o desconto.");
            }
        } else {
            //Bloco de codigo a ser executado se a condição for falsa
            printf("Voce nao esta qualificado para o desconto devido a idade.");
        }
    } else {
        //Bloco de codigo a ser executado se a condição for falsa
        printf("Voce e um Idoso\n");

    }
    
    return 0;
}