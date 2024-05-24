/**
 * @file exemplo somavetor.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-03-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void incrementaVetor(int vetor[]){

for (int i = 0; i < 10; i++)
{
    vetor[i]++;
}
    return;
}

int main (){

    int meuVetor[10] = {10,11,12,13,14,15,16,17,18,19};
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor na posição %d: %d\n", i+1, meuVetor[i]);
    }
    incrementaVetor(meuVetor);
    printf("\n\n Depois função\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor na posição %d: %d\n", i+1, meuVetor[i]);
    }


    return 0;
}