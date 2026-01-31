# include <stdio.h>
/*
Ordem de precedência dos operadores:
1°. (n + n) são executados de dentro para fora
2°. **
3°. * / // %
4°. + -

Em C (e outras linguagens), define a prioridade dos operadores,
com parênteses tendo prioridade máxima.
*/
int main() {
    // Declaração e inicialização de variáveis
    int conta_1 = (1 + (int)(0.5 + 0.5)) * (5 + 5)/2 - 3;

    printf("%d\n", conta_1);  // Resultado: 7

    // Exempos
    int expressao_1 = 2 * 6 / 3;
    printf("%d\n", expressao_1);  // Resultado: 4

    int expressao_2 = 3 + 2 * 4;
    printf("%d\n", expressao_2);  // Resultado: 11

    int expressao_3 = (3 + 2) * 4;
    printf("%d\n", expressao_3);  // Resultado: 20

    int expressao_4 = 60 / (3 + 2) * 4;
    printf("%d\n", expressao_4);  // Resultado: 48

    int expressao_5 = 60 / ((3 + 2) * 4);
    printf("%d\n", expressao_5);  // Resultado: 3

    return 0;
}