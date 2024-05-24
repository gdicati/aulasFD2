/**
 * @file exemplo.c
 * @author Guilherme Dicati
 * @brief 
 * @version 0.1
 * @date 2024-04-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
/*
    int idade = 19;
    int *ptrIdade = &idade;

    printf("A idade é: %d\n", idade);
    printf("A idade é: %p\n", ptrIdade);
    printf("A idade é: %d\n", *ptrIdade);
    printf("O endereço do ponteiro é: %p\n", &ptrIdade);
*/
    int vetor [5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(vetor +i));
    }
    



    return 0;
}