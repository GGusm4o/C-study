# include <stdio.h>
/*
Busca condicional em uma matriz:
A busca condicional é essencial para localizar elementos
específicos em uma matriz procuramos um valor específico e
imprimimos sua posição, se encontrado.
*/
int main() {
    // A matriz matriz é declarada e inicializada com valores predefinidos:
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Declaramos um valor alvo (target) para procurar na matriz:
    int target = 5;
    // Declaramos uma variável de controle (found) para indicar se o valor foi encontrado:
    int found = 0;

    // Busca condicional do elemento alvo
    // Loop externo para as linhas
    for (int i = 0; i < 3; i++) { // itera sobre as linhas da matriz
        // Loop interno para as colunas
        for (int j = 0; j < 3; j++) { // itera sobre as colunas.
            // Condicional para verificar se o valor do elemento atual é igual ao valor alvo.
            if (matriz[i][j] == target) {
                // Se a condição for verdadeira, imprimimos a posição do elemento na matriz
                printf("Elemento %d encontrado na posicao (%d, %d)\n", target, i, j);
                // definimos a variável found como 1 para indicar
                // que o valor foi encontrado e utilizamos break para sair do loop interno.
                found = 1;
                break;
            }
        }
        // utilizamos outro if (found) para sair do loop externo, interrompendo a busca assim que o valor é encontrado.
        if(found) 
        break;
    }
    // Se found ainda for 0 , significa que o valor não foi encontrado na matriz.
    if (!found) {
        // imprime uma mensagem indicando que o valor alvo não foi encontrado.
        printf("Elemento %d nao encontrado na matriz.\n", target);
    }


    return 0;
}