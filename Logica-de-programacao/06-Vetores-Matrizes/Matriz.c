#include <stdio.h>
/*
As Matrizes são uma generalização dos arrays. Enquanto um array é
unidimensional, uma matriz pode ter duas ou mais dimensões. A matriz
bidimensional, a mais comum, é essencialmente uma tabela ou grade de
valores em que cada elemento é acessado por dois índices: um para a
linha e outro para a coluna.
Ao trabalhar com matrizes em C, existem alguns pontos importantes
que estão descritos a seguir.
- Tamanho fixo:
Em C, matrizes têm tamanho fixo determinado no momento da
sua declaração. O tamanho não pode ser alterado em tempo de execução.

-Acesso por índic:
O acesso aos elementos é feito por índices, que começam em zero.
É importante garantir que os índices utilizados estejam dentro dos
limites do vetor ou matriz para evitar comportamento indefinido.

Tipagem:
Todos os elementos de um vetor ou matriz são do mesmo
tipo, seja int, float, char etc.

Matrizes são fundamentais para a organização e manipulação
de dados na programação. Elas permitem o armazenamento de
múltiplos valores em uma estrutura que facilita o acesso 
eficiente aos dados através de índices.
*/
int main() {
    // Declaração de uma matriz 3x3
    // Inicialização simplificada
    // Semelhante aos vetores, você pode inicializar
    // uma matriz ao mesmo tempo em que a declara:
    int matriz[3][3] = { // Declaração de uma matriz 3x3 de inteiros
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };
    
    // Inicializando os elementos da matriz
    /*
    // Uma matriz bidimensional de inteiros pode ser definida da seguinte forma.
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Acessando elementos da matriz
    printf("O elemento na posicao [0][0] e %d\n", matriz[0][0]);
    printf("O elemento na posicao [1][1] e %d\n", matriz[1][1]);
    */
    
    // Acessando e imprimindo elementos específicos da matriz
    printf("O elemento na posicao [0][0] e %d\n", matriz[0][0]);
    printf("O elemento na posicao [1][1] e %d\n", matriz[1][1]);
    printf("O elemento na posicao [2][2] e %d\n", matriz[2][2]);
 
    
    return 0;
}