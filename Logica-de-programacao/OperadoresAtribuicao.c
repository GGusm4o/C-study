# include <stdio.h>
/*
Operadores de atribuição:
São usados para atribuir valores a variáveis.Eles podem ser combinados com
operadores aritméticos para realizar uma operação e, em seguida, atribuir o
resultado à variável.

Atribuição simples (=): é o operador de atribuição mais básico, usado para
inicializar ou atualizar o valor de uma variável.

Atribuição com soma (+=): adiciona um valor à variável e atribui o resultado à
própria variável. Esse operador é usado para aumentar o valor de uma variável de
forma eficiente.

Atribuição com subtração (-=): subtrai um valor da variável e atribui o resultado à
própria variável. Esse operador é usado para diminuir o valor de uma variável de
forma eficiente.

Atribuição com multiplicação (*=): permite multiplicar uma variável por um valor
e atribui o resultado à própria variável. Esse operador é usado para multiplicar
o valor de uma variável de forma eficiente.

Atribuição com divisão (/=): realiza a divisão da variável por um valor especificado
e atribui o resultado à própria variável, de forma eficiente.

Que combinam uma operação aritmética com a atribuição.
*/
int main () {
    //Atribuição simples
    int s = 5; // a agora vale 5
    printf("Atribuicao simples: %d\n", s);

    //Atribuição com adição
    int a = 5;
    a += 3; // a será 8 (equivalente a a = a + 3)
    printf("Atribuicao com adicao: %d\n", a);

    //Atribuição com subtração
    int sb = 5;
    sb -= 3; // sb será 2 (equivalente a sb = sb - 3)
    printf("Atribuicao com subtracao: %d\n", sb);

    //Atribuição com multiplicação
    int m = 5;
    m *= 3; // m será 15 (equivalente a m = m * 3)
    printf("Atribuicao com multiplicacao: %d\n", m);

    //Atribuição com divisão
    int d = 10;
    d /= 2; // d será 5 (equivalente a d = d / 2)
    printf("Atribuicao com divisao: %d\n", d );

    
return 0;
}