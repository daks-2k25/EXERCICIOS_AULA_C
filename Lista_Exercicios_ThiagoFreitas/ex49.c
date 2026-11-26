/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 49
 * Descrição: Cria com malloc um array de N inteiros, preenche, imprime e libera a memória.
 * Data: 25/11/2026
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

    int *v = malloc((size_t)n * sizeof(*v));
    if (v == NULL) {
        printf("Sem memoria.\n");
        return 1;
    }

    for (int *p = v; p < v + n; p++)
        *p = (int)(p - v) * 2;   /* preenche com 0, 2, 4, ... */

    for (int *p = v; p < v + n; p++)
        printf("%d ", *p);
    printf("\n");

    free(v);   /* libera a memoria alocada */
    return 0;
}
