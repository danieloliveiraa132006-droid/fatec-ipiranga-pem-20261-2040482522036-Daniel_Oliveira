/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Torre de Hanói                   *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

int movimentos = 0;

void hanoi(int n, char origem, char destino, char auxiliar) {
    if(n == 1) {
        printf("Mova disco 1 de %c para %c\n", origem, destino);
        movimentos++;
        return;
    }

    hanoi(n-1, origem, auxiliar, destino);

    printf("Mova disco %d de %c para %c\n", n, origem, destino);
    movimentos++;

    hanoi(n-1, auxiliar, destino, origem);
}

int main() {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'C', 'B');

    printf("Movimentos: %d\n", movimentos);
    printf("Formula: %.0lf\n", pow(2,n)-1);

    return 0;
}