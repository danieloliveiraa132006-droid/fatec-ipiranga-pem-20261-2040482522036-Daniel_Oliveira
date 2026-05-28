/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Calculadora de Média Ponderada   *
* Data - 28/05/2026                                      *
* Autor: Daniel OLiveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    double n1, n2, n3, media;
    int p1, p2, p3;

    printf("Digite as 3 notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("Digite os 3 pesos: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

    printf("Media ponderada: %.2lf\n", media);

    printf("sizeof(double): %zu bytes\n", sizeof(double));
    printf("sizeof(int): %zu bytes\n", sizeof(int));
