# include <stdio.h>
/*
Conversão entre tipos de dados:
Às vezes, você precisa converter um tipo de dado em outro para realizar certas
operações. Em C, isso pode ser feito de duas maneiras: conversão implícita e
conversão explícita (casting).

Para garantir que suas operações aritméticas sejam realizadas corretamente e 
evitar problemas de precisão e perda de dados, aqui estão algumas práticas recomendadas
que você deve seguir.

Verifique os tipos:
Sempre verifique os tipos de dados ao realizar operações
aritméticas para evitar resultados inesperados.

Use casting quando necessário:
Utilize casting explícito para garantir que as operações
sejam realizadas no tipo de dado correto.

Cuidado com a precisão
Lembre-se de que variáveis de ponto flutuante podem
introduzir erros de precisão. Use double para maio
precisão quando necessário.
*/
int main() {
    // Conversão implícita:
    // Ocorre automaticamente quando você mistura diferentes tipos de dados em uma
    // expressão. O compilador converte os tipos de dados para realizar a operação de
    // acordo com o que o programador escreveu.
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
    printf("Resultado: %.2f\n", resultado);

    // Conversão explícita:
    // A conversão explícita é feita usando operadores de casting para forçar a conversão
    // de um tipo de dado para outro.
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
    printf("Quociente: %.2f\n", quociente);

    return 0;
}