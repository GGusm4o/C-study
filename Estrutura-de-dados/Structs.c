#include <stdio.h>
/*
Na programação, lidar com muitos dados separados pode se tornar confuso e propenso a erros.
Para resolver esse problema, usamos uma estrutura chamada struct em C. 

Uma struct permite agrupar diferentes informações (de tipos variados) sobre um mesmo objeto.
Também chamada de estrutura, é um tipo de dado composto que permite agrupar diferentes
variáveis sob um mesmo nome, facilitando a organização de informações relacionadas.
Cada variável em uma struct é chamada de membro ou campo, e pode ter um tipo diferente.

Usamos typedef na criação de uma struct em C para simplificar a sua utilização, tornando o código
mais limpo e legível. Sem typedef, toda vez que quisermos declarar uma variável do tipo struct,
precisaremos epetir a palavra-chave struct antes do nome da estrutura. Contudo, com typedef,
podemos criar um apelido (alias) para o tipo, eliminando essa necessidade.
*/

// Definindo  a estrutura para um Aluno
// Usnado typedef para criar o tipo Aluno
typedef struct Aluno {
    char nome[50];
    int idade;
    float madia;
} Aluno;

int main() {
    // Criando a inicializando uma variável do tipo Aluno
    Aluno aluno1 = {"Joao", 20, 8.5};   

    // Exibindo os dados do aluno
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Media: %.2f\n", aluno1.madia);

    return 0;
}