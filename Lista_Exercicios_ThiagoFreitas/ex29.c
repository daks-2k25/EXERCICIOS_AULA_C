/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 29
 * Descrição: Copia o conteúdo de um arquivo de origem para um arquivo de destino.
 * Data: 20/11/2026
 */
#include <stdio.h>

int main(void)
{
    char origem[100], destino[100];

    printf("Arquivo de origem: ");
    if (scanf("%99s", origem) != 1) return 1;
    printf("Arquivo de destino: ");
    if (scanf("%99s", destino) != 1) return 1;

    FILE *fo = fopen(origem, "rb");
    if (fo == NULL) {
        printf("Nao foi possivel abrir a origem.\n");
        return 1;
    }
    FILE *fd = fopen(destino, "wb");
    if (fd == NULL) {
        printf("Nao foi possivel criar o destino.\n");
        fclose(fo);
        return 1;
    }

    int c;
    while ((c = fgetc(fo)) != EOF)
        fputc(c, fd);

    fclose(fo);
    fclose(fd);
    printf("Copia concluida.\n");
    return 0;
}
