#include <stdio.h>
/*
Arrays ou vestores são uma das estruturas de dados fundamentais
na programação. Eles permitem armazenar múltiplos valores do
mesmo tipo em uma única variável, facilitando a organização e
manipulação desses dados.  Cada elemento do array pode ser acessado
diretamente pelo seu índice, que começa em zero

Arrays podem ser usados para armazenar as notas de um grupo de alunos,
facilitando o cálculo de médias e a verificação de desempenho.

Arrays também podem ser usados para armazenar caracteres, como letras
ou palavras.

Arrays podem armazenar strings, permitindo a manipulação de conjuntos de
palavras ou frases.

Para declarar um array em C, você precisa especificar o tipo dos
elementos e o número de elementos que o array irá armazenar.
Esta é a sintaxe básica para declarar um array:
tipo nomeDoArray[tamanhoDoArray];
int numeros[5];  // Declaração de um array de inteiros com 5 elementos
*/
int main() {
    // Os arrays podem ser inicializados no momento da declaração.
    // A inicialização pode ser feita fornecendo uma lista de valores
    // entre chaves “{}” confira!
    int numeros[5] = {10, 20, 30,40, 50}; // Inicialização do array com valores

    // Cada elemento de um array pode ser acessado diretamente pelo seu índice.
    // Os índices dos arrays começam em 0.
    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento e %d\n", numeros[0]); // Acessa o primeiro elemento do array
    printf("O terceiro elemento e %d\n", numeros[2]); // Acessa o terceiro elemento do array
    printf("O quinto elemento e %d\n", numeros[4]); // Acessa o quinto elemento do array
    
    return 0;
}