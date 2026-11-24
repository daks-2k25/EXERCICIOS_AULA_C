/*
 * Aluno: SEU NOME
 * Exercício: 43
 * Descrição: Usa o ponteiro p para alterar x para 20 e imprime.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    *p = 20;   /* altera x atraves do ponteiro */
    printf("x = %d\n", x);
    return 0;
}
