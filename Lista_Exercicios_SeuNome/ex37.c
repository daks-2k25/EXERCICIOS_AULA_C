/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 37
 * Descrição: Função dobrar(int *x) que dobra o valor da variável passada por ponteiro.
 * Data: 24/11/2026
 */
#include <stdio.h>

void dobrar(int *x)
{
    *x = *x * 2;
}

int main(void)
{
    int n;

    printf("Numero: ");
    if (scanf("%d", &n) != 1) return 1;

    dobrar(&n);
    printf("Dobro: %d\n", n);
    return 0;
}
