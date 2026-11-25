/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 08
 * Descrição: Desenha um retângulo de asteriscos com altura e largura informadas (for aninhado).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int altura, largura;

    printf("Altura: ");
    if (scanf("%d", &altura) != 1) return 1;
    printf("Largura: ");
    if (scanf("%d", &largura) != 1) return 1;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
