/**
 * @file ex2.c
 * @author Guilherme Dicati
 * @brief 2) Crie um programa que contenha um vetor float (tamanho 10). Imprima o
 * endereço de cada posição desse vetor.
 * @version 0.1
 * @date 2024-04-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main (){
    float vetor[10] = {10,20,30,40,50,60,70,80,90,100};
    float *ptrVetor = vetor;
    for (int i = 0; i < 10; i++)
    {
        printf("%p\n", ptrVetor+i);
    }
    

    return 0;
}