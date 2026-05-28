/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Multiplicação de Matrizes        *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    printf("Digite matriz A:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &A[i][j]);

    printf("Digite matriz B:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &B[i][j]);

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = 0;

            for(int k=0; k<3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz C:\n");

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}