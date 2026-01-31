#include <stdio.h>
/*
Saída de dados com printf:
A função printf é usada para exibir informações na tela. Pense em printf como
uma maneira de pegar informações das suas "caixas" (variáveis) e mostrá-las ao
mundo exterior.

Sintaxe básica de printf:
printf("texto com formatação", variavel1, variavel2, ...);

Aqui, "texto com formatação" é uma string que pode conter texto e
especificadores de formato para as variáveis que você deseja exibir.

Ao utilizar o printf para imprimir variáveis, é necessário colocar o
nome da variável e o especificador de formato.

A sintaxe básica de printf é: 
printf(“%formato1 %formato2”, variável1, variável2);

Aqui, "%formato1 %formato2" são os especificadores de formato correspondentes
aos tipos das variáveis que você deseja exibir.  Esses especificadores são
elementos essenciais para controlar a formatação dos dados nas funções de
entrada e saída da linguagem C, como printf e scanf. Cada especificador de 
formato é precedido por um caractere % e indica o tipo de dado da variável que
será exibida. Para cada variável que você deseja imprimir, é necessário acrescentar
um especificador de formato correspondente.

A seguir, você tem uma lista dos principais especificadores utilizados:
%d: Imprime un número inteiro decimal.
%i: Equivalente a %d.
%f: Imprime un número de ponto flutuante no formato padrão.
%e: Imprime un número de ponto flutuante na notação cientifica.
%c: Imprima un único caractere
%s: Imprime uma cadeia (string) de caracteres.
*/


int main() {
    /*
    Uso dos tipos de dados básicos: char, int, float
    char sem []: Declara uma única variável capaz de armazenar apenas um caractere individual (um único byte)
    char com []: Declara um array (vetor ou matriz) de caracteres,
    que é a forma padrão de representar uma string (cadeia de caracteres)
    */

    // Declaração e inicialização das variáveis
    char nome[] = "Gui";
    char sobrenome[] = "Gusmao";
    int idade = 18;
    int maior = idade >= 18; // 1 se verdadeiro, 0 se falso
    int ano_nacimento = 2025 - idade;
    float altura_metros = 1.75;

    // Saída formatada usando printf
    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);
    printf("Idade: %d\n", idade);
    printf("Ano de Nascimento: %d\n", ano_nacimento);
    printf("É maior de idade? %d\n", maior);
    printf("Altura em metros: %.2f\n", altura_metros);


    return 0;

}