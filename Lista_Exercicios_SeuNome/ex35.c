/*
 * Aluno: SEU NOME
 * Exercício: 35
 * Descrição: Função validarCPF que verifica apenas o formato (11 dígitos ou 000.000.000-00).
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Retorna 1 se o formato for valido, 0 caso contrario. */
int validarCPF(char cpf[])
{
    size_t tam = strlen(cpf);

    if (tam == 11) {                       /* 12345678901 */
        for (size_t i = 0; i < 11; i++)
            if (!isdigit((unsigned char)cpf[i]))
                return 0;
        return 1;
    }

    if (tam == 14) {                       /* 123.456.789-01 */
        for (size_t i = 0; i < 14; i++) {
            if (i == 3 || i == 7) {
                if (cpf[i] != '.') return 0;
            } else if (i == 11) {
                if (cpf[i] != '-') return 0;
            } else if (!isdigit((unsigned char)cpf[i])) {
                return 0;
            }
        }
        return 1;
    }

    return 0;
}

int main(void)
{
    char cpf[50];

    printf("Digite o CPF: ");
    if (fgets(cpf, sizeof(cpf), stdin) == NULL) return 1;
    cpf[strcspn(cpf, "\n")] = '\0';

    printf("CPF %s\n", validarCPF(cpf) ? "com formato valido" : "com formato invalido");
    return 0;
}
