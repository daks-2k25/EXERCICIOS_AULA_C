/*
 * Aluno: SEU NOME
 * Exercício: 23
 * Descrição: Lê 5 nomes e os grava em nomes.txt, um por linha.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM 50

int main(void)
{
    char nome[TAM];
    FILE *f = fopen("nomes.txt", "w");   /* "w" sobrescreve o arquivo */

    if (f == NULL) {
        printf("Erro ao criar nomes.txt.\n");
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
