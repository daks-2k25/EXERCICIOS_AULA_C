/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 17
 * Descrição: Lê 5 nomes de cidades em char nomes[5][50] e imprime a lista.
 * Data: 17/11/2026
 */
#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM 50

int main(void)
{
    char nomes[QTD][TAM];

    for (int i = 0; i < QTD; i++) {
        printf("Cidade %d: ", i + 1);
        if (fgets(nomes[i], TAM, stdin) == NULL) return 1;
        nomes[i][strcspn(nomes[i], "\n")] = '\0';   /* remove o newline do fgets */
    }

    printf("\nCidades:\n");
    for (int i = 0; i < QTD; i++)
        printf("%d. %s\n", i + 1, nomes[i]);
    return 0;
}
