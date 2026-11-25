/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 30
 * Descrição: Menu (do-while) para inserir dados em dados.txt e exibir todos os dados.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define ARQUIVO "dados.txt"

static void inserir_dado(void)
{
    char texto[100];
    FILE *f = fopen(ARQUIVO, "a");

    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    printf("Digite o dado: ");
    if (fgets(texto, sizeof(texto), stdin) != NULL) {
        texto[strcspn(texto, "\n")] = '\0';
        fprintf(f, "%s\n", texto);
    }
    fclose(f);
}

static void exibir_dados(void)
{
    char linha[100];
    FILE *f = fopen(ARQUIVO, "r");

    if (f == NULL) {
        printf("Nenhum dado cadastrado ainda.\n");
        return;
    }
    while (fgets(linha, sizeof(linha), f) != NULL)
        printf("- %s", linha);
    fclose(f);
}

int main(void)
{
    int opcao = 0;
    char buf[16];

    do {
        printf("\n1) Inserir dados\n2) Exibir todos os dados\n3) Sair\nOpcao: ");
        if (fgets(buf, sizeof(buf), stdin) == NULL) break;
        if (sscanf(buf, "%d", &opcao) != 1) opcao = 0;

        switch (opcao) {
        case 1: inserir_dado(); break;
        case 2: exibir_dados(); break;
        case 3: printf("Saindo...\n"); break;
        default: printf("Opcao invalida.\n");
        }
    } while (opcao != 3);

    return 0;
}
