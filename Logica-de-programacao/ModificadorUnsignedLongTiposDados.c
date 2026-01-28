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
    A variável largePositiveNumber é declarada como unsigned long int, permitindo armazenar
    um número positivo extremamente grande. O especificador de formato %lu é usado no printf
    para exibir valores unsigned long int.

    A saída mostra que a variável largePositiveNumber, declarada como unsigned long int, armazena
    corretamente um valor extremamente grande (4000000000). Utilizando o modificador unsigned long,
    a faixa de valores possíveis para armazenamento é ampliada, evitando problemas de overflow e
    garantindo que valores positivos muito grandes sejam armazenados e manipulados corretamente.
    */
    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu\n", largePositiveNumber);

    return 0;
}