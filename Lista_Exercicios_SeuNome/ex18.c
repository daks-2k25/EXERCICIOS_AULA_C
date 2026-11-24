/*
 * Aluno: SEU NOME
 * Exercício: 18
 * Descrição: Copia um array para outro sem usar funções de biblioteca.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 6

int main(void)
{
    int origem[TAM] = {10, 20, 30, 40, 50, 60};
    int destino[TAM];

    for (int i = 0; i < TAM; i++)
        destino[i] = origem[i];

    printf("Destino: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", destino[i]);
    printf("\n");
    return 0;
}
