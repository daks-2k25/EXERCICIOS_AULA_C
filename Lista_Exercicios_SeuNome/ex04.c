/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 04
 * Descrição: Calculadora com menu que repete até o usuário escolher Sair (do-while).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int opcao;
    double a, b;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n");
        printf("Opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (opcao < 0 || opcao > 4) {
            printf("Opcao invalida.\n");
            continue;   /* no do-while volta para a condicao */
        }
        if (opcao == 0)
            break;

        printf("Primeiro numero: ");
        if (scanf("%lf", &a) != 1) return 1;
        printf("Segundo numero: ");
        if (scanf("%lf", &b) != 1) return 1;

        switch (opcao) {
        case 1: printf("Resultado: %.2f\n", a + b); break;
        case 2: printf("Resultado: %.2f\n", a - b); break;
        case 3: printf("Resultado: %.2f\n", a * b); break;
        case 4:
            if (b == 0)
                printf("Erro: divisao por zero.\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
        }
    } while (opcao != 0);

    printf("Ate logo!\n");
    return 0;
}
