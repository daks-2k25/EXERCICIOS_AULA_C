/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 50
 * Descrição: Array de ponteiros para funções (soma, sub, mult, div); um índice escolhe a operação.
 * Data: 24/11/2026
 */
#include <stdio.h>

double soma(double a, double b) { return a + b; }
double sub(double a, double b)  { return a - b; }
double mult(double a, double b) { return a * b; }
double divi(double a, double b) { return a / b; }   /* "div" conflita com stdlib.h */

int main(void)
{
    double (*operacoes[4])(double, double) = { soma, sub, mult, divi };
    int op;
    double a, b;

    printf("0 soma | 1 subtracao | 2 multiplicacao | 3 divisao\nOperacao: ");
    if (scanf("%d", &op) != 1 || op < 0 || op > 3) {
        printf("Operacao invalida.\n");
        return 1;
    }
    printf("Dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;

    if (op == 3 && b == 0) {
        printf("Erro: divisao por zero.\n");
        return 1;
    }

    printf("Resultado: %.2f\n", operacoes[op](a, b));
    return 0;
}
