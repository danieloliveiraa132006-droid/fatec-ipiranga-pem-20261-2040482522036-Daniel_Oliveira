/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Biblioteca de Strings            *
* Data - 28/05/2026                                      *
* Autor: Daniel Oliveira                                 *
*--------------------------------------------------------*/

#include <stdio.h>
#include "stringutil.h"

int main() {
    char s1[] = "arara";
    char s2[] = "programacao";

    printf("Vogais: %d\n", contaVogais(s2));

    inverteCString(s2);
    printf("Invertida: %s\n", s2);

    printf("Palindromo: %d\n", ePalindromo(s1));

    return 0;
}