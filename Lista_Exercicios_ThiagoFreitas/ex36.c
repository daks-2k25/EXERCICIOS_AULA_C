/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 36
 * Descrição: Struct Aluno e função mediaTurma que calcula a média das notas.
 * Data: 22/11/2026
 */
#include <stdio.h>
#include <string.h>

#define MAX 50

struct Aluno {
    char nome[MAX];
    float nota;
};

float mediaTurma(struct Aluno alunos[], int n)
{
    float soma = 0;

    if (n <= 0)   /* evita divisao por zero */
        return 0;
    for (int i = 0; i < n; i++)
        soma += alunos[i].nota;
    return soma / n;
}

int main(void)
{
    struct Aluno turma[MAX];
    int n;

    printf("Quantos alunos (1 a %d)? ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d: ", i + 1);
        if (scanf("%49s", turma[i].nome) != 1) return 1;
        printf("Nota: ");
        if (scanf("%f", &turma[i].nota) != 1) return 1;
    }

    printf("Media da turma: %.2f\n", mediaTurma(turma, n));
    return 0;
}
