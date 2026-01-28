# include <stdio.h>
/*
São como etiquetas que você coloca nas suas caixas (variáveis) para
indicar que tipo de valor elas podem armazenar. Diferentes tipos de
dados são usados para diferentes propósitos. A Linguagem C tem
5 diferentes tipos básicos: char, int, float, void, double.
Tipos de dados primitivos em C:

int -> Números inteiros
Os inteiros são números sem casas decimais. 
Eles são usados quando você precisa contar 
ou trabalhar com números inteiros tanto positivos 
quanto negativos.

float/double -> Número com ponto flutuante
Os números de ponto flutuante são usados para representar números
com casas decimais. Existem dois tipos principais: float e double. 
A diferença entre eles é a precisão. float ocupa menos espaço na
memória, mas tem menos precisão do que double.

void -> Tipo vazio
Void é um tipo de dado especial que representa a ausência de um tipo.
Ele é usado em situações onde uma função não retorna nenhum valor ou
quando um ponteiro não tem um tipo específico.

char -> Caractere
O tipo char armazena caracteres como números inteiros que representam
sua posição na tabela ASCII (American Standard Code for Information Interchange).
A tabela ASCII mapeia caracteres (letras, números, símbolos) para números de 0 a 127.

Uso de strings:
Além de armazenar caracteres individuais, podemos também trabalhar com
sequências de caracteres, conhecidas como strings que são sequências
de caracteres armazenadas como arrays (conjuntos) de char, terminadas
por um caractere especial chamado caractere nulo (\0). Esse caractere
indica o fim da string.

*/
int main() {
    // Declaração de variáveis dos tipos primitivos
    int idade = 25; // Números inteiros (sem vírgula). O tamanho (16 ou 32 bits) varia, sendo o tipo padrão para inteiros.
    float altura = 1.75; // Números reais (com vírgula) de precisão simples (menor que double).
    double salario = 3000.50; // Números reais de precisão dupla (maior precisão que float)
    char letra = 'A'; // um único caractere e armazenado em 1 byte
    char nome[20] = "Guilherme";  // Declara um array de 20 caracteres e inicializa com "Guilherme"
    // O nome acima pode armazenar até 19 caracteres mais o caractere nulo.
    // A manipulação de strings requer cuidado para evitar
    // buffer overflows (escrever além dos limites do array).
   
 
    
    return 0;
}