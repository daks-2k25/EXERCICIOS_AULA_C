/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 01
 * Descrição: Lê um número N e calcula a soma de 1 a N com um laço for.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int n;
    long soma = 0;

    printf("Digite N: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
        soma += i;

    printf("Soma de 1 a %d = %ld\n", n, soma);
    return 0;
}
