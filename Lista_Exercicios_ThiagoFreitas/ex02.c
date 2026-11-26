/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 02
 * Descrição: Lê a idade de 10 pessoas e calcula a média usando for.
 * Data: 14/11/2026
 */
#include <stdio.h>

#define QTD 10

int main(void)
{
    int idade, soma = 0;

    for (int i = 1; i <= QTD; i++) {
        printf("Idade da pessoa %d: ", i);
        if (scanf("%d", &idade) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
        soma += idade;
    }

    printf("Media das idades: %.2f\n", (double)soma / QTD);
    return 0;
}
