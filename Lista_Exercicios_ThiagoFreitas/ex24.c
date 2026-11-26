/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 24
 * Descrição: Lê nomes.txt e mostra quantos nomes têm mais de 5 caracteres.
 * Data: 19/11/2026
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[100];
    int total = 0;
    FILE *f = fopen("nomes.txt", "r");

    if (f == NULL) {
        printf("nomes.txt nao existe. Execute o ex23 primeiro.\n");
        return 1;
    }

    while (fgets(nome, sizeof(nome), f) != NULL) {
        nome[strcspn(nome, "\r\n")] = '\0';
        if (strlen(nome) > 5)
            total++;
    }
    fclose(f);

    printf("Nomes com mais de 5 caracteres: %d\n", total);
    return 0;
}
