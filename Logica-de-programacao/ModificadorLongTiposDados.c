# include <stdio.h>
/*
Modificadores de tipos de dados:
São usados para alterar as propriedades dos tipos de dados primitivos,
permitindo uma manipulação mais precisa e eficiente das variáveis.
Os modificadores de tipos de dados permitem que você controle melhor como os
dados são armazenados e manipulados no programa. Em C, os modificadores mais
comuns são unsigned e long.

Modificador long:
É usado para aumentar a capacidade de armazenamento dos tipos de dados
primitivos. Ele pode ser aplicado a int e double, permitindo armazenar
valores maiores e com maior precisão.

Um int normal pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647.
Já um long int pode armazenar alores muito maiores,
de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807, proporcionando uma
faixa muito mais ampla para cálculos que exigem grandes números inteiros.

Um double pode armazenar valores com grande precisão, de ±1.7E-308 a ±1.7E+308. 
Um long double, por outro lado, oferece uma precisão ainda maior, permitindo
armazenar valores de ±3.4E-4932 a ±1.1E+4932.

Quando usar long? Se você precisa trabalhar com números que excedem a capacidade de um
int normal (por exemplo, em cálculos astronômicos ou para armazenar a população mundial),
long int ou long long int são necessários. Se a precisão de double não for suficiente para
seus cálculos  (em simulações físicas ou modelagem financeira, por exemplo), long double é
a escolha adequada.
*/
int main() {
    /*
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Numero regular (int): %d\n", regularNumber);
    printf("Numero grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Numero grande atualizado (long int): %ld\n", bigNumber);
    */
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Numero preciso (double): %.15f\n", preciseNumber);
    
    // imprimir no linux de forma diferente
    printf("Numero muito preciso (long double): %.21Lf\n", veryPreciseNumber);

    return 0;
}