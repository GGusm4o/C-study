#include <stdio.h>
#include <string.h>
/*
Entrada de dados com scanf:
Existem várias formas de obter entrada de dados em um programa, mas, aqui,
focaremos o uso da função scanf. Essa é uma das formas mais comuns e úteis
de ler dados do usuário em programas escritos em C.

A função scanf é usada para ler dados fornecidos pelo usuário e armazená-los
em variáveis. Pense em scanf como uma maneira de pegar informações do mundo
exterior e colocá-las dentro das "caixas" (variáveis) do seu programa.

A forma geral do comando scanf é a seguinte:
scanf("formato", &variavel);

Aqui, "formato" especifica o tipo de dado que você espera que o usuário insira,
e &variavel é o endereço da variável onde o dado será armazenado.

%d: Imprime un número inteiro decimal.
%i: Equivalente a %d.
%f: Imprime un número de ponto flutuante no formato padrão.
%e: Imprime un número de ponto flutuante na notação cientifica.
%c: Imprima un único caractere
%s: Imprime uma cadeia (string) de caracteres.

Operador de endereço & antes das variáveis para armazenar os valores.

Atenção!
Você precisa sempre colocar o caractere “&” antes
de cada variável que será lida.

A função scanf também pode ser usada para ler strings do usuário, mas com uma
importante ressalva: por padrão, ela lê apenas até o primeiro espaço em branco.
Isso significa que se o usuário digitar um nome completo (com espaços), apenas
a primeira parte do nome (até o primeiro espaço) será lida.

Se o usuário digitar "João da Silva", apenas "João" será armazenado em nome.
"da Silva" será deixado no buffer de entrada e poderá causar problemas em
leituras subsequentes.

Lendo Strings com Espaços: fgets
Para ler strings com espaços em branco, a função fgets é a melhor opção. Ela lê
uma linha inteira da entrada, incluindo espaços, até encontrar um caractere de
nova linha (\n) ou atingir o tamanho máximo especificado.
*/
int main() {

    // Declaração das variáveis para dia, mês e ano
    int dia;
    int mes;
    int ano;
    char nome[20];

    printf("Digite seu nome e sua data de nascimento abaixo:\n");

    // Entrada dos valores usando o scanf
    printf("Nome = ");
    scanf("%s", nome);

    printf("Dia = ");
    scanf("%d", &dia);

    printf("Mes = ");
    scanf("%d", &mes);

    printf("Ano = ");
    scanf("%d", &ano);

    // Saida formatada com o printf
    printf("Ola %s, Voce nasceu no dia %d de %02d de %d, Correto?", nome, dia, mes, ano);

    /*
    char nome[50];
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
    // fgets inclui o '\n' na string, então podemos removê-lo se necessário
    nome[strcspn(nome, "\n")] = 0;
    printf("Nome completo digitado: %s\n", nome);

    fgets recebe três argumentos:
    O array onde a string será armazenada.
    O tamanho máximo da string (incluindo o \n e o \0).
    O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
    A linha nome[strcspn(nome, "\n")] = 0; remove o caractere de nova linha (\n)
    que fgets pode incluir na string. strcspn retorna o índice da primeira ocorrência
    de \n na string nome.
    */
    return 0;
}