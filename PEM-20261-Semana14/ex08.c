/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Manipulação de Vetores           *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>
#define N 8

int main() {
    int v[N], inv[N];
    int maior, menor, indMaior=0, indMenor=0;
    int pares=0, impares=0, busca;

    for(int i=0; i<N; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &v[i]);

        if(i == 0) {
            maior = menor = v[i];
        }

        if(v[i] > maior) {
            maior = v[i];
            indMaior = i;
        }

        if(v[i] < menor) {
            menor = v[i];
            indMenor = i;
        }

        if(v[i] % 2 == 0)
            pares++;
        else
            impares++;

        inv[N-1-i] = v[i];
    }

    printf("Maior: %d indice %d\n", maior, indMaior);
    printf("Menor: %d indice %d\n", menor, indMenor);
    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    printf("Vetor invertido: ");
    for(int i=0; i<N; i++)
        printf("%d ", inv[i]);

    printf("\nDigite valor para busca: ");
    scanf("%d", &busca);

    int achou = 0;

    for(int i=0; i<N; i++) {
        if(v[i] == busca) {
            printf("Encontrado no indice %d\n", i);
            achou = 1;
        }
    }

    if(!achou)
        printf("Valor nao encontrado\n");

    return 0;
}