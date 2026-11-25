/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 21
 * Descrição: Escreve a string "Primeira linha de um arquivo." no arquivo teste.txt.
 * Data: 18/11/2026
 */
#include <stdio.h>

int main(void)
{
    FILE *f = fopen("teste.txt", "w");
    if (f == NULL) {
        printf("Erro ao criar teste.txt.\n");
        return 1;
    }

    fputs("Primeira linha de um arquivo.\n", f);
    fclose(f);

    printf("teste.txt criado.\n");
    return 0;
}
