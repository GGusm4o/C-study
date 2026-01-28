# include <stdio.h>
/*
Modificadores de tipos de dados:
São usados para alterar as propriedades dos tipos de dados primitivos,
permitindo uma manipulação mais precisa e eficiente das variáveis.
Os modificadores de tipos de dados permitem que você controle melhor como os
dados são armazenados e manipulados no programa. Em C, os modificadores mais
comuns são unsigned e long.

Modificador unsigned:
É usado para declarar variáveis que podem armazenar apenas valores positivos
(incluindo zero). Ele pode ser aplicado aos tipos de dados int e char,
dobrando a faixa positiva de valores que podem ser armazenados.

int pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647 
permitindo tanto números positivos quanto negativos unsigned int pode
armazenar apenas valores positivos, dobrando a faixa positiva
para 0 a 4,294,967,295.

char pode armazenar valores que vão de -128 a 127.  um unsigned char
pode armazenar apenas valores positivos, permitindo um intervalo de 0
a 255. Isso é útil para armazenar caracteres de conjuntos de caracteres
estendidos ou para representar dados binários.

Quando usar unsigned? Imagine que você está desenvolvendo um jogo e
precisa armazenar a pontuação do jogador. A pontuação nunca será
negativa, então usar unsigned int permite armazenar pontuações maiores
do que seria possível com um int comum.  A pontuação nunca será negativa,
então usar unsigned int permite armazenar pontuações maiores do que seria
possível com um int comum. 
*/
int main() {
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
    
    // O especificador de formato %d é usado no printf para exibir valores int,
    // enquanto %u é usado para exibir valores unsigned int.
    printf("Numero com sinal: %d\n", signedNumber);
    printf("Numero sem sinal: %u\n", unsignedNumber);

    return 0;
}