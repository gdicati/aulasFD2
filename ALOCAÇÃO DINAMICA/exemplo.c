/**
 * @file exemplo.c
 * @author Guilherme Dicati         
 * @brief 
 * @version 0.1
 * @date 2024-04-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>




int main (){
    
    //alocação estatica
    //int vetor[10];
    //Vetor para float
    //float* vetorDinamico = (float*) malloc(10 * sizeof(float));    
    //Serie* vetorSerie = (Serie*) malloc(10 * sizeof(Serie)); 
    
    //malloc
    int* vetorDinamico = (int*) malloc(10 * sizeof(int));
    
    //calloc
    int tamanho;
    printf("Digite o tamanho do vetor calloc: ");
    scanf("%d", &tamanho);
    int* vetorCalloc = (int*) calloc(tamanho, sizeof(int));  

    //verifica se a memoria foi alocada corretamente
    if (vetorDinamico == NULL){
        printf("Erro ao alocar memória\n");
        return 1;//na main
        exit(EXIT_FAILURE);//fora da main
    }
  
    if (vetorCalloc == NULL){
        printf("Erro ao alocar memória");
        return EXIT_FAILURE;//na main
        exit(EXIT_FAILURE);//fora da main
    }

        for (int i = 0; i < tamanho; i++){
        printf("Preencha o indice %d: ",i+1);
        scanf("%d", &vetorDinamico[i]);
    }

    for (int i = 0; i < tamanho; i++){
        printf("Vetor[%d] = %d\n",i+1, vetorDinamico[i]);
    }


    printf("Digite o novo tamanho do vetor calloc: ");
    scanf("%d", &tamanho);
    vetorCalloc = (int*) realloc(vetorCalloc, tamanho);
    
    


    for (int i = 0; i < tamanho; i++){
        printf("Preencha o indice %d: ",i+1);
        scanf("%d", &vetorDinamico[i]);
    }

    for (int i = 0; i < tamanho; i++){
        printf("Vetor[%d]😘😘😘😘😘 = %d\n",i+1, vetorDinamico[i]);
    }
    
    free(vetorDinamico);
    free(vetorCalloc);

    return EXIT_SUCCESS;
}