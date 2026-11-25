/*
 * Aluno: Thiago Freitas de Lima
 * Exercício: 41
 * Descrição: Explica o que é um ponteiro e a diferença entre *p e &variavel (resposta nos comentários, com demonstração).
 * Data: 24/11/2026
 */
#include <stdio.h>

/*
 * O que e um ponteiro?
 *   E uma variavel que guarda o ENDERECO de memoria de outra variavel.
 *   Em vez de guardar um valor (como 10), guarda "onde" esse valor esta.
 *
 * Diferenca entre &variavel e *p:
 *   &variavel -> operador "endereco de": devolve o endereco da variavel.
 *   *p        -> operador de "desreferencia": acessa (le ou altera) o valor
 *                que esta no endereco guardado em p.
 *   (Na declaracao, "int *p" apenas indica que p e um ponteiro para int.)
 */
int main(void)
{
    int x = 10;
    int *p = &x;   /* p recebe o endereco de x */

    printf("Valor de x:            %d\n", x);
    printf("Endereco de x (&x):    %p\n", (void *)&x);
    printf("Conteudo de p (= &x):  %p\n", (void *)p);
    printf("Valor apontado (*p):   %d\n", *p);
    return 0;
}
