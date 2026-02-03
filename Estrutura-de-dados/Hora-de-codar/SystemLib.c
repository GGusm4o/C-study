// =====================================================================================
// PRATICA: SISTEMA DE BIBLIOTECAS - PARTE 1
//
// OBJETIVO DESTA PARTE:
// Implementar o cadastro e a listagem de livros utilizando um array estático.
// Foco em struct, entrada/saida de dados organização e básica.
//
//
// =====================================================================================

#include <stdio.h>
#include <string.h> //
#include <stdlib.h> // Para strcspn()

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define TAM_STRING 100

// --- Definição da Estrutura (Struct) ---
struct Livro{
    char nome [TAM_STRING];
    char autor [TAM_STRING];
    char editora [TAM_STRING];
    int edicao;
};

// --- Funçao para limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função principal (main)---
int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // --- Loop Principal do menu ---
    do {
        
        // Exibir o menu de opções.
        printf("================================================\n");
        printf("        BIBLIOTECA - PARTE 1\n");
        printf("================================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("0 - Sair\n");
        printf("------------------------------------------------\n");
        printf("Escolha uma opcao: ");

        // Lê a opção do usuário.
        scanf("%d", &opcao);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

        // --- Processar a opção ---
        switch (opcao) {
            case 1: // CADASTRO DE LIVRO
                printf("--- Cadastro de novo Livro ---\n\n");

                if (totalLivros < MAX_LIVROS) {
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                    printf("Digite o nome do autor: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                    printf("Digite o nome da editora: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                    printf("Digite a edicao: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

                    totalLivros++; // Incrementa o contador de livros cadastrados.

                    printf("\nLivro cadastrado com sucesso!\n");
                } else {
                    printf("Biblioteca cheia! Nao e possivel cadastrar mais livros.\n");
                }

                printf("\nPressione ENTER para continuar...");
                getchar(); // Pausa para o usuário ler a mensagem antes de voltar ao menu.
                break;
            case 2: // LISTAGEM DE LIVROS
                printf("--- Listagem de Livros ---\n\n");

                if (totalLivros == 0) {
                    printf("Nenhum livro cadastrado na biblioteca.\n");
                } else {
                    for (int i = 0; i < totalLivros; i++) {
                        printf("----------------------------------\n");
                        printf("LIVRO %d: \n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edicao: %d\n", biblioteca[i].edicao);
                    }
                     printf("--------------------------\n");
                }

                // A pausa é crucial para que o usuário veja a lista antes
                // do próximo loob limpar a tela.
                printf("\nPressione ENTER para continuar...");
                getchar();
                break;
            case 0: // SAIR
                printf("Saindo do sistema...\n");
                break;

            default: // OPÇÃO INVÁLIDA
                printf("Opcao invalida! Tente novamente.\n");
                printf("\nPressione ENTER para continuar...");
                getchar();
                break;

        }

    } while (opcao != 0);

    return 0; // Fim do programa
}