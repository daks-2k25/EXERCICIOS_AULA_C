/*
 * Aluno: SEU NOME
 * Exercício: 09
 * Descrição: Desenha um triângulo retângulo de asteriscos com a base informada.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int base;

    printf("Base: ");
    if (scanf("%d", &base) != 1) return 1;

    /* a linha i tem i asteriscos */
    for (int i = 1; i <= base; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
