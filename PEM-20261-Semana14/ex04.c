/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Validador de Triângulos          *
* Data - 28/05/2026                                      *
* Autor: Daniel OLiveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    double a, b, c;

    printf("Digite os lados: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a+b > c && a+c > b && b+c > a) {
        printf("Triangulo valido\n");

        if(a == b && b == c)
            printf("Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");

        double maior = a;
        if(b > maior) maior = b;
        if(c > maior) maior = c;

        double x, y;

        if(maior == a) {
            x = b;
            y = c;
        } else if(maior == b) {
            x = a;
            y = c;
        } else {
            x = a;
            y = b;
        }

        if(maior*maior == x*x + y*y)
            printf("Retangulo\n");
        else if(maior*maior > x*x + y*y)
            printf("Obtusangulo\n");
        else
            printf("Acutangulo\n");

    } else {
        printf("Nao forma triangulo\n");
    }

    return 0;
}