/*
 * Aluno: SEU NOME
 * Exercício: 20
 * Descrição: Aloca dinamicamente (malloc) um array de N inteiros, preenche e imprime.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Tamanho N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int *v = malloc((size_t)n * sizeof(int));
    if (v == NULL) {
        printf("Sem memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        v[i] = (i + 1) * 10;

    for (int i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    return 0;
}
