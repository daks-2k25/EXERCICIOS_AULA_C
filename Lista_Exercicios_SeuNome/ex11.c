/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 11
 * Descrição: Preenche um array de 10 posições com números aleatórios (rand) e imprime.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void)
{
    int v[TAM];

    srand((unsigned)time(NULL));   /* semente diferente a cada execucao */
    for (int i = 0; i < TAM; i++)
        v[i] = rand() % 100;       /* valores de 0 a 99 */

    for (int i = 0; i < TAM; i++)
        printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
