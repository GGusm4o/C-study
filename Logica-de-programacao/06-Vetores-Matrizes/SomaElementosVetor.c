#include <stdio.h>
/*
Soma dos elementos de um vetor:
É uma operação simples e comum, utilizada para calcular a
soma total de todos os elementos presentes em um vetor.

Primeiramente, declaramos e inicializamos um vetor
chamado vetor com cinco elementos. Criamos uma variável
soma para armazenar o total.
*/
int main() {
    // O vetor chamado vetor é declarado e inicializado com cinco valores.
    // A variável soma é inicializada com zero.
    int vetor[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    // Calculando a soma dos elementos do vetor
    // Usamos um loop for para percorrer cada elemento do vetor.
    // Em cada iteração, o valor do elemento atual é adicionado à variável soma.
    for (int i = 0; i < 5; i++){
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor e: %d\n", soma); // Exibindo o resultado da soma

    return 0;
}