/*
 * Aluno: SEU NOME
 * Exercício: 48
 * Descrição: Ponteiro para ponteiro: imprime x usando q (q aponta para p, p aponta para x).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int x = 42;
    int *p = &x;
    int **q = &p;

    printf("x via q: %d\n", **q);   /* *q e p; **q e x */
    return 0;
}
