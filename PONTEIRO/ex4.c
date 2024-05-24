/**
 * @file ex4.c
 * @author Guilherme Dicati
 * @brief Crie um programa que contenha um vetor de inteiros de tamanho 5. Utilizando aritmética de ponteiros, 
 * leia os dados do teclado e exiba seus valores multiplicado por 2. 
 * Em seguida, exiba o endereço de memória das posições que contém valores pares.
 * @version 0.1
 * @date 2024-04-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5]; 
    int *ptr;
    int i;


    printf("Digite 5 números:\n");
    ptr = vetor; 
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr+i);
        *ptr *= 2;
        ;
    }

    
    printf("\nValores multiplicados por 2:\n");
    ptr = vetor; 
    for (i = 0; i < 5; i++) {
        printf("%d ", *ptr+i);
        ; 
    }

    
    printf("\n\nEndereço de memória das posições com valores pares:\n");
    ptr = vetor; 
    for (i = 0; i < 5; i++) {
        if (*ptr % 2 == 0) {
            printf("Endereço: %p\n", ptr);
        }
        ptr++; 
    }

    return 0;
}