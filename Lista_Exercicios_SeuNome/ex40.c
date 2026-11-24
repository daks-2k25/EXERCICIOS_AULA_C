/*
 * Aluno: SEU NOME
 * Exercício: 40
 * Descrição: Função buscar(int arr[], int n, int chave) que retorna o índice ou -1.
 * Data: 24/11/2026
 */
#include <stdio.h>

int buscar(int arr[], int n, int chave)
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == chave)
            return i;
    }
    return -1;
}

int main(void)
{
    int v[] = {5, 12, 8, 30, 21};
    int n = (int)(sizeof(v) / sizeof(v[0]));
    int chave;

    printf("Chave: ");
    if (scanf("%d", &chave) != 1) return 1;

    int pos = buscar(v, n, chave);
    if (pos >= 0)
        printf("Encontrada no indice %d.\n", pos);
    else
        printf("Nao encontrada (-1).\n");
    return 0;
}
