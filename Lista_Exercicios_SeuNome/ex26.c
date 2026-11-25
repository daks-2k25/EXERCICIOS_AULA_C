/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 26
 * Descrição: Lê nome, idade e salário de um funcionário e grava em funcionario.csv.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define TAM 50

int main(void)
{
    char nome[TAM];
    int idade;
    double salario;

    printf("Nome: ");
    if (fgets(nome, TAM, stdin) == NULL) return 1;
    nome[strcspn(nome, "\n")] = '\0';

    printf("Idade: ");
    if (scanf("%d", &idade) != 1) return 1;
    printf("Salario: ");
    if (scanf("%lf", &salario) != 1) return 1;

    FILE *f = fopen("funcionario.csv", "w");
    if (f == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(f, "Nome,Idade,Salario\n");
    fprintf(f, "%s,%d,%.2f\n", nome, idade, salario);
    fclose(f);

    printf("funcionario.csv gravado.\n");
    return 0;
}
