/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 47
 * Descrição: Soma os elementos de um array de 5 inteiros com aritmética de ponteiros.
 * Data: 25/11/2026
 */
#include <stdio.h>

#define TAM 5

int main(void)
{
    int v[TAM] = {4, 8, 15, 16, 23};
    int soma = 0;

    for (int i = 0; i < TAM; i++)
        soma += *(v + i);   /* *(v + i) equivale a v[i] */

    printf("Soma = %d\n", soma);
    return 0;
}
