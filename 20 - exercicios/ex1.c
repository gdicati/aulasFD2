/**
 * @file ex1.c
 * @author your name (you@domain.com)
 * @brief 1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima. 
 * @version 0.1
 * @date 2024-05-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int *vetor;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) calloc(tamanho, sizeof(int));
    if (vetor == NULL)
    {
        perror("Erro ao alocar memoria.\n");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o vetor[%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Exibindo vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);



    return EXIT_SUCCESS;
}