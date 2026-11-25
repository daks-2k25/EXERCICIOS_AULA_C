/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 07
 * Descrição: Imprime as potências de 2 enquanto o valor for menor que 1000 (for).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void)
{
    int expoente = 0;

    /* o for para quando a potencia chega a 1000 ou mais */
    for (int valor = 1; valor < 1000; valor *= 2) {
        printf("2^%d = %d\n", expoente, valor);
        expoente++;
    }
    return 0;
}
