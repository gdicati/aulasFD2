/**
 * @file ex2.c
 * @author Guilherme Dicati
 * @brief 2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
 * o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
 * igual a zero, um ponteiro nulo deverá ser retornado.
 * @version 0.1
 * @date 2024-05-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>


int* retornaPtr(int n){

    int* ptr = (int*) calloc(n, sizeof(int)); 
    if (n <= 0)
    {
        ptr = NULL;
        return ptr;
    }else{
        return ptr;
    }
    
}

int main (){

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *ptr = retornaPtr(n);
    if (ptr == NULL)
    {
        printf("Valor <= 0 digitado\n");
    }else{
        printf("Vetor alocado com sucesso!\n");
    }
    free(ptr);
    
    return EXIT_SUCCESS;
}