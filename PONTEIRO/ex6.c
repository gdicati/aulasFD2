/**
 * @file ex6.c
 * @author Guilherme Dicati ()
 * @brief considere a seguinte declaração:
   int a, *b, **c, ***d;
   Escreva um programa que receba o valor de a, calcule e exiba:

    O dobro do valor a, utilizando o ponteiro b
    O triplo do valor a, utilizando o ponteiro c
    O quadruplo do valor a, utilizando o ponteiro d

 * @version 0.1
 * @date 2024-04-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, *b, **c, ***d;


    b = &a;
    c = &b;
    d = &c;


    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("O dobro de a: %d\n", (*b) * 2);
    printf("O triplo de a: %d\n", (**c) * 3);
    printf("O quadruplo de a: %d\n", (***d) * 4);

    return 0;
}
