/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 27
 * Descrição: Lê funcionario.csv, processa cada linha e exibe os dados formatados.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char linha[200];
    FILE *f = fopen("funcionario.csv", "r");

    if (f == NULL) {
        printf("funcionario.csv nao existe. Execute o ex26 primeiro.\n");
        return 1;
    }

    if (fgets(linha, sizeof(linha), f) == NULL) {   /* pula o cabecalho */
        fclose(f);
        return 1;
    }

    while (fgets(linha, sizeof(linha), f) != NULL) {
        char nome[100];
        int idade;
        double salario;

        /* %[^,] le o texto ate a virgula */
        if (sscanf(linha, "%99[^,],%d,%lf", nome, &idade, &salario) == 3) {
            printf("Nome:    %s\n", nome);
            printf("Idade:   %d anos\n", idade);
            printf("Salario: R$ %.2f\n\n", salario);
        }
    }

    fclose(f);
    return 0;
}
