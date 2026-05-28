/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Funções com Ponteiros            *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minMax(int *v, int n, int *min, int *max) {
    *min = *max = v[0];

    for(int i=1; i<n; i++) {
        if(v[i] < *min)
            *min = v[i];

        if(v[i] > *max)
            *max = v[i];
    }
}

void normalizaVetor(float *v, int n) {
    float maior = v[0];

    for(int i=1; i<n; i++) {
        if(v[i] > maior)
            maior = v[i];
    }

    for(int i=0; i<n; i++) {
        v[i] /= maior;
    }
}

int main() {
    int a = 10, b = 20;

    troca(&a, &b);
    printf("a=%d b=%d\n", a, b);

    int v[5] = {5,1,9,3,7};
    int min, max;

    minMax(v, 5, &min, &max);

    printf("Min=%d Max=%d\n", min, max);

    float vf[3] = {2,4,8};

    normalizaVetor(vf, 3);

    for(int i=0; i<3; i++)
        printf("%.2f ", vf[i]);

    printf("\n");

    return 0;
}