/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 39
 * Descrição: Função ordenar(int arr[], int n) com Bubble Sort.
 * Data: 23/11/2026
 */
#include <stdio.h>

void ordenar(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main(void)
{
    int v[] = {42, 7, 19, 3, 88, 1};
    int n = (int)(sizeof(v) / sizeof(v[0]));

    ordenar(v, n);

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
