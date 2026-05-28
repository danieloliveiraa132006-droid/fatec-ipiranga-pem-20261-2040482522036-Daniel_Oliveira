/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Aritmética de Ponteiros          *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    int v[6] = {1,2,3,4,5,6};
    int *p = v;
    int soma = 0;

    for(int i=0; i<6; i++) {
        printf("Valor: %d Endereco: %p\n", *(p+i), (void*)(p+i));
        soma += *(p+i);
        *(p+i) *= 2;
    }

    printf("Soma: %d\n", soma);

    printf("\nValores dobrados:\n");

    for(int i=0; i<6; i++) {
        printf("%d ", *(p+i));
    }

    printf("\n");

    return 0;
}