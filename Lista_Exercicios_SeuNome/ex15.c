/*
 * Aluno: SEU NOME
 * Exercício: 15
 * Descrição: Lê uma matriz 2x3 e guarda a soma de cada linha em um array de 2 posições.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int m[2][3], soma[2] = {0, 0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            if (scanf("%d", &m[i][j]) != 1) return 1;
            soma[i] += m[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
        printf("Soma da linha %d = %d\n", i, soma[i]);
    return 0;
}
