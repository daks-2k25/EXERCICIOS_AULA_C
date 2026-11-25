/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 19
 * Descrição: Lê 15 números (0 a 9) e imprime a frequência de cada um.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define QTD 15

int main(void)
{
    int freq[10] = {0}, n;

    for (int i = 0; i < QTD; i++) {
        printf("Numero %d (0 a 9): ", i + 1);
        if (scanf("%d", &n) != 1) return 1;
        if (n < 0 || n > 9) {
            printf("Fora do intervalo, digite novamente.\n");
            i--;
            continue;
        }
        freq[n]++;   /* o proprio numero e o indice do contador */
    }

    for (int d = 0; d < 10; d++)
        printf("%d aparece %d vez(es)\n", d, freq[d]);
    return 0;
}
