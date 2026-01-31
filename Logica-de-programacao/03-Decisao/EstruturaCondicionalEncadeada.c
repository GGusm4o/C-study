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
*/
int main() {
    // Declaração e inicialização de variáveis
    int idade;

    // Solicita ao usuário que insira sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Estrutura condicional encadeada (if-else)
    //Criança < 12
    //Adolescente >= 12 x < 18
    //Adulto <= 18 x < 60
    //Idoso > 60
    if (idade < 12) {
        //Bloco de código a ser executado se a condição for verdadeira
        printf("voce e um Criança\n");
    } else if (idade >= 12 && idade < 18) {
        //Bloco de código a ser executado se a condição for verdadeira
        printf("Voce e um Adolescente\n");
    } else if(idade >= 18 && idade < 65) {
        //Bloco de código a ser executado se a condição for verdadeira
        printf("Voce e um Adulto\n");
    } else {
        //Bloco de codigo a ser executado se a condição for falsa
        printf("Idoso\n");

    }
    
    return 0;
}