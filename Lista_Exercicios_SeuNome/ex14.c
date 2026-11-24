/*
 * Aluno: SEU NOME
 * Exercício: 14
 * Descrição: Lê 5 números e os ordena com Bubble Sort.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 5

int main(void)
{
    int v[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        if (scanf("%d", &v[i]) != 1) return 1;
    }

    /* Bubble Sort: a cada passada o maior elemento sobe para o fim */
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }

    printf("Ordenado: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
