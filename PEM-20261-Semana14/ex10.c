/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Jogo da Memória                  *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>

void exibir(int m[4][4]) {
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tab[4][4] = {
        {1,2,3,4},
        {2,5,6,7},
        {3,6,5,8},
        {4,7,8,1}
    };

    int somaPrincipal = 0, somaSecundaria = 0;

    exibir(tab);

    for(int i=0; i<4; i++) {
        somaPrincipal += tab[i][i];
        somaSecundaria += tab[i][3-i];
    }

    printf("Diagonal principal: %d\n", somaPrincipal);
    printf("Diagonal secundaria: %d\n", somaSecundaria);

    return 0;
}