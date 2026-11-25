/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 05
 * Descrição: Imprime os números de 10 a 1 com while e depois com for.
 * Data: 14/11/2026
 */
#include <stdio.h>

int main(void)
{
    int i = 10;

    printf("Com while: ");
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }

    printf("\nCom for:   ");
    for (int j = 10; j >= 1; j--)
        printf("%d ", j);

    printf("\n");
    return 0;
}
