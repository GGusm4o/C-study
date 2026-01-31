#include <stdio.h>
/*
Na linguagem C, um ponteiro é uma variável especial que armazena o endereço de memória de outra variável.
No entanto, em vez de guardar um valor, como o número 10 ou a letra A, o ponteiro guarda onde esse valor
está localizado na memória do computador. Com isso, ele permite que você acesse, modifique e gerencie
dados de maneira muito mais flexível e poderosa. 

Em C, usamos o símbolo ∗ para declarar um ponteiro, e o símbolo & para obter o endereço de uma variável.
*/
int main() {
    int x = 10;
    int* p = &x; // O ponteiro 'p' recebe o endereço de 'x'

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor de p (o endereco): %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    *p = 20; // Modificando o valor através do ponteiro
    printf("Novo valor de x: %d\n", x); // Vai imprimir 20!

    return 0;
}