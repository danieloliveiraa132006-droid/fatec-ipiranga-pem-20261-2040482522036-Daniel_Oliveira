/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Estatísticas de Vetor            *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

int main() {
    float v[10], soma = 0, maior, menor, acima = 0, media;

    for(int i=0; i<10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &v[i]);

        soma += v[i];

        if(i == 0) {
            maior = menor = v[i];
        }

        if(v[i] > maior)
            maior = v[i];

        if(v[i] < menor)
            menor = v[i];
    }

    media = soma / 10;

    for(int i=0; i<10; i++) {
        if(v[i] > media)
            acima += v[i];
    }

    printf("Media: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Soma acima da media: %.2f\n", acima);

    return 0;
}