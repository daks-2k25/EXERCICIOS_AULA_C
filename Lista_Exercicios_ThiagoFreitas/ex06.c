/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 06
 * Descrição: Pede um número positivo e repete a leitura enquanto for inválido (while).
 * Data: 15/11/2026
 */
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n <= 0) {
        printf("Digite um numero positivo: ");
        if (scanf("%d", &n) != 1) {
            /* descarta a entrada nao numerica para nao entrar em loop infinito */
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            if (c == EOF)
                return 1;
            n = 0;
            printf("Entrada invalida.\n");
        } else if (n <= 0) {
            printf("Valor invalido (precisa ser maior que zero).\n");
        }
    }

    printf("Numero valido: %d\n", n);
    return 0;
}
