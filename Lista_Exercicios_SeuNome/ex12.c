/*
 * Aluno: SEU NOME
 * Exercício: 12
 * Descrição: Lê dois arrays de 5 elementos e gera um terceiro com a soma elemento a elemento.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 5

int main(void)
{
    int a[TAM], b[TAM], c[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) return 1;
    }
    for (int i = 0; i < TAM; i++) {
        printf("b[%d]: ", i);
        if (scanf("%d", &b[i]) != 1) return 1;
    }

    for (int i = 0; i < TAM; i++)
        c[i] = a[i] + b[i];

    printf("Soma: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
