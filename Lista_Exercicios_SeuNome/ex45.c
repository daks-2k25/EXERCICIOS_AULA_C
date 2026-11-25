/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 45
 * Descrição: Função troca(int *a, int *b) que troca os valores de dois inteiros.
 * Data: 24/11/2026
 */
#include <stdio.h>

void troca(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x, y;

    printf("Dois numeros: ");
    if (scanf("%d %d", &x, &y) != 2) return 1;

    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}
