/*
 * Aluno: SEU NOME
 * Exercício: 25
 * Descrição: Versão do ex23 que anexa novos nomes ao final de nomes.txt sem sobrescrever.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM 50

int main(void)
{
    char nome[TAM];
    FILE *f = fopen("nomes.txt", "a");   /* "a" (append) grava no final */

    if (f == NULL) {
        printf("Erro ao abrir nomes.txt.\n");
        return 1;
    }

    for (int i = 0; i < QTD; i++) {
        printf("Nome %d: ", i + 1);
        if (fgets(nome, TAM, stdin) == NULL) break;
        nome[strcspn(nome, "\n")] = '\0';
        fprintf(f, "%s\n", nome);
    }

    fclose(f);
    return 0;
}
