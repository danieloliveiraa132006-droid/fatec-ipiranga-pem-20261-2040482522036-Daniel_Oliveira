/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Conversor de Unidades            *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    int cm;
    float metros;
    double km, milhas;

    printf("Digite a distancia em cm: ");
    scanf("%d", &cm);

    if(cm <= 0) {
        printf("Valor invalido!\n");
    } else {
        metros = cm / 100.0f;
        km = cm / 100000.0;
        milhas = km / 1.60934;

        printf("Metros: %.2f\n", metros);
        printf("Km: %.5lf\n", km);
        printf("Milhas: %.5lf\n", milhas);
    }

    return 0;
}