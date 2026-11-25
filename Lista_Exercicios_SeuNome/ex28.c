/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 28
 * Descrição: Lê numeros.txt (um inteiro por linha) e exibe a soma de todos.
 * Data: 20/11/2026
 */
#include <stdio.h>

int main(void)
{
    int n;
    long soma = 0;
    FILE *f = fopen("numeros.txt", "r");

    if (f == NULL) {
        printf("numeros.txt nao encontrado.\n");
        return 1;
    }

    while (fscanf(f, "%d", &n) == 1)
        soma += n;
    fclose(f);

    printf("Soma = %ld\n", soma);
    return 0;
}
