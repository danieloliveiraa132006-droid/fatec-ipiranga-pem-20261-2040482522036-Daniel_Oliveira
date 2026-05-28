/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Tabuada Interativa               *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    char op;

    do {
        for(int i=1; i<=10; i++) {
            int j = 1;

            while(j <= 10) {
                printf("%2d x %2d = %3d\n", i, j, i*j);
                j++;
            }
            printf("\n");
        }

        printf("Continuar? (S/N): ");
        scanf(" %c", &op);

    } while(op == 'S' || op == 's');

    return 0;
}