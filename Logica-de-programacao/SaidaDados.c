#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis
    // Uso dos tipos de dados básicos: char, int, float
    // char sem []: Declara uma única variável capaz de armazenar apenas um caractere individual (um único byte)
    // char com []: Declara um array (vetor ou matriz) de caracteres,
    // que é a forma padrão de representar uma string (cadeia de caracteres)
    
    char nome[] = "Gui";
    char sobrenome[] = "Gusmao";
    int idade = 18;
    int maior = idade >= 18; // 1 se verdadeiro, 0 se falso
    int ano_nacimento = 2025 - idade;
    float altura_metros = 1.75;

    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);
    printf("Idade: %d\n", idade);
    printf("Ano de Nascimento: %d\n", ano_nacimento);
    printf("É maior de idade? %d\n", maior);
    printf("Altura em metros: %.2f\n", altura_metros);

    return 0;

}

/*
No C não é possivel usar caracteres especiais.

Formataçãoo de saída com printf:
printf("%formatol formato2 Sformato3", variavell, variavel2, variavel3)

%d: Imprime un número inteiro decimal.
%i: Equivalente a %d.
%f: Imprime un número de ponto flutuante no formato padrão.
%e: Imprime un número de ponto flutuante na notação cientifica.
%c: Imprima un único caractere
%s: Imprime uma cadeia (string) de caracteres.
*/
