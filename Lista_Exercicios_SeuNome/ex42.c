/*
 * Aluno: SEU NOME
 * Exercício: 42
 * Descrição: Declara x=10 e um ponteiro p para x; imprime x usando o ponteiro.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("x via ponteiro: %d\n", *p);
    return 0;
}
