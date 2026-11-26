/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 22
 * Descrição: Lê o arquivo teste.txt e exibe o conteúdo no console.
 * Data: 19/11/2026
 */
#include <stdio.h>

int main(void)
{
    char linha[256];
    FILE *f = fopen("teste.txt", "r");

    if (f == NULL) {
        printf("teste.txt nao existe. Execute o ex21 primeiro.\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), f) != NULL)
        printf("%s", linha);

    fclose(f);
    return 0;
}
