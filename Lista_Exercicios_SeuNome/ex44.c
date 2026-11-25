/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 44
 * Descrição: Percorre um array de inteiros com um ponteiro e imprime os elementos.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int v[] = {3, 6, 9, 12, 15};
    int n = (int)(sizeof(v) / sizeof(v[0]));
    int *p = v;   /* o nome do array e o endereco do primeiro elemento */

    for (int i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}
