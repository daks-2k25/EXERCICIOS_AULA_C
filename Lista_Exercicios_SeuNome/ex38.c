/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 38
 * Descrição: main que usa soma e dobrar separadas em util.c e util.h.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include "util.h"

/* Compilar: gcc -Wall -Wextra -std=c99 ex38.c util.c -o ex38 */
int main(void)
{
    int a, b;

    printf("Dois numeros: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("Soma = %d\n", soma(a, b));
    dobrar(&a);
    printf("Primeiro numero dobrado = %d\n", a);
    return 0;
}
