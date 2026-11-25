/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 16
 * Descrição: Lê uma matriz 3x3 e calcula a soma da diagonal principal.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int m[3][3], soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            if (scanf("%d", &m[i][j]) != 1) return 1;
        }
    }

    for (int i = 0; i < 3; i++)
        soma += m[i][i];   /* diagonal principal: linha == coluna */

    printf("Soma da diagonal principal = %d\n", soma);
    return 0;
}
