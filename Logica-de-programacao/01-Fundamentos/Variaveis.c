# include <stdio.h>
/*
O que são variáveis?
Pense nas variáveis como caixas onde você pode armazenar informações.
Cada caixa tem um nome, e você pode usar esse nome para colocar algo
dentro dela ou pegar o que está lá. Em programação, essas caixas são
usadas para guardar valores que podem mudar enquanto o programa está
rodando.

Declaração de variáveis:
Declarar uma variável é como criar uma caixa e dar um nome a ela.
Em C, a declaração de variáveis segue um formato específico,
definindo primeiro o tipo de variável e depois o nome, isso
é o que chamamos de sintaxe da declaração de variáveis.

Tipo_variável nome_variável;

Atenção!
Para inicializar variáveis do tipo char você precisa
colocar o caractere entre aspas simples ‘ ‘.

Inicializar variáveis é importante porque, se você tentar usar uma variável
que não foi inicializada, ela pode conter lixo (valores aleatórios) que podem
causar erros no seu programa.
*/
int main() {
    // Declaração de variáveis em C
    int idade = 18;     // Declara uma variável inteira chamada "idade" e atribui o valor 25
    float altura;   // Declara uma variável de ponto flutuante chamada "altura" sem inicializar
    altura = 1.75;         // Atribui o valor 1.75 a "altura" posteriormente
    double salario = 3000.50; // Declara uma variável de ponto flutuante de dupla precisão
    // chamada "salario" atribui o valor 3000.50
    char opcao = 'S';    // Declara uma variável de caractere chamada "opcao" e atribui o caractere ‘S’

    return 0;
}