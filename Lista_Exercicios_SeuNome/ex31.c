/*
 * Aluno: SEU NOME
 * Exercício: 31
 * Descrição: Função soma(int a, int b) chamada no main com dois números lidos.
 * Data: 24/11/2026
 */
#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int main(void)
{
    int x, y;

    printf("Primeiro numero: ");
    if (scanf("%d", &x) != 1) return 1;
    printf("Segundo numero: ");
    if (scanf("%d", &y) != 1) return 1;

    printf("Soma = %d\n", soma(x, y));
    return 0;
}
