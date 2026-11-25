/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 13
 * Descrição: Lê 10 números e uma chave; informa se a chave foi encontrada e em qual índice.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 10

int main(void)
{
    int v[TAM], chave, pos = -1;

    for (int i = 0; i < TAM; i++) {
        printf("v[%d]: ", i);
        if (scanf("%d", &v[i]) != 1) return 1;
    }
    printf("Chave: ");
    if (scanf("%d", &chave) != 1) return 1;

    for (int i = 0; i < TAM; i++) {
        if (v[i] == chave) {
            pos = i;
            break;
        }
    }

    if (pos >= 0)
        printf("Chave %d encontrada no indice %d.\n", chave, pos);
    else
        printf("Chave %d nao encontrada.\n", chave);
    return 0;
}
