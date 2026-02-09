// =====================================================================================
// PRATICA: SISTEMA DE BIBLIOTECAS
// =====================================================================================
// OBJETIVO DA PARTE 1:
// Implementar o cadastro e a listagem de livros utilizando um array estático.
// Foco em struct, entrada/saida de dados organização e básica.
// =====================================================================================
// OBJETIVO DA PARTE 2:
// Adicionar a funcionalidade de empreéstimo e introduzir alocação dinâmica.
// - Os arrays de livros e empréstimos são alocados com malloc/calloc.
// - Nova struct para Empréstimo.
// - Liberação de memória com o free.
// =====================================================================================
// OBJETIVO DA PARTE 3:
// Modularização o código com funções especializada, aplicando boas práticas.
// - Passagem de valor (para exibição) e por referência (para modificação).
// - Funções para cada funcionalidade principal do sistema.
// - A função main() se torna um "orquestrador", chamando as outras.
// =====================================================================================

#include <stdio.h>
#include <string.h> //
#include <stdlib.h> // Para strcspn()

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define MAX_EMPRESTIMO 100 // Definido uma capacidade para empréstimos.
#define TAM_STRING 100

// --- Definição da Estrutura (Struct) ---
// Struct livros agora tem um campo 'disponivel' para controlar o status.
struct Livro{
    char nome [TAM_STRING];
    char autor [TAM_STRING];
    char editora [TAM_STRING];
    int edicao;
    int disponivel; // 1 para sim, 0 para não
};

// Nova struct para armazenar informações de empréstimos.
struct Emprestimo {
    int indiceLivro; // Para saber qual livro do array 'biblioteca' foi emprestado
    char nomeUsuario[TAM_STRING];
};

// --- Protótipo das Funções ---
// Declarar as funções aqui permite que a 'main' as chame antes de suas definições.
void limparBufferEntrada();
void exibirMenu();
void cadastrarLivro(struct Livro *biblioteca, int *totalLivros);
void listarLivros(const struct Livro *biblioteca, int totalLivros); // 'cost' indica que a função não modificará o array de livros.
void realizarEmprestimo(struct Livro *biblioteca, int totalLivros, struct Emprestimo *emprestimo, int *totalEmprestimos);
void listarEmprestimos(const struct Livro *biblioteca, const struct Emprestimo *emprestimo, int totalEmprestimos);
void liberarMemoria(struct Livro *biblioteca, struct Emprestimo *emprestimo);


// --- Função principal (main)---
// Agora, a main é muito mais limpa. Ela aloca mémoria, controla o menu
// e delega as tarefas para as funções especializadas
int main() {
    // 1. ALOCAÇÃO DINÂMICA DE MEMÓRIA
    // Agora, em vez de array estáticos, usamos ponteiros.
    // Usamos calloc para umm array de livros, calloc(num_elementos, tamanho_de_cada_elemento)
    // Vantagem: inicializa toda a mémoria com zero. Isso significa que 'disponivel' já começa como 0 (indisponível).
    struct Livro *biblioteca = (struct Livro *) calloc(MAX_LIVROS, sizeof(struct Livro)); // Aloca um array de livros

    // Usamos malloc para o array de empréstimos. malloc(tamanho_total_em_bytes)
    struct Emprestimo *emprestimo = (struct Emprestimo *) malloc(MAX_EMPRESTIMO * sizeof(struct Emprestimo)); // Aloca um array de empréstimos

    // VERIFICAÇÃO: É crucial verificar se a alocação de memória de certo.
    if (biblioteca == NULL || emprestimo == NULL) {
        printf("Erro: falha ao alocar memoria.\n");
        return 1; // Retorna 1 para indicar erro
    }

    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;

    // --- Loop Principal do menu ---
    do {
        exibirMenu();
        // Lê a opção do usuário.
        scanf("%d", &opcao);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

        // --- Processar a opção ---
        switch (opcao) {
            case 1: // CADASTRO DE LIVRO
                // Passamos o endereço de 'totalLivros' (&) para que a função possa MODIFICAR seu valor
                cadastrarLivro(biblioteca, &totalLivros);
                break;

            case 2: // LISTAGEM DE LIVROS
                // Passamos apenas o valor de 'totalLivros', pois a função só precisa LER.
                listarLivros(biblioteca, totalLivros);
                break;
            
            case 3: //REALIZAR EMPRÉSTIMO
                realizarEmprestimo(biblioteca, totalLivros, emprestimo, &totalEmprestimos);
                break;

            case 4: // LISTAR EMPRÉSTIMOS
                listarEmprestimos(biblioteca, emprestimo, totalEmprestimos);
                break;

            case 0: // SAIR
                printf("Saindo do sistema...\n");
                break;

            default: // OPÇÃO INVÁLIDA
                printf("Opcao invalida! pressione ENTER para tente novamente.\n");
                getchar();
                break;
        }

    } while (opcao != 0);

    // 2. LIBERAÇÃO DE MEMÓRIA
    // Antes de terminar, é ESSENCIAL liberar a memória que foi alocada dinamicamente.
    // Isso evita "memory leaks" (vazamentos de memória).
    liberarMemoria(biblioteca, emprestimo);

    return 0; // Fim do programa
}

// --- Funçao para limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void exibirMenu() {
    // Exibir o menu de opções.
        printf("================================================\n");
        printf("        BIBLIOTECA - PARTE 3 (MESTRE)\n");
        printf("================================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Realizar emprestimo\n"); // Nova funcionalidade
        printf("4 - Listar emprestimos\n"); // Nova funcionalidade
        printf("0 - Sair\n");
        printf("------------------------------------------------\n");
        printf("Escolha uma opcao: ");
}

/**
 *  @brief Cadastra um novo livro na biblioteca.
 *  @param biblioteca O arrayy de livros onde o novo livro será adicionado.
 *  @param totalLivros Ponteiro para o contador de livros, para que ele seja atualizado (passagem por referência). 
 */
void cadastrarLivro(struct Livro *biblioteca , int *totalLivros) {
    printf("--- Cadastro de novo Livro ---\n\n");
    if (*totalLivros < MAX_LIVROS) {
        int indice = *totalLivros; // Usa o valor apontando pelo ponteiro para o índice.
    // O acesso aos campos é igual ao do array estático
        printf("Digite o nome do livro: ");
        fgets(biblioteca[indice].nome, TAM_STRING, stdin);
        // ... (demais leituras são iguais à parte 1) ...
        printf("Digite o nome do autor: ");
        fgets(biblioteca[indice].autor, TAM_STRING, stdin);
        printf("Digite o nome da editora: ");
        fgets(biblioteca[indice].editora, TAM_STRING, stdin);

        biblioteca[indice].nome[strcspn(biblioteca[indice].nome, "\n")] = '\0';
        biblioteca[indice].autor[strcspn(biblioteca[indice].autor, "\n")] = '\0';
        biblioteca[indice].editora[strcspn(biblioteca[indice].editora, "\n")] = '\0';

        printf("Digite a edicao: ");
        scanf("%d", &biblioteca[indice].edicao);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

        // Ao cadastrar, o livro automaticamente é marcado como disponível.
        biblioteca[indice].disponivel = 1;

        (*totalLivros)++; // Incrementa o contador de livros cadastrados.
        printf("\nLivro cadastrado com sucesso!\n");
    } else {
        printf("Biblioteca cheia! Nao e possivel cadastrar mais livros.\n");
    }
    printf("\nPressione ENTER para continuar...");
    getchar(); // Pausa para o usuário ler a mensagem antes de voltar ao menu.
}

/** 
 * @brief Lista todos os livros cadastrados na biblioteca.
 * @param biblioteca O array (ponteiro constante, apenas para leitura).
 * @param totalLivros O número de livros (passagem por valor).
*/
void listarLivros(const struct Livro *biblioteca, int totalLivros) {
    printf("--- Listagem de Livros ---\n\n");
    if (totalLivros == 0) {
        printf("Nenhum livro cadastrado na biblioteca.\n");
    } else {
        for (int i = 0; i < totalLivros; i++) {
            printf("----------------------------------\n");
            printf("LIVRO %d: \n", i + 1);
            printf("Nome: %s\n", biblioteca[i].nome);
            printf("Autor: %s\n", biblioteca[i].autor);
            // Mostra o status de disponibilidade.
            printf("Status: %s\n", biblioteca[i].disponivel ? "Disponivel" : "Emprestado");
        }
            printf("----------------------------------\n");
    }
    // A pausa é crucial para que o usuário veja a lista antes
    // do próximo loob limpar a tela.
    printf("\nPressione ENTER para continuar...");
    getchar();
}
/**
 * @brief Realiza o empréstimo de um livro.
 * @param biblioteca Array de livros (modificável, para alterar o status).
 * @param totalLivros Total de Livros cadastrados.
 * @param emprestimo Array de empréstimos (modificável).
 * @param totalEmprestimos Ponteiro para o contador de empréstimo (para ser atualizado).
 */
void realizarEmprestimo(struct Livro *biblioteca, int totalLivros, struct Emprestimo *emprestimo, int *totalEmprestimos){
    printf("--- Realizar Emprestimo ---\n\n");

    if (*totalEmprestimos >= MAX_EMPRESTIMO) {
    printf("Limite de emprestimos atingido!\n");
    } else {
    printf("\nLivros disponiveis:\n");
    int disponiveis = 0;
    for (int i = 0; i < totalLivros; i++) {
        if (biblioteca[i].disponivel) {
            printf("%d - %s\n", i + 1, biblioteca[i].nome);
            disponiveis++;

        }
    }

    if (disponiveis == 0) {
        printf("Nenhuma livro disponivel para emprestimo.\n");

    } else {
        printf("\nDigite o numero do livro para emprestar: ");
        int numLivro;
        scanf("%d", &numLivro);
        limparBufferEntrada();

        int indice = numLivro - 1; // Coverte para o índice do array (0 a N-1).

        // Validação da escolha do usúario.
        if (indice >= 0 && indice < totalLivros && biblioteca[indice].disponivel) {
            printf("Digite o nome do usuario que esta pegando o livro: ");
            fgets(emprestimo[*totalEmprestimos].nomeUsuario, TAM_STRING, stdin);
            emprestimo[*totalEmprestimos].nomeUsuario[strcspn(emprestimo[*totalEmprestimos].nomeUsuario, "\n")] = '\0';
            
            // Registrar o empréstimo.
            emprestimo[*totalEmprestimos].indiceLivro = indice;

            // Atualizar o status do livro para indisponível.
            biblioteca[indice].disponivel = 0;

        (*totalEmprestimos)++; // Incrementa o contador de empréstimos.
            printf("\nEmprestimo realizado com sucesso!\n");
        } else {
            printf("\nNumero de livro invalido ou livro indisponivel.\n");
        }
    }
    }
    // A pausa é crucial para que o usuário veja a lista antes
    // do próximo loob limpar a tela.
    printf("\nPressione ENTER para continuar...");
    getchar();
}

/**
 * @brief Lista todos os empréstimos realizados.
 * @param biblioteca Array de livros (leitura)
 * @param emprestimo Array de empréstimos (leitura)
 * @param totalEmprestimos Total de empréstimos (valor)
 */
void listarEmprestimos(const struct Livro *biblioteca, const struct Emprestimo *emprestimo, int totalEmprestimos) {
    printf("--- Listar Emprestimos ---\n");
    if (totalEmprestimos == 0) {
        printf("Nenhum emprestimo registrado.\n");
    } else {
        for (int i = 0; i < totalEmprestimos; i++) {
            // Usa o índice armazenado no empréstimo para buscar o nome do livro.
            int indiceLivro = emprestimo[i].indiceLivro;
            printf("\n----------------------------------\n");
            printf("Emprestimo %d:\n", i + 1);
            printf("Livro: %s\n", biblioteca[indiceLivro].nome);
            printf("Usuario: %s\n", emprestimo[i].nomeUsuario); 
        }
        printf("----------------------------------\n");
    }
    printf("\nPressione ENTER para continuar...");
    getchar();
}

/**
 * @brief Libera a memória alocada para os arrays dinâmicos.
 */
void liberarMemoria(struct Livro *biblioteca, struct Emprestimo *emprestimo) {
    free(biblioteca);
    free(emprestimo);
    printf("\nMemoria liberada com sucesso.\n");
}