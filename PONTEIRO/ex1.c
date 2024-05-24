/**
 * @file ex1.c
 * @author Guilherme Dicati
 * @brief 1) Escreva um programa que contenha duas variáveis inteiras. Compare os
 * endereços e exiba o endereço e o conteúdo do maior endereço.
 * @version 0.1
 * @date 2024-04-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    int *ptrA = &a;
    int *ptrB = &b;
    if (ptrA > ptrB)
    {
        printf("O endereço de A = %d é maior: %p\n", a, ptrA);

    }else{
        printf("O endereço de B = %d é maior: %p\n", b, ptrB);
    }

    

    return 0;
}

