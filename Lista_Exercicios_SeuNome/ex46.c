/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 46
 * Descrição: Struct Pessoa e função inicializar que modifica a struct via ponteiro.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define MAX 50

struct Pessoa {
    char nome[MAX];
    int idade;
};

void inicializar(struct Pessoa *p, char nome[], int idade)
{
    strncpy(p->nome, nome, MAX - 1);
    p->nome[MAX - 1] = '\0';
    p->idade = idade;
}

int main(void)
{
    struct Pessoa pessoa;

    inicializar(&pessoa, "Maria", 25);
    printf("Nome: %s, Idade: %d\n", pessoa.nome, pessoa.idade);
    return 0;
}
