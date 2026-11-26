/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 10
 * Descrição: Imprime os N primeiros termos de Fibonacci com while e compara com a versão for.
 * Data: 16/11/2026
 */
#include <stdio.h>

/*
 * Comparacao com a versao usando for:
 *   for (int i = 0; i < n; i++) { ... }
 * O for junta inicializacao, condicao e incremento na mesma linha, ideal
 * quando o numero de repeticoes e conhecido. O while exige declarar e
 * incrementar o contador manualmente, mas o resultado e identico.
 */
int main(void)
{
    int n, i = 0;
    long a = 0, b = 1;

    printf("Quantos termos? ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (i < n) {
        printf("%ld ", a);
        long prox = a + b;
        a = b;
        b = prox;
        i++;
    }
    printf("\n");
    return 0;
}
