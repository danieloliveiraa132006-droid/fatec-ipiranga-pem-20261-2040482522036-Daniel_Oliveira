/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Calculadora Modular              *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>
        a = temp;
    }
    return a;
}

int potencia(int base, int exp) {
    int r = 1;

    for(int i=0; i<exp; i++)
        r *= base;

    return r;
}

int primo(int n) {
    if(n < 2)
        return 0;

    for(int i=2; i<n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

void binario(int n) {
    int v[32], i=0;

    while(n > 0) {
        v[i++] = n % 2;
        n /= 2;
    }

    for(int j=i-1; j>=0; j--)
        printf("%d", v[j]);

    printf("\n");
}

int main() {
    int op;

    do {
        printf("1-MDC\n2-Potencia\n3-Primo\n4-Binario\n0-Sair\n");
        scanf("%d", &op);

        int a,b;

        switch(op) {
            case 1:
                scanf("%d %d", &a, &b);
                printf("MDC=%d\n", mdc(a,b));
                break;

            case 2:
                scanf("%d %d", &a, &b);
                printf("Potencia=%d\n", potencia(a,b));
                break;

            case 3:
                scanf("%d", &a);
                printf("%s\n", primo(a)?"Primo":"Nao primo");
                break;

            case 4:
                scanf("%d", &a);
                binario(a);
                break;
        }

    } while(op != 0);

    return 0;
}