/*
 * Aluno: SEU NOME
 * Exercício: 34
 * Descrição: Fatorial recursivo, com comparação com a versão iterativa.
 * Data: 24/11/2026
 */
#include <stdio.h>

/*
 * Comparacao:
 *  - Recursiva: mais curta e proxima da definicao matematica (n! = n * (n-1)!),
 *    mas cada chamada ocupa espaco na pilha.
 *  - Iterativa (ex33): usa um laco e memoria constante, normalmente mais rapida.
 */
unsigned long long fatorial(int n)
{
    if (n <= 1)               /* caso base */
        return 1;
    return n * fatorial(n - 1);
}

int main(void)
{
    int n;

    printf("N (0 a 20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("%d! = %llu\n", n, fatorial(n));
    return 0;
}
