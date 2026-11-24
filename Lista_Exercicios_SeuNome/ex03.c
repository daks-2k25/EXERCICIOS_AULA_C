/*
 * Aluno: SEU NOME
 * Exercício: 03
 * Descrição: Lê um número e informa se ele é primo (laço for e flag).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int n, primo = 1;   /* flag: 1 = primo ate prova em contrario */

    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (n < 2)
        primo = 0;

    /* basta testar divisores ate a raiz quadrada de n */
    for (int i = 2; i * i <= n && primo; i++) {
        if (n % i == 0)
            primo = 0;
    }

    printf("%d %s primo.\n", n, primo ? "e" : "nao e");
    return 0;
}
